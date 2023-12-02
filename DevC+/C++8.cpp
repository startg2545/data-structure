#include<iostream>
using namespace std;
int main(){
	int num, biggest, c=0;
	for( int num = 1; c <= 10; ++num ){
		cout << "Enter a number: ";
		cin >> num;
		if(c==0){ //set the first number as the smallest one
			biggest = num;
		}
		if(num > biggest){
			biggest = num;
		}
		c++; // Increment our counter by one
	}
	cout << "biggest number is " << biggest << endl;
	
	return 0;
}
