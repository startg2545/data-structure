#include<iostream>
using namespace std;
int main(){
	int num;
	do{
		cout << "enter a password";
		cin >> num;
	switch(num){
		case 1234:
		cout << "correct password" << endl ;
		break;
	default:
		cout << "incorrect password" << endl ;
}
	}
	while(num!=1234);
		cout << "Welcome";
return 0;
}

