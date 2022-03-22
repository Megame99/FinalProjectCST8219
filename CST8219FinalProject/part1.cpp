// part1.c
//@author: Surbhi Bahri

#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC	// need this to get the line identification


//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF); // in main, after local declarations

//NB must be in debug build

#include <crtdbg.h>

#include <stdio.h>

#include <string.h>
#include <iostream>
using namespace std;

typedef enum { FALSE = 0, TRUE } BOOL;

struct Frame {

	char* frameName;

	struct Frame* pNext;

};

typedef struct {
	char* animationName;
	struct Frame* frames;

} Animation;

// Forward declarations

void InitAnimation(Animation*);

void InsertFrame(Animation*);

void DeleteFrame(Animation*);

void EditFrame(Animation*); // Print message indicating how many frames exist. Search by Index (<=1).

void ReportAnimation(Animation*); // Print Function

void CleanUp(Animation*);

int main(void)

{
	char response;

	BOOL RUNNING = TRUE;
	Animation RG;
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	InitAnimation(&RG);

	while (RUNNING)

	{

		printf("MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4. Report the Animation\n 5. Quit\n"); scanf("%c", &response);

		switch (response)
		{
		case '1': InsertFrame(&RG); break;
		case '2': DeleteFrame(&RG); break;

		case '3':EditFrame(&RG); break;

		case '4':ReportAnimation(&RG); break;
		//case '5':RUNNING = FALSE; CleanUp(&RG); break;

		default:printf("Please enter a valid option\n");

		}

		
	}
	return 0;
}

#include <string>
void InitAnimation(Animation* animation)
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
	animation->animationName = (char*)malloc(n);
	animation->frames = (Frame*)malloc(sizeof(Frame*));
	animation->frames->pNext = NULL;
	strcpy(animation->animationName, name.c_str());
	for (int i = 0; i < n; i++) {
		cout << animation->animationName[i];
	}
};

#include <string>
void InsertFrame(Animation* animation)
{
	getchar();
	
	Frame* temp=(Frame*)malloc(sizeof(struct Frame));
	/*Frame* head = (Frame*)malloc(sizeof(struct Frame));*/
	
	string name;
	cout << "Please enter the name of the frame" << endl;

	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Frame Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	
	int n = name.length();
	temp->frameName = (char*)malloc(n);
	strcpy(temp->frameName, name.c_str());
	//animation->frames = animation->frames->pNext;
	temp->pNext = animation->frames;
	animation->frames = temp;
	for (int i = 0; i < n; i++) {
		cout << animation->frames->frameName[i];
	}



};

void DeleteFrame(Animation* animation)
{
	getchar();

	if (animation->frames->frameName == NULL) {
		cout << "Animation is Empty" << endl;
	}

		Frame* current = animation->frames;

		

		while (current->pNext != NULL) {
			if (current->pNext->pNext == NULL) {
				break;	
			}
			current = current->pNext;
		}

		current->pNext = NULL;
}

void ReportAnimation(Animation* animation)
{
	getchar();

	cout << "Animation Name is " << animation->animationName << endl;

	Frame* current = animation->frames;
	int z = 0;

	cout << "Report the animation" << endl;

	while (current->pNext != NULL) {
		cout << "Image #" << z <<", file name =" << current->frameName << endl;
		z++;
		current = current->pNext;
	}

}

void EditFrame(Animation* animation) {

	getchar();

	cout << "Edit a Frame in the Animation" << endl;

	Frame* current = animation->frames;
	int z = 0;
	int d = -1;

	while (current->pNext != NULL) {
		z++;
		current = current->pNext;
	}
	cout << "There are " << z << " frame(s) in the list. Please specify the index (<= " << z << ") to edit at: " << endl;

	while (!(cin >> d) || (d < 0) || (d>z)) {
		cout << "Please enter a valid index" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
	current = animation->frames;
	z = 0;
	while (z != d) {
		z++;
		current = current->pNext;
	}
	cout << "The name of the frame is " << current->frameName << endl;
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
	current->frameName = (char*)realloc(current->frameName, n);
	strcpy(current->frameName, name.c_str());

}

