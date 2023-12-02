#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
main(){
	int  num,N;
	srand(time(0));
	int index[5] = {};
	for(int i=0;i<5;i++){
		cout << "Enter a number: " ;
		cin >> N;
		cout << "Enter index: " ;
		cin >> num ;
		index[num] = N;
		
	}
	for(int i = 0; i < 5 ;i ++)
		cout << index[i] << " ";
	return 0;
}
