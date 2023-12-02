#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main(){
	float a=0,p=0,c=0,d=0,e=0,face,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f10=0;
	srand(time(0));
	for(int i=0;i<10;i++){
		face =(rand()%10000);
		face /= 10000;
		face = face + 1;
		cout << fixed << setprecision(4) << face << "  ";
		if(i==4){
			cout << endl;
		}
		if(i==1){
			f1=face;
		}if(i==2){
			f2=face;
		}if(i==3){
			f3=face;
		}if(i==4){
			f4=face;
		}if(i==5){
			f5=face;
		}if(i==6){
			f6=face;
		}if(i==7){
			f7=face;
		}if(i==8){
			f8=face;
		}if(i==9){
			f9=face;
		}if(i==10){
			f10=face;
		}
}
		a=f1+f2+f3+f4+f5+f6+f7+f8+f9+f10;
		p=a/10;
		c=(pow((f1-p),2))+(pow((f2-p),2))+(pow((f3-p),2))+(pow((f4-p),2))+(pow((f5-p),2))+(pow((f6-p),2))+(pow((f7-p),2))+(pow((f8-p),2))+(pow((f9-p),2))+(pow((f10-p),2));
		c=c/10;
		c=sqrt(c);
	cout << "Sum : " << a << endl;
	cout << "average : " << p << endl;
	cout << "standard deviation : " << c << endl;
	return 0;
}
