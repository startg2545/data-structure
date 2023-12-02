#include<iostream>
#include<cmath>
using namespace std;
float GPA(float a1, float a2, float a3, float a4, float a5){
	float pos = a1*2 + a2*3 + a3*3 + a4*4 + a5*4;
	float get = pos/16;
	return get;
}
int main(){
	cout << "Enter your Grade for 5 subject : "
	int a1,a2,a3,a4,a5;
	if(a1>4||a2>4||a3>4||a4>4||a5>4||a1<0||a2<0||a3<0||a4<0||a5<0){
	cin >> a1 >> a2 >> a3 >> a4 >> a5 ;
	cout << "GPA is incorrect";
	break ;
}else	if{
	cin >> a1 >> a2 >> a3 >> a4 >> a5 ;
	cout << "your GPA is : " << GPA(a1,a2,a3,a4,a5) << " " ;
return 0;
}
}
