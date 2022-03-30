#include "framePart2.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>



using namespace std;

Frame::Frame()
{
	this->frameName = NULL;
	this->pNext = NULL;
}

Frame::~Frame()
{
}

//void Frame::SetFrameName(char* frameName)
//{
//	string name;
//	cout << "Please enter the name of the frame" << endl;
//
//	while (!getline(cin, name))
//	{
//		cout << "Error... Please enter Valid Frame Name!";
//		cin.clear();
//		cin.ignore(256, '\n');
//	}
//
//	int n = name.length();
//	this->frameName = (char*)malloc(n);
//	strcpy(this->frameName, name.c_str());
//}