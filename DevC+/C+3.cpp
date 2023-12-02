 // this is a basic ATM machine program
 #include<iostream>
 using namespace std;
 
 int main(){
 	int password;
 	
 	std::cout << "Hello, please enter a password: ";
 	std::cin >> password;
 	
 	if(password == 1234){
 		std::cout << "Welcome!\n";
	}
	 
	 return 0;
 }
