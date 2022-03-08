//Frame.h (Part 3)//@author: Surbhi Bahri
 
#pragma once
Class frame
{
char* frameName;
double duration;
public:
frame(char*, double);
frame(const frame&);
~frame();
frame& operator=(const Frame&);
friend std::ostream& operator << (std::ostream&, frame&);
};