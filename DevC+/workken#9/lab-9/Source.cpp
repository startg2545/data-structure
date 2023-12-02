#include <iostream>
#include "list.h"

using namespace std;
void main()
{
	int x;
	List cat;
	while (x == 0) {
		cout << "pass your data : ";
		cin >> x;
		cat.headPush(x);
		cout << "pass 0 When you are satisfied" << endl;
	}
	cat.print();

	while (x == 0) {
		cout << "pass your data : ";
		cin >> x;
		cat.tailPush(x);
		cout << "pass 0 When you are satisfied" << endl;
	}
	cat.print();

	cat.headPop();
	cat.print();

	cat.tailPop();
	cat.print();

	cout << "pass your data you want to delete : ";
	cin >> x;
	cat.deleteNode(x);
	cat.print();


}