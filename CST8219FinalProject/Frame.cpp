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
