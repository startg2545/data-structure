#include<iostream>
#include<iomanip>
using namespace std;
int found(int,int[]);
int main(){
	int num,frequency;
	int far[10]={};
	cout << "Enter 10 values in array: ";
	for(int i=0;i<10;i++){
		cin >> num ;
		far[i] = num;
	}
	cout << "Value in array are now: ";
	for(int i=0;i<10;i++){
		cout << far[i] << " ";
	}
	int answer;
	cout << endl;
	cout << "Search: ";
	cin >> answer;
	for(int i=0;i<10;i++){
		if(answer==far[i]){
			frequency++;
		}
	}
	cout << "Value" << answer << " was found " << frequency << " times";
	return 0;
}

//int search(int input, int array[]){
//	int frequency = 0;
//	
//	for(int i = 0; i < 10 ; i++){
//		if(input == array[i])
//			frequency++;
//	}
//	return frequency;
//}
