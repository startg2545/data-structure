#include<iostream>
using namespace std;
int linearSearch(int x[], int key, int x_size);
int binarySearch(int x[], int key, int low, int high, int x_size);
int main(){
	const int a_size = 100;
	int a[a_size];
	int result;
	int seachKey;
	
	for(int i=0; i<a_size; i++){
		a[i] = i*2;
	}
	cout << "Enter your search key: ";
	cin >> seachKey;
	
//	result = linearSearch(a, seachKey, a_size);
	result = binarySearch(a, seachKey, 0, a_size-1, a_size);
	
	if(result!=-1){
		cout << "Search key is found at index " << result << endl;
	}else{
		cout << "Search ket is not found." << endl;
	}
	
	return 0;
	
}

int linearSearch(int x[], int key, int x_size){
	for(int i=0;i<x_size;i++){
		if(x[i]==key){
			return i;
		}
	}
	return -1;
}
int binarySearch(int x[], int key, int low, int high, int x_size){
	int middle;
	
	while(low<=high){
		middle = (low+high)/2;
		if(key==x[middle]){
			return middle;
		}else if(key<x[middle]){
			high = middle - 1;
		}else{
			low = middle + 1;
		}
	}
	return -1;
	
}
