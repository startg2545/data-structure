#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
main(){
	int face=6,all=6000,x;
	srand(time(0));
	int frequency[6] = {};
	cout << setw(4) << "Face" << setw(10) << "Frequency" << endl;
	
	for(int i=0;i<all;i++){
		face=rand()%6;
		frequency[face]++;	
	}
	
	for(int j=0;j<=5;j++)	cout << setw(4) << j+1 << setw(10) << frequency[j] << endl ;
	return 0;
}
