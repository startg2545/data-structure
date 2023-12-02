#include<iostream>
using namespace std;
unsigned long fib(unsigned long );
int main(){
	int num,pos;
	while(1){
	cout << "\nEnter the number of Fibonacci sequence (-1 to End) : ";
	cin >> num;

	for(int i=0;i<num;i++){
		cout << fib(i) << " ";
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
