#include "animationManager.h"
using namespace std;


void AnimationManager::EditAnimation() {
	char response;
	bool RUNNING = true;
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	while (RUNNING)
	{
		cout << "MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4. Report the Animation\n 5. Quit" << endl;
		cin >> response;
		switch (response)
		{
		case '1':A.InsertFrame(); break;
		case '2':A.DeleteFrame(); break;
		case '3':A.EditFrame(); break;
		case '4':A.ReportAnimation(); break;
		case '5':RUNNING = false; break;
		default:cout << "Please enter a valid option" << endl;
		}
	}
	return;

}