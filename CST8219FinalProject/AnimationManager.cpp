#include "animationManager.h"
using namespace std;
using namespace std;


void AnimationManager::EditAnimation() {
	getchar();
	char response;
	bool RUNNING = true;
	int z = animations.size();
	int d = -1;
	int p = 0;

	cout << "Which Animation do you wish to edit? Please provide the index (from 0 to "
		<< animations.size() << "):" << endl;
	while (!(cin >> d) || (z < 0) || (d > z)) {
		cout << "Please enter a valid index" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
	while (RUNNING)
	{
		animation animate = animations.at(d);
		cout << "MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4.Quit" << endl;
		cin >> response;
		switch (response)
		{
		case '1':
			/*string name;
			cout << "Add a frame to the animation \n Please enter the frame name: " << endl;
			while (!getline(cin, name))
			{
				cout << "Error... Please enter Valid Frame Name!";
				cin.clear();
				cin.ignore(256, '\n');
			}

			cin >> animate;*/
			break;
		case '2':

			break;
		case '3':

			break;
		case '4':RUNNING = false; break;
		default:cout << "Please enter a valid option" << endl;
		}
	}
	return;

}

void AnimationManager::DeleteAnimation() 
{
	int z = animations.size();
	int d = -1;
	int p = 0;
	if (animations.empty()) {
		cout << "No Animations." << endl; 
	}
	else {
		cout << "Which Animation do you wish to edit? Please provide the index (from 0 to "
			<< animations.size() << "):" << endl;
		while (!(cin >> d) || (z < 0) || (d > z)) {
			cout << "Please enter a valid index" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		vector<animation>::iterator iterator1 = animations.begin() + d;
		animations.erase(iterator1);
		
	
	}
	

}

std::istream& operator>>(std::istream& cin, AnimationManager& a)
{
	getchar();
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

	return cin;

}

std::ostream& operator<<(std::ostream& cout, AnimationManager& a)
{
	
	cout << "Animation Manager: " << a.managerName << endl;
	int z = 0;
	for (auto i = a.animations.begin(); i != a.animations.end(); ++i) {
		animation an = a.animations.at(z);
		cout << an << endl;
		cout << "\t Report the Animation" << endl;
		z++;
	}

	return cout;
		
}

