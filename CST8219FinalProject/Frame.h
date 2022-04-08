//Frame.h (Part 3)//@author: Surbhi Bahri
 
#pragma once
class frame
{
char* frameName;
double duration;
public:
frame(char*, double);
frame(const frame&);
~frame();
frame& operator=(const frame&);
//friend std::ostream& operator << (std::ostream&, frame&);
};