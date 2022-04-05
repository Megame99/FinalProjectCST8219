#include "animationPart2.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

Animation::Animation()
{
	char* fName;
	string name;
	cout << "Please enter the Animation Name" << endl;
	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Animation Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	int n = name.length();
	this->animationName = (char*)malloc(n);
	this->frames = (Frame*)malloc(sizeof(Frame*));
	this->frames->GetpNext() = NULL;	
	/**frame->GetFrameName();*/
	
	strcpy(animationName, name.c_str());
	for (int i = 0; i < n; i++) {
		cout << animationName[i];
	}
}

Animation::~Animation()
{

}

void Animation::InsertFrame()
{
	getchar();
	Frame* temp = new Frame();

	string name;
	cout << "Please enter the name of the frame" << endl;

	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Frame Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	
	int n = name.length();
	temp->GetFrameName() = (char*)malloc(n);
	strcpy(temp->GetFrameName(), name.c_str());
	
	temp->GetpNext() = frames;
	frames = temp;
	//for (int i = 0; i < n; i++) {
	//	cout << frames->frameName[i];
	//}
}

//
// Call Deconstructor
void Animation::DeleteFrame()
{
	getchar();

	if (frames->GetFrameName() == NULL) {
		cout << "Animation is Empty" << endl;
	}

	Frame* current = frames;



	while (current->GetpNext() != NULL) {
		if (current->GetpNext()->GetpNext() == NULL) {
			break;
		}
		current = current->GetpNext();
	}

	current->GetpNext() = NULL;
}

void Animation::ReportAnimation()
{
	getchar();

	cout << "Animation Name is " << animationName << endl;

	Frame* current = frames;
	int z = 0;

	cout << "Report the animation" << endl;

	while (current->GetpNext() != NULL) {
		cout << "Image #" << z << ", file name =" << current->GetFrameName() << endl;
		z++;
		current = current->GetpNext();
	}

}

void Animation::EditFrame() {

	getchar();

	cout << "Edit a Frame in the Animation" << endl;

	Frame* current = frames;
	int z = 0;
	int d = -1;

	while (current->GetpNext() != NULL) {
		z++;
		current = current->GetpNext();
	}

	if ((z == 0))
	{
		cout << "List is Empty nothing to Edit Here... " << endl;
		return;
	}

	cout << "There are " << z << " frame(s) in the list. Please specify the index (<= " << z << ") to edit at: " << endl;

	while (!(cin >> d) || (d < 0) || (d > z)) {
		cout << "Please enter a valid index" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
	current = frames;
	z = 0;
	while (z != d) {
		z++;
		current = current->GetpNext();
	}
	cout << "The name of the frame is " << current->GetFrameName() << endl;
	cout << "What do you wish to replace it with? " << endl;
	cin.clear();
	cin.ignore(256, '\n');
	string name;

	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Frame Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	int n = name.length();
	current->GetFrameName() = (char*)realloc(current->GetFrameName(), n);
	strcpy(current->GetFrameName(), name.c_str());

}


