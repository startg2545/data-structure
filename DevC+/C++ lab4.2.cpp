#include<iostream>
using namespace std;
int main(){
	int num, total1=0, total2=0, total3=0;
	do{
		cout << "Enter your number : ";
		cin >> num;
		switch(num){
			case 1:
			total1 = total1 + 1;
			continue;
			case 2:
			total2 = total2 + 1;
			continue;
			case 3:
			total3++ ;
			continue;
			case -1:
			cout << "Good job!" << endl ;
			break;
			default:
			cout << "Incorrect number \nplease ";
		}
	}
	while(num!=-1);
		cout << "1 have " << total1 << endl;
		cout << "2 have " << total2 << endl;
		cout << "3 have " << total3 << endl;
}

