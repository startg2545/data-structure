#include<iostream>
#include<cmath>
using namespace std;

// Function definition of isne7
int isne7(int x){ // it is isne function tab
	int s = x*x;
	return s;
}

float avg_three(float x, float y, float z){
	float s = x + y + z;
	float avg = s/3;
	return avg;
}

float q_std(float a, float b, float c, float d, float e){
	float s = a + b + c + d + e;
	float avg = s/5;
	float pos = (a-avg)*(a-avg) + (b-avg)*(b-avg) + (c-avg)*(c-avg) + (d-avg)*(d-avg) + (e-avg)*(e-avg);
	float rath = pos/4 ;
	float get = sqrt(rath);
	return get;
}

int jiro_max(int a1,int a2,int a3){
	int max = a1;
	if(a2 > max){
		max = a2;
	}
	if(a3 > max){
		max = a3;
	}
	return max;
}

int jiro_mini(int b1, int b2, int b3){
	int mini = b1;
	if(b2 < mini){
		mini = b2;
	}
	if(b3 < mini){
		mini = b3;
	}
	return mini;
}
void drawRectangle(int w, int h){
	for(int i=1; i<=w; i++){
		for(int j=1; j<=w; j++){
			cout << "X";
		}
		cout << endl;
	} cout << endl;
}


void drawTriangle(int x){
	for(int i=1; i<=x; i++){
		for(int j=1; j<=x; j++){
			cout << "X";
			
		}
		cout << endl;
	}
}

int main(){
	cout << ceil(4.2) << endl;
	cout << floor(4.2) << endl;
	cout << exp(1) << endl; // exp(x) ==> e to power of x
	cout << fabs(-1.2) << endl; // absolute value
	cout << fmod(7,3) << endl; // modulo, 7%3
	cout << pow(2,8) << endl; // 2 is raised to the power of 8
	cout << log(exp(1)) << endl; // natural log
	cout << log10(100) << endl; // log base 10
	cout << sqrt(9) << endl; // square root

	// User-defined function
	cout << "isne7(8) = " << isne7(8) << endl; // function cal
	
	cout << "avg_three(1.7, 8.4, -3.3)" << avg_three(1.7, 8.4, -3.3) << endl;
	
	cout << "q_std(2,4,6,8,10) = " << q_std(2,4,6,8,10) << endl;
	
	cout << "jiro max is " << jiro_max(3,5,11) << endl;
	
	cout << "jiro mini is " << jiro_mini(3,5,11) << endl;
	
	drawRectangle(6,4);
	
	drawTriangle(3);
	
	return 0;
}
