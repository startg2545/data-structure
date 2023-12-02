#include<iostream>
using namespace std;
int main(){
	int num, largest, occur=0;
	for( int c=1; c<=10;c++ ){
		cout << "Enter number: ";
		cin >> num;
		if(c==0){
			largest = num;
		}
		if( num > largest ){
			largest = num;
		}
	}
	cout << "largest number is: " << largest << endl;
}
