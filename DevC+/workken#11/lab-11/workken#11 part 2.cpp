#include <iostream>
#include "list.h"
#include "list.cpp"
#include "sort.cpp"
using namespace std;
int main(){
	int choose;
	cout << "Integer[1] | Character[2]"<< endl ;
	cin >> choose;
	if(choose==1){
		// a) Sort
		int r[100];
		int y=0,x;
		List<int> I_love_cat;
		cout<<"Input number for input in list\ninput -1 for end." << endl;
		do {
			y++;
			cout << "Input number in node " << y << " : ";
			cin >> x;
			if (x != -1) {
				r[y - 1] = x;
			}
		} while (x != -1);
		cout << "Sort is ";
		sort(r,y);
		for (int i = 0; i < y - 1 ; i++) {
			I_love_cat.headPush(r[i]);
		}
		I_love_cat.printList();
		// b) Unique
		cout << "Unique is ";
		for (int i = 0; i < y - 1; i++) {
			if(r[i]==r[i-1]){
				I_love_cat.deleteNode(r[i]);
			}
		}
		I_love_cat.printList();
		// c) extend to int char doubles
	}else if(choose==2){
		// a) Sort
		char r[100],x;
		int y=0;
		List<char> I_love_cat;
		cout<<"Input character for input in list\ninput -1 for end." << endl;
		do {
			y++;
			cout << "Input character in node " << y << " : ";
			cin >> x;
			if (x != '-') {
				r[y - 1] = x;
			}
		} while (x != '-');
		cout << "Sort is ";
		sort(r,y);
		for (int i = 0; i < y  ; i++) {
			I_love_cat.headPush(r[i]);
		}
		I_love_cat.printList();
		// b) Unique
		cout << "Unique is ";
		for (int i = 1; i < y ; i++) {
			if(r[i]==r[i-1]){
				I_love_cat.deleteNode(r[i]);
			}
		}
		I_love_cat.printList();
		// c) extend to int char doubles
	}else{
		cout <<"Something wrong !";
	}	
}

// Actually I love cat =^_^=
