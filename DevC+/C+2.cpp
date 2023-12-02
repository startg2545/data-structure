 // This program display the sum of two integers.
#include<iostream> // preprocesser directive

int main(){
	// variable declaration
	float number1;
	float number2;
	float number3;
	float sum;
	
	std::cout << "Enter first integer: ";
	std::cin >> number1;
	std::cout << "Enter second integer: ";
	std::cin >> number2;
	std::cout << "Enter third integer: ";
	std::cin >> number3;
	
	sum = number1 / ( number1 + number2 + number3 ) ;
	
	std::cout << "Sum is " << sum << std::endl;
	
	return 0;
}
