/*
 *  ofxJSUtils.cpp
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 04/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSUtils.h"

// --------------------------------------------------------
// readFileIntoString
// http://www.cplusplus.com/reference/clibrary/cstdio/fread/
// --------------------------------------------------------
bool ofxJSUtils::readFileIntoString(string pathAbsolute, string& strResult)
{
	FILE * pFile=0;
	long lSize=0;
	char * buffer=0;
	size_t result=0;
	bool isError = false;

	pFile = fopen ( pathAbsolute.c_str() , "rb" );
	if (pFile!=NULL)
	{
		// obtain file size:
		fseek (pFile , 0 , SEEK_END);
		lSize = ftell (pFile);
		rewind (pFile);

		// allocate memory to contain the whole file (null terminated for string, so +1 for buffer):
		buffer = (char*) malloc (sizeof(char)*lSize+1);
		memset(buffer, 0, sizeof(char)*lSize+1);
		if (buffer)
		{
			// copy the file into the buffer:
			result = fread (buffer,1,lSize,pFile);
			if (result == lSize) 
			{
				strResult = buffer;
			}
			else
				isError = true;
		}
		else
			isError = true;

	}
	else
		isError = true;

	fclose(pFile);
	free (buffer);

	return !isError;
}


// --------------------------------------------------------
// findContainingFolder
// --------------------------------------------------------
string ofxJSUtils::findContainingFolder	(string pathFile)
{
	string result;
	const char* pStart	= pathFile.c_str();
	const char* p		= pStart +  pathFile.size();
	while (*p != '/' && p != pStart)
	{
		p--;
	}

	if (p != pStart)
		result = pathFile.substr(0,(p-pStart+1));
	return result;
}
