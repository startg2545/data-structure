#include<iostream>
using namespace std;
int main(){
	int point;
	cout << "Enter your grade : ";
	cin >> point;
	if(point>100){
		cout << "incorrect password";
	}else if(point<0){
		cout << "incorrect password FUCK";
	}else if(point>=90){
		cout << "your grade is A";
	}else if(point>=80){
		cout << "your grade is B";
	}else if(point>=70){
		cout << "your grade is C";
	}else if(point>=60){
		cout << "your grade is D";
	}else if(point<60){
		cout << "your FFFFFFFFFFFFFFF";
	}
	return 0;
}
