#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	char a[8][9] = {};
	int row=8,column=9,x;
	for(int i=1;i<7;i++){
		for(int j=1;j<8;j++){
			a[i][j] = '#';
			a[0][j] = 'å';
			a[7][j] = 'å';
		}
		a[i][0] = 'å';
		a[i][8] = 'å';
		
	}
//	if(i==0||i==7){
//		if(j==0||j==)
//	}
	for(int i=0; i<row; i++){
		cout << setw(5);
		for(int j=0;j<column;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
