#include <iostream>
using namespace std;

int main(){
	int total, first = 0, second = 1, next;
	cout << "Enter fibo: "; cin >> total;
	cout << first << " ";
	cout << second << " ";
	for(int i = 0; i < total; i++)
	{
		next = first+second;
		cout << next << " ";
		first = second;
		second = next;
	}
	return 0;
}
