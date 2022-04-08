// part3.cpp
//@author: Surbhi Bahri
#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC // need this to get the line identification
//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
// in main, after local declarations
//NB must be in debug build #include <crtdbg.h> 
#include <iostream> 
#include <string>
#include <vector> 
#include <forward_list> 
using namespace std;

#include "animationManager.h"
int main(void) {
	char response;
	bool RUNNING = true; AnimationManager M("Manager1"); _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	while (RUNNING) {
		cout << "MENU\n 1. Add an Animation\n 2. Delete an Animation\n 3. Edit an Animation\n 4. list the Animations\n 5.Quit"<< endl; 
			cin >> response; switch (response)
		{
case '1':cin >> M; break;
case '2':M.DeleteAnimation(); break; case
'3':M.EditAnimation(); break; case '4':cout << M; break;
case '5':RUNNING = false; break; default:cout << "Please enter a valid option"<<endl;}} return 0;}