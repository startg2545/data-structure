#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
int mather(int);
int main(){
	float x,y,z;
	char check;
	cout << "please enter radius and height of  a cylinder : ";
	cin >> x >> y ;
	if(x<0||y<0){
		do{
			cout << "incorrect" << endl ;
			cout << "please enter radius and height of  a cylinder : ";		
			cin >> x >> y;
		}
		while(x<0||y<0);
	}
	if(x==0||y==0){
		x=2 , y=2; 
		z = 3.14*x*x*y;
	}
	if(x>0||y>0){
		z = 3.14*x*x*y;
	}
		cout << fixed << setprecision(3) << z << endl ;
	cout << "Would like to continue? ";
	cin >> check;
	switch(check){
		case 'Y':
			main();
			break;
		case 'N':
			cout << "Good Bye!" << endl ;
		break;
		default:
			cout << "Error" << endl ;
	}
	
	return 0;
}
int mather(int x,int y){
	return 3.14*x*x*y;
}
