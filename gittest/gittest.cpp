// gittest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>


std::string fet2()
{
	return "fet2_3";
}


int _tmain(int argc, _TCHAR* argv[])
{
	printf( "%s hello %d world", fet2().c_str(), argc );
	return 0;
}

