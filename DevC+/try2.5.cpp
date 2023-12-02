#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	cout << "Hello World...!" << endl;
	for(int i=0;i<=100;i++){
		cout << "\nLoading...^_^";
		cout << i << "%";
		Sleep(400);
		system("cls");
	}
	cout << "Level Up...!";
	
}
