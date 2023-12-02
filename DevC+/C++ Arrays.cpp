#include<iostream>
#include<iomanip>
using namespace std;

//main(){
//	int x[10] = {};
//	for(int i=0;i<10;i++){
//		cout << x[i];
//		if(i<9){
//			cout << ", ";
//		}
//	}
//	cout << endl;
//	
//	return 0;
//}
//main(){
//	int x[100] = {1};
//	for(int i=1;i<=100;i++){
//		x[i] = 1;
//		cout << x[i] << " ";
//		if(i%10==0){
//			cout << endl;
//		}   
//	}
//	return 0;
//}
main(){
	int x[100] = {};
	for(int i=0;i<100;i++){
		x[i] = i;
		cout << setw(3) << x[i];
		if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89){
			cout << endl;
		}
	}
	return 0;
}

