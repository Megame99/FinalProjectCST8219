// part2.cpp
//@author: Surbhi Bahri

#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC	// need this to get the line identification
//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF); // in main, after local declarations
//NB must be in debug build
#include <crtdbg.h>
#include <iostream>
using namespace std;
#include "framePart2.h"
#include "animationPart2.h"

int main(void)
{
	char response;
	bool RUNNING = true;
	Animation A;
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	while (RUNNING)
	{
		cout << "MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4. Report the Animation\n 5. Quit" << endl;
		cin >> response;
		switch (response)
		{
		/*case '1':A.InsertFrame(); break;
		case '2':A.DeleteFrame(); break;
		case '3':A.EditFrame(); break;
		case '4':A.ReportAnimation(); break;*/
		case '5':RUNNING = false; break;
		default:cout << "Please enter a valid option" << endl;
		}
	}
	return 0;
}
