#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double x = 2;
	
	cout << setw(8) << "x:" << setw(10) << x << endl;
	cout << setw(8) << "sqrt(x):" << setw(10) << sqrt(x) << endl;
	cout << setw(8) << "log(x):" << setw(10) << log(x) << endl;
	cout << endl;
	
	double f = 0.123456789;
	cout << fixed << setprecision(2) << f << endl;
	cout << fixed << setprecision(3) << f << endl;
	cout << fixed << setprecision(5) << f << endl;
	cout << fixed << setprecision(6) << f << endl;
	cout << fixed << setprecision(15) << f << endl;
	
	
	return 0;
}

