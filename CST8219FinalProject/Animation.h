// Animation.h
//@author: Surbhi Bahri
#include "frame.h"
#include <string>
#include <forward_list>
#pragma once



class animation
{
std::string animationName;
std::forward_list<frame> frames;
public:
animation(std::string name) :animationName(name) { }
~animation() { }
void EditFrame();
void DeleteFrame();
// Add a frame as in cin>>A;
friend std::istream& operator>>(std::istream&, animation&);
// Output the animation as in cout<<A;
friend std::ostream& operator<<(std::ostream&, animation&);

};