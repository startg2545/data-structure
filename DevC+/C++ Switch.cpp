#include<iostream>
using namespace std;
int main(){
char a;
do{
	cout << "Enter your user";
	cin >> a;
	
	switch(a){
		case 'a':
		cout << "Vowel" << endl;
		break;
		case 'e':
		cout << "vowel" << endl;
		break;
		case 'i':
		cout << "vowel" << endl;
		break;
		case 'o':
		cout << "vowel" << endl;
		break;
		case 'u':
		cout << "vowel" << endl;
		break;
	default:
		cout << "not vowel" << endl;
		break;
	}
}while(a!='A');
	cout << "Thank you^_^";
	return 0;
}
