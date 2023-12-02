#include<iostream>
using namespace std;
int main(){
	int x,grade ,counter=0 ;
	cout << "write your 1 number";
	cin >> x;
	grade = x;
	while(counter<9){cout << "write your 9 number ";
	cin >> x;
	if(x<grade){grade = x;
	}
	counter = counter + 1;
	}
	cout << "The biggest value is : " << grade << endl << endl ;
}
