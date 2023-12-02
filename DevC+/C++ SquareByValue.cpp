#include<iostream>
using namespace std;
int SquareByValue(int);
int SquareByRef(int);
int boxvalume(int length, int width, int height);
//Default arguments for boxvolume are 1,1,1

int main(){
	// This section is about Pass-by-Value VS Pass-by-Reference
	//Pass-by-Value:		passing a copy of vatiable to a function
	//						so whatever function does to the variable
	//						will not affect the original vatiable (x),
	//Pass-by-Reference:	passing the original variable to a
	//						function, so whatever function does to
	//						the variable will affect the original.
	int x = 2;
	cout << "(pre) x= " << x << endl;
	SquareByValue(x);
	cout << "(post) x= " << x << endl;
	
	cout << "(pre: pass by reference) x = " << x << endl;
	SquareByRef(x);
	cout << "(post: pass by reference) x =" << x << endl;
	
	//reference as Alias
	int y = 3;
	int &z = y; // z refers to y (z is an alias for y)
	cout << "y = " << y << endl;
	cout << "z = " << z << endl; 
	cout << "&z = " << &z << endl;
	
	//Default Arguments
//	cout << "boxVolume()" << boxVolume() << endl;
//	cout << "boxVolume(2)" << boxVolume() << endl;
//	cout << "boxVolume(2,3)" << boxVolume() << endl;
//	cout << "boxVolume(2,3,6)" << boxVolume() << endl;
	
	return 0;
	
}
int SquareByRef(int &n){
	return n *= n;
}

int SquareByValue(int n){
	return n *= n;
}
int boxvalume(int length, int width, int height){
	return length*width*height;
}
