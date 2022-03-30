//Frame.h
//@author: Surbhi Bahri

#pragma once

/* Modified so aks */
class Frame {
	char* frameName;
	Frame* pNext;
public:
	Frame();
	~Frame();
	char*& GetFrameName() { return frameName; };
	Frame*& GetpNext() { return pNext; };
};
