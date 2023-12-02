#include<iostream>
using namespace std;
int main(){
	int n,j,k;
	cin>>n;
	for(int i=0; i<n; i++){
		for(j=0; j<i; j++){
			cout << " " ;
		}
		for(k=n;k>i;k--){
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
