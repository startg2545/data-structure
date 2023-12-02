#include<iostream>
using namespace std;
void printline(int);
unsigned long fib(unsigned long );
int main(){
	int num,pos;
	while(1){
	cout << "\nEnter the number of Fibonacci sequence (-1 to End) : ";
	cin >> num;
	for(int i=0;i<num;i++){
	printline(fib(i));
	cout << endl;
}
}
	return 0;	
}
unsigned long fib(unsigned long n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}

}
void printline(int n){
	for(int i =0; i < n; i++)
	cout << "X";
}
