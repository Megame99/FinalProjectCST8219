// AnimationManager.h
#include <iostream>
#include "Animation.h"
#include "Frame.h"
#include <vector>
#pragma once
class AnimationManager
{
std::string managerName;
std::vector<animation> animations;
public:
AnimationManager(std::string name) :managerName(name) { }
~AnimationManager() { }
void EditAnimation();
void DeleteAnimation();
// Add an animation
friend std::istream& operator>>(std::istream&, AnimationManager&);
// Output the animations
friend std::ostream& operator<<(std::ostream&, AnimationManager&);
};