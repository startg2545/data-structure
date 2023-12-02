#include <iostream>
#include "list.h"
#include "list.cpp"
using namespace std;
int main(){
	// a) Sort
	int r[100], y=0, x;
	List I_love_cat;
	cout<<"Input number for input in list\ninput 0 for end." << endl;
	do {
		y++;
		cout << "Input number in node " << y << " : ";
		cin >> x;
		if (x != 0) {
			r[y - 1] = x;
		}
	} while (x != 0);
	cout << "Number is ";
	for (int i = 0; i < y - 1; i++) {
		I_love_cat.headPush(r[i]);
	}
	I_love_cat.printList();
	// b) Unique
	
}

//int main()
//{
//	int r[100], y=0, x;
//	List I_love_cat;
//	cout<<"Input number for input in list\ninput 0 for end." << endl;
//	do {
//		y++;
//		cout << "Input number in node " << y << " : ";
//		cin >> x;
//		if (x != 0) {
//			r[y - 1] = x;
//		}
//	} while (x != 0);
//	
//	cout << "Do you want to use headPush [1] or tailPush [2]?\nanswer : ";
//	cin >> x;
//	if (x == 1) {
//		cout << "Input : ";
//		for (int i = 0; i < y - 1; i++) {
//			I_love_cat.headPush(r[i]);
//		}
//		I_love_cat.printList();
//	}
//	else if (x == 2) {
//		for (int i = 0; i < y - 1; i++) {
//			I_love_cat.tailPush(r[i]);
//		}
//		cout << endl;
//		cout << "Number : ";
//		I_love_cat.printList();
//	}
//	x = 1;
//	cout << endl;
//	while(x!=0){
//		cout << "Do you want to use headPop[1] or tailPop[2] or deleteNode[3] or checkNode[4]?\ninput 0 for end.\nanswer : ";
//		cin >> x;
//		if (x == 1) {
//			cout << "Number " << I_love_cat.headPop() << " has been deleted." << endl;
//			cout << "Number : "; I_love_cat.printList();
//		}
//		else if (x == 2) {
//			cout << "Number " << I_love_cat.tailPop() << " has been deleted." << endl;
//			cout << "Number : "; I_love_cat.printList();
//		}
//		else if (x == 3) {
//			cout << "Input the number that you want to delete : ";
//			cin >> x;
//			cout << "Number " << x << " has been deleted." << endl;
//			I_love_cat.deleteNode(x);
//			cout << "Number : ";I_love_cat.printList();
//		}
//		else if (x == 4) {
//			int bruh;
//			cout << "Input the number that you want to check : ";
//			cin >> x;
//			bruh = I_love_cat.isInList(x);
//			if (bruh == 1) {
//				cout << "Number " << x << " available in the list."<<endl;
//			}
//			else if (bruh == 0){
//				cout << "Number " << x << " unavailable in the list." <<endl;
//			}
//		}
//		cout << endl ;
//	}
//	cout << "Thank for used";
//	return 0;
//}
