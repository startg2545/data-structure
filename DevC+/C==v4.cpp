#include<iostream>
using namespace std;

int main(){
	int grade;
	cout << "Enter a grade: ";
	cin >> grade;
	if(grade>=60){
		cout << "passed.\n";
	} else{
		cout << "Failed.\n";
	}
	return 0;
}
