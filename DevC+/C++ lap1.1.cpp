#include<iostream>
using namespace std;
//int main(){
//	int x, y, z, product;
//	cout << "1.This is a C++ Program\n" ;
//	cout << "2.This is C++ \nProgram" ;
//	cout << "3.This\nis\nC++\nProgram";
//	cout << "Enter an integer : ";
//	cin >> x;
//	if(x==102){
//		cout << "Correct input!";
//	}else{
//	cout << "Incorrect input!";
//	cout << endl;
//}	// it is product
//	cout << "Enter 3 integer : ";
//	cin >> x >> y >> z;
//	product = x*y*z;
//	cout << "Product is : " << product ;
//	
//	return 0;
//}
//int main(){
//	int x;
//	cout << "Enter integer : ";
//	cin >> x;
//	if(x<7){
//		cout << "x is less then 7";
//	}else if(x>=7){
//		cout << "x is equal or greater then 7";
//	}
//	return 0;
//}
//int main(){
//	int x;
//	cin >> x;
//	if(x>56){
//		cout << "YOU WIN";
//	}else{
//		cout << "YOU LOSE";
//	}
//}
int main(){
	int a, x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9 >> x10;
	a=x1;
	if(x2<x1){
		a=x2;
	}if(x3<x2){
		a=x3;
	}if(x4<x3){
		a=x4;
	}if(x5<x4){
		a=x5;
	}if(x6<x5){
		a=x6;
	}if(x7<x6){
		a=x7;
	}if(x8<x7){
		a=x8;
	}if(x9<x8){
		a=x9;
	}if(x10<x9){
		a=x10;
	}
	cout << "smallest is " << a ;
	
	return 0;
}
