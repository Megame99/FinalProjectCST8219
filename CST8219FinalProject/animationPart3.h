// Animation.h
//@author: Surbhi Bahri
#pragma once
Class animation
{
std::string animationName;
std::forward_List<frame> frames;
public:
animation(std::string name) :animationName(name) { }
~animation() { }
void EditFrame();
void DeleteFrame();
// Add a frame as in cin>>A;
friend std::istream& operator>>(std::istream&, Animation&);
// Output the frames as in cout<<A;
friend std::ostream& operator<<(std::ostream&, Animation&);
};