//Animation.h
//@author: Surbhi Bahri

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
