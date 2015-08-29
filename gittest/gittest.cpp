// gittest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>


std::string feature1Logic()
{
	return "feature_1";
}


int _tmain(int argc, _TCHAR* argv[])
{
	printf( "hello %d world %s", argc, feature1Logic().c_str() );
	return 0;
}

