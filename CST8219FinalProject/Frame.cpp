#include "framePart2.h"

#include <crtdbg.h>

#include <stdio.h>

#include <string.h>
#include <iostream>
using namespace std;

Frame::Frame() {
	frameName = NULL;
	pNext = NULL;
}

Frame::~Frame()
{
}

//Frame*& Frame::GetpNext() {
//	return pNext;
//}
//
//char*& Frame::GetFrameName() {
//	return frameName;
//}