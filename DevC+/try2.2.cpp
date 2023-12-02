#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char s1[81] = "Good Job hi dog are you happy.";
	char s2[81] = "dog";
	char mask = 'o';
	int lenght,cal;
//	lenght = strlen(s1);
//	cout << "lenght of s1 : " << lenght ;
//	strcat(s1,s2);
//	cout << "strcat s1 , s2 : " << s1 << endl;
//	strcpy(s1,s2);
//	cout << "strcpy s1 , s2 : " << s1 << endl;
//	cal = strcmp(s1,s2);
//	cout << cal;
//	cout << strchr(s1,mask);
	cout << strstr(s1,s2);	
	
	
	
	return 0;
}
