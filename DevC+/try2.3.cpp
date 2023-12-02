#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std;

int main(){
	char grid[10][10]={};
	int x, y;
	srand(time(0));
	x = rand() % 9;
	y = rand() % 9;
	grid[x][y] = 'C';
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout << grid[i][j] << " ";
			
		}
		cout << endl;
	}
	
}
