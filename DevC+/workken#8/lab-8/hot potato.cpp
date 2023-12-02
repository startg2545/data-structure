#include <iostream>
#include <list>
using namespace std;

int main() {
	int num, round, dead;
	cout << "Enter number of player : ";
	cin >> num;
	cout << "Enter round of player : ";
	cin >> round;

	list<int> l;

	list<int>::iterator it,it2;
	//it = l.begin();
	for (int i = 1; i <= num; i++)	{
		l.push_back(i);
	}
	while (l.size() != 1) {


		for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
			cout << *i;
			if (*i <= round) {
				cout << " --> ";
			}
			else {
				cout << "     ";
			}
		}
		it = l.begin();

		it2 = it;
		cout << endl << "Player " << *it2 << " was dead" << endl;
		it++;
		if (it == l.end()) {
			it = l.begin();

		}

		for (int i = 0; i < round; i++) {
			it++;
			if (it == l.end()) {
				it = l.begin();
			}
		}
		l.erase(it2);

		
		
	}
	cout << "Player " << *l.begin() << " wins";

	return 0;
}