#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void demo(int &, string &text);

int main(){
	const int size=81;
	int pass,check,help_q;
	char username[size] , passwordconfirm[size] , password[size] , usernameinput[size] , passwordinput[size] , end  ;
	string text,textinput;
	cout << "FACEBOOK" << endl ;
	do{
	cout << "| Log in [1] | Sign in [2] | Forget password [3] | " << endl ;
	cin >> pass;
	if(pass==1){
		do{
			check=0;
			cout << "Username : ";
			cin >> usernameinput;
			cout << "Password : ";
			cin >> passwordinput;
			if(strcmp(passwordinput,password)==0 && strcmp(usernameinput,username)==0){
				end=1;
				check=1;
			}else{
				cout << "You username or password is wrong.\nPlease try againt." << endl;
			}
		}while(check==0);
	}else if(pass==2){
		do{
			check=0;
			cout << "Create your username : ";
			cin >> username;
			cout << "Create your password : ";
			cin >> passwordconfirm;
			cout << "Confirm your password : ";
			cin >> password;
			if(strcmp(passwordconfirm,password)!=0){
				check=1;
				cout << "Passwords do not match.\nPlease try againt!" << endl ;
		}
	}while(check==1);

	cout << "Account created successfully." << endl;
	demo(help_q,text);
	string text;
	getline(cin,text);
	
	}else if(pass==3){
		do{
			check=0;
			cout << "Username : ";
			cin >> usernameinput;
			if(strcmp(usernameinput,username)==0){
				check=1;
			}else{
				cout << "You username or password is wrong.\nPlease try againt." << endl;
			}
		}while(check==0);


		switch(help_q){
			case 1:
				cout << "What is your father name?" << endl;
				break;
			case 2:
				cout << "What is your mother name?" << endl;
				break;
			case 3:
				cout << "What was your first game?" << endl;
				break;
			case 4:
				cout << "What your favorite sport?" << endl;
				break;
			case 5:
				cout << "What your favorite food?" << endl;
				break;
			
		}
		getline(cin,textinput);
		cout << text;
		if(text==textinput){
			cout << "Congratulations! \nYour password is " << password ;
		}
		
		}
	
	}while(end==0);
	
	return 0;
}
void demo(int &help_q ,string &text){
	int pass;
	cout << "Do you want to create more security? | Yes[1] | No [2] |" << endl;
	cin >> pass;
	if(pass==2){
		
	}else if(pass==1){
		cout << "Please select question and answer. When you forget your password we can help you :)" << endl;
		cout << "What is your father name [1]\nWhat is your mother name [2]\nWhat was your first game [3]\nWhat your favorite sport [4]\nWhat your favorite food [5]" << endl ;
		cin >> help_q;
		switch(help_q){
			case 1:
				cout << "What is your father name?" << endl;
				break;
			case 2:
				cout << "What is your mother name?" << endl;
				break;
			case 3:
				cout << "What was your first game?" << endl;
				break;
			case 4:
				cout << "What your favorite sport?" << endl;
				break;
			case 5:
				cout << "What your favorite food?" << endl;
				break;
			
		}

	}

	getline(cin,text);
	
}
