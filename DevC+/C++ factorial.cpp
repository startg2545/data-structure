#include<iostream>
#include<iomanip>
using namespace std;
unsigned long factorial(unsigned long );
int main(){
	for(int i=1;i<=10;i++){
	cout << setw(2) << i << "i = " << factorial(i) << endl;
}
	return 0;
}
unsigned long factorial(unsigned long n){
	if(n==1){
		return 1;
	}else{
		return n=factorial(n-1);
	}
}
