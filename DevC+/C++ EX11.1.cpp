#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int binarySearch(int x[], int key, int low, int high);
void checkleft(int x[], int key,int result);
void checkright(int x[], int key,int result);

int main(){
	const int x_size = 50;
	int num, swap, hold, result;
	int a[x_size];
	
	srand(time(0));
	cout << "Original unsorted random number: " << endl;
	for(int i=0; i<x_size; i++){
		a[i] = rand() % 100 + 1;
		cout << setw(4) << a[i] ;
		if(i==9||i==19||i==29||i==39){
			cout << endl;
		}
	}
	do{
		swap = 0;
		for(int i=0; i<x_size-1; i++){
			if(a[i]>a[i+1]){
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				swap = 1 ; 
			}
			
		}
	}while(swap==1);
	 
	
	cout << "\nSorted Numbers: \n";
	for(int i=0;i<x_size;i++){
		cout << setw(4) << a[i] ;
		
		if(i==9||i==19||i==29||i==39){
			cout << endl;
		}
	}
	cout << endl;
	cout << "Enter a number to be searched: ";
	cin >> num;
	cout << "The number is found at sorted index: ";
	result = binarySearch(a, num,0, x_size);
	checkleft( a,  num, result);
	cout << result << " ";
	checkright(a,num,result);
	return 0;
}
int binarySearch(int x[], int key, int low, int high){
	int middle;
	while(true){
		middle = (low+high)/2;
		if(key==x[middle]){
			return middle ;
		}else if(key<x[middle]){
			high = middle;
		}else{
			low = middle;
		}
	}
}
void checkleft(int x[], int key,int result){
	int i = 1;
	while(1){

		if(x[result-i]==x[result]){
			cout << result-i << " ";
			}
		i++;
		if(result-i<0){
			break;
		}
	}
	return ;
}
void checkright(int x[], int key,int result){
	int i = 1;
	while(1){

		if(x[result+i]==x[result]){
			cout << result+i << " " ;
			}
		i++;
		if(result+i>49){
			break;
		}
	}
	return ;
}
