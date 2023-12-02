#include<iostream>
#include"extend.h"

int main() {
	
	extend jiro1('x');
	extend jiro2('c');
	jiro1.output();
	std::cout << endl;
	jiro2.output();

	return 0;
}