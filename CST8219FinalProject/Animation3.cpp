#include "Animation.h"

#include <iostream>
#include <string>
using namespace std;

void animation::EditFrame() {

}
void animation::DeleteFrame() {

}

std::istream& operator>>(std::istream& in, animation& a)
{
	string name;
	// TODO: insert return statement here
	cout << "Add a frame to the animation \n Please enter the frame name: " << endl;
	while (!getline(cin, name))
	{
		cout << "Error... Please enter Valid Frame Name!";
		cin.clear();
		cin.ignore(256, '\n');
	}
	char* name2;
	strcpy(name2,name.c_str());



	int n = name.length();
	frame *r = new frame(name2, 10.0);


	/*anigma.animations.push_back(*anim);*/

}

std::ostream& operator<<(std::ostream&, animation& a)
{

	cout << "Animation Manager: " << a.managerName << endl;
	for (auto i = a.animations.begin(); i != a.animations.end(); ++i) {
		cout << "\t Animation Name is Animation" << *i << endl;
		cout << "\t Report the Animation" << endl;
	}

}
