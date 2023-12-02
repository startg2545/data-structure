#include <iostream>
#include "strvar.h"

void conversation(int max_name_size);

int main()
{
	using namespace std;
	conversation(30);
	cout << "End of Demo.\n";
	return 0;
}

void conversation(int max_name_size)
{
	using namespace std;
	using namespace strvarken;

	StringVar your_name(max_name_size), our_name("Borg");

	cout << "What is your name?\n";
	your_name.input_line(cin);
	cout << "We are " << our_name << endl;
	cout << "We will meet again " << your_name << endl;
}