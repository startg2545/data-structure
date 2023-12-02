#include<iostream>
using namespace std;
int main(){
	float total=0,counter=0,grade,average;
	do{
		cout << "Enter a grade, -1 to end: ";
		cin >> grade;
		if(grade!=-1){
			total = total + grade;
			counter = counter + 1; // counter++;
		}
	}
	while(grade!=-1);
	average=total/counter;
	cout << "Class average is " << average << endl;
	
}

