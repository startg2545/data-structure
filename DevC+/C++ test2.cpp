#include<iostream>
using namespace std;
int main(){
	float total,grade,average ;
	for(float gradecounter = 1 ; gradecounter <=10 ; gradecounter++){
		cout << "Enter your grade: ";
		cin >> grade ;
		total = grade + total;
	}
	average = total/10;
	cout << "Class Average is" << average << endl;
	return 0;
}
