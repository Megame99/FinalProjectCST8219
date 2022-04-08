#include "Animation.h"

#include <iostream>
#include <string>
using namespace std;

void animation::EditFrame() 
{
	int size = 0;
	int d = -1;
	for (frame& a : frames)
		++size;
	cout << endl;
	getchar();

	cout << "Edit a Frame in the Animation" << endl;

	if (frames.empty())
	{
		cout << "List is Empty nothing to Edit Here... " << endl;
		return;
	}

	cout << "There are " << size << " frame(s) in the list. Please specify the index (<= " << size << ") to edit at: " << endl;

	while (!(cin >> d) || (d < 0) || (d > size)) 
	{
		cout << "Please enter a valid index" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
}
void animation::DeleteFrame() 
{
	getchar();

	if (frames.empty()) 
	{
		cout << "Animation is Empty" << endl;
	}
	else
	{
		delete &(frames.end());
		/*frames.remove(*frames.end());*/
	}

}

std::istream& operator>>(std::istream& in, animation& a)
{
	getchar();
	char* name;
	
	// TODO: insert return statement here
	in >> name;
	frame *addf = new frame(name, 10.0);
	a.frames.push_front(*addf);

	return in;
	/*anigma.animations.push_back(*anim);*/

}

std::ostream& operator<<(std::ostream& cout, animation& a)
{

	cout << "\t Animation Name is " << a.animationName << endl;

	// for (auto i = a.animations.begin(); i != a.animations.end(); ++i) {
	//	cout << "\t Animation Name is Animation" << *i << endl;
	//	cout << "\t Report the Animation" << endl;
	//}
	return cout;
}
