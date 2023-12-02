#include<iostream>
using namespace std;
int main(){
	const int a_size = 10;
	int a[a_size] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int hold, swap;
	
	cout << "\nOriginal array:\n";
	for(int i=0; i<a_size; i++){
		cout << a[i] << " ";
	}
	//Bubble sort -- start
	do{
		swap = 0;
		for(int i=0; i<a_size-1; i++){
			if(a[i]>a[i+1]){
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				swap = 1 ; //set swap flag
			}
			
		}
	}while(swap==1);
	 
	
	cout << "\nSorted array\n";
	for(int i=0;i<a_size;i++){
		cout << a[i] << " ";
	}
	//Bubble sort -- end
	return 0;
}



//int main(){
//	const int a_size = 5;
//	int a[a_size] = {0,1,2,3,4}
//	
//	cout << "\nArray a: \n";
//	for(int i=0;i<a_size;i++){
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	
//	return 0;
//}
//void function(int x){
//	x = 8;
//}
//void function2(int x[], int x_size){
//	for(int i=0;i<x_size;i++){
//		x[i] = 8 ;
//	}
//}
