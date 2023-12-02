#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<=4; i++){
		for(int j=0; j<=4; j++){
			if(i==2 || j==2){
				cout << "O";
			}else {
				cout << "X";
			}
		
		}
		cout << endl;
	}
	return 0;
}

