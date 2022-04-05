#include "frame.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>



using namespace std;

frame::frame(char* name, double duration)
{
	this->frameName = NULL;
	this->duration = NULL;
}

frame::~frame()
{
}