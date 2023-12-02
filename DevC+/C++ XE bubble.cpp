#include<iostream>
#include<iomanip>
using namespace std;
float mean(int x[], int x_size);
int median(int x[], int x_size);
void bubblesort(int x[], int x_size);
int mode(int x[],int x_size);
int main(){
	const int resposeSize = 99;
	int swap, hold;
	int respose[resposeSize] = {
6,7,8,9,8,7,8,9,8,9,
7,8,9,5,9,8,7,8,7,8,
6,7,8,9,3,9,8,7,8,7,
7,8,9,8,9,8,9,7,8,9,
6,7,8,7,8,7,9,8,9,2,
7,8,9,8,9,8,9,7,5,3,
5,6,7,2,5,3,9,4,6,4,
7,8,9,6,8,7,8,9,7,8,
7,4,4,2,5,3,8,7,5,6,
4,5,6,1,6,5,7,8,7 };
	cout << "Mean = " << fixed << setprecision(2) << mean(respose,resposeSize) << endl  ;
	cout << "Median = " << median(respose,resposeSize) << endl ;
	cout << "Mode = " << mode(respose,resposeSize) << endl ;
	void bubblesort(float respose[],float resposeSize);
	for(int i=0;i<resposeSize;i++){
		cout << respose[i] ;
	}
	
	return 0;
}
int median(int x[], int x_size){
	bubblesort(x, x_size);
	return x[x_size/2];
}
int mode(int x[],int x_size){
	bubblesort(x,x_size);
	int max=0, count=0, idx=0;
	for(int i=0;i<x_size;i++){
		if(i<x_size-1){
			count++;
			if(x[i] != x[i+2]){
				if(count>max){		
				max = count;
				idx = x[i];
		}
		count = 0;
		}
		}
	}
	if(count>max){
		max = count;
		idx = x[x_size];
	}
	return max;
}

void bubblesort(int x[], int x_size){
	int swap, hold;
	do{
		swap=0;
		for(int i=0; i<x_size-1; i++){
			if(x[i]>x[i+1]){
				hold = x[i];
				x[i] = x[i+1];
				x[i+1] = hold;
				swap = 1 ; //set swap flag
			}
		}
	}while(swap==1);
}

float mean(int x[], int x_size){
	float sum = 0;
	for(int i=0;i<x_size; i++){
	sum += x[i];
	}
	return sum/x_size;
}
