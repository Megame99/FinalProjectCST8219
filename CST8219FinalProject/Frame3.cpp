#include "frame.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>



using namespace std;

frame::frame(char* name, double duration)
{
	this->frameName = name;
	this->duration = duration;
}

frame::frame(const frame& f)
{
	this->frameName = f.frameName;
	this->duration = f.duration;
}

frame::~frame()
{
}

frame& frame::operator=(const frame&)
{
	// TODO: insert return statement here
}
