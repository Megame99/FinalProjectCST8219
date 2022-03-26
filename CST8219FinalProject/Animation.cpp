#include "animationPart2.h"

#include <crtdbg.h>

#include <stdio.h>

#include <iostream>
#include "framePart2.h"
#include "Frame.cpp"
#include <string>
using namespace std;

Animation::Animation()
{
	string name;
	cout << "Please enter the Animation Name" << endl;
	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Animation Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	int n = name.length();
	animationName = (char*)malloc(n);
	/*Frame *frame = new Frame();
	frames.*/
	
	

	/**frame->GetFrameName();*/
	
	strcpy(animationName, name.c_str());
	for (int i = 0; i < n; i++) {
		cout << animationName[i];
	}
}

Animation::~Animation()
{

}
// Call constructor to insert
//void Animation::InsertFrame()
//{
//	getchar();
//
//	Frame* temp = (Frame*)malloc(sizeof(struct Frame));
//	/*Frame* head = (Frame*)malloc(sizeof(struct Frame));*/
//
//	string name;
//	cout << "Please enter the name of the frame" << endl;
//
//	while (!getline(cin, name))
//	{
//		cout << "Error... Please enter Valid Frame Name!";
//		cin.clear();
//		cin.ignore(256, '\n');
//	}
//
//	int n = name.length();
//	temp->frameName = (char*)malloc(n);
//	strcpy(temp->frameName, name.c_str());
//	//animation->frames = animation->frames->pNext;
//	temp->pNext = animation->frames;
//	animation->frames = temp;
//	for (int i = 0; i < n; i++) {
//		cout << animation->frames->frameName[i];
//	}
//}
//
//// Call Deconstructor
//void Animation::DeleteFrame()
//{
//	getchar();
//
//	if (animation->frames->frameName == NULL) {
//		cout << "Animation is Empty" << endl;
//	}
//
//	Frame* current = animation->frames;
//
//
//
//	while (current->pNext != NULL) {
//		if (current->pNext->pNext == NULL) {
//			break;
//		}
//		current = current->pNext;
//	}
//
//	current->pNext = NULL;
//}
//
//void Animation::ReportAnimation()
//{
//	getchar();
//
//	cout << "Animation Name is " << animation->animationName << endl;
//
//	Frame* current = animation->frames;
//	int z = 0;
//
//	cout << "Report the animation" << endl;
//
//	while (current->pNext != NULL) {
//		cout << "Image #" << z << ", file name =" << current->frameName << endl;
//		z++;
//		current = current->pNext;
//	}
//
//}


