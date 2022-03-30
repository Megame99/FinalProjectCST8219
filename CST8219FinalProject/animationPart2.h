//Animation.h
//@author: Surbhi Bahri
#include "framePart2.h"
#pragma once

class Animation
{
	char* animationName;
	Frame* frames;
public:
	Animation();
	~Animation();
	void InsertFrame();
	void EditFrame();
	void DeleteFrame();
	void ReportAnimation();
};
