#include<iostream>
using namespace std;
	int squareByValue(int);
	int squareByRef(int &);

int main(){
	int x;
	cout << "Enter an integer : ";
	cin >> x;
	cout << "value before  Call to tripleCallByValue() is : " << x << endl;
	cout << "value return frome tripleCallByValue() is : " << squareByValue(x) << endl;
	cout << "Value (inmain) after Call to tripleByReference() is : " << x << endl;
	cout << endl;
	cout << "Value before Call to tripleCallByValue() is : " << x << endl;
	cout << "Value (inmain) after Call to tripleByReference() is : " << squareByRef(x) << endl;
	return 0;
}
int squareByValue(int x){
	return x*=3;
}
int squareByRef(int &x){
	return x*=3;
}
