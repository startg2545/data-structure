#include<iostream>
using namespace std;
int main(){
	int  m;
	cout << "Enter your date";
	cin >> m;
	if(m>=11 && m<=19){
		cout << "Date is in the Middle of the Month";
	}else if(m>=1 && m<=31){
		cout << "Date is either the start or end of the Month";
	}else if(m<=0 || m>=32){
		cout << "Invalid";
	}
}
