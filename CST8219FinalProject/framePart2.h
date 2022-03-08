//Frame.h
//@author: Surbhi Bahri

#pragma once

class Frame {
	char* frameName;
	Frame* pNext;
public:
	Frame();
	~Frame();
	char*& GetFrameName() { return frameName; }
	Frame*& GetpNext() { return pNext; }
};
