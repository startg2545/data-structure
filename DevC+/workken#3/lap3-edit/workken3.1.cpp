#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#include <string.h>
using namespace std;

void palindromeStirng(string palinStr){
	string revS=palinStr;
	reverse(revS.begin(), revS.end()); 
	if (revS.compare(palinStr) == 0) {
		cout<<"IS PALINDROME ON STRING";
	}else  {
		cout <<"IS NOT PALINDROME ON STRING"  ;
	}
}

void palin(char* str,int lenght){
	char temp[lenght];
	strcpy(temp,str);
	strrev(temp);
	//cout<<temp<<endl;
	//cout<<str<<endl;
	if(strcmp(temp,str) == 0) {
		cout<<"IS PALINDROME ON CSTRING";
	}else{
			cout<<"ISn't  PALINDROME ON CSTRING";
	}
}

void checkallPalindrome(char* str,int lenght,string palinStr){
	palin(str,lenght);
	palindromeStirng(palinStr);
}

int main(){
	const int strlen = 81;
	char word[strlen];
	string wordString;
	
	
	cout << "Type word :" ;
	cin>>word;
	wordString = word;
	
	checkallPalindrome(word,strlen,wordString);
//	palin(word,strlen);
//	palindromeStirng(wordString);
	return 0;
}


