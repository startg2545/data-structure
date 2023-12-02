#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char s1[10] = "HI BRO...";
	char s2[10] = "FUCK";
	strcpy(s2,s1);
	cout << s2;
	
	return 0;
}
