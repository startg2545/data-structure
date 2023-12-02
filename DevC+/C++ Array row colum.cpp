#include<iostream>
using namespace std;
void printArray(int x[][3], int rows, int cols);

int main(){
	int a[2][3] = {{1,2,3},{4,5,6}};
	
	printArray(a, 2, 3);
	
	return 0;
}
void printArray(int x[][3], int rows, int cols){
	for(int i=0; i<rows; i++){
		for(int j=0;j<cols;j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
