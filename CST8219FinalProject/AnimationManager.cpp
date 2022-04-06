#include "animationManager.h"
using namespace std;


void AnimationManager::EditAnimation() {
	//char response;
	//bool RUNNING = true;
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//while (RUNNING)
	//{
	//	cout << "MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4. Report the Animation\n 5. Quit" << endl;
	//	cin >> response;
	//	switch (response)
	//	{
	//	case '1':A.InsertFrame(); break;
	//	case '2':A.DeleteFrame(); break;
	//	case '3':A.EditFrame(); break;
	//	case '4':A.ReportAnimation(); break;
	//	case '5':RUNNING = false; break;
	//	default:cout << "Please enter a valid option" << endl;
	//	}
	//}
	//return;

}

void AnimationManager::DeleteAnimation() 
{

}

std::istream& operator>>(std::istream& in, AnimationManager& a)
{
	string name;
	// TODO: insert return statement here
	cout << "Add an animation to the animation manager\n Please enter the animation name: " << endl;
	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Animation Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	int n = name.length();
	animation* anim = new animation(name);
	a.animations.push_back(*anim);

}

std::ostream& operator<<(std::ostream&, AnimationManager& a)
{
	
	cout << "Animation Manager: " << a.managerName << endl;
	for (auto i = a.animations.begin(); i != a.animations.end(); ++i) {
		cout << "\t Animation Name is Animation" << *i << endl;
		cout << "\t Report the Animation" << endl;
	}
		
}

