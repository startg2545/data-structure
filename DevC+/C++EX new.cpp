#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int face, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;
	srand(time(0));
	for (int i=1; i<=6000;i++){
		face = rand()%6 + 1;
		switch(face){
		case 1:
			f1++;// f[0] mean f1
			break;
		case 2:
			f2++;
			break;
		case 3:
			f3++;
			break;
		case 4:
			f4++;
			break;
		case 5:
			f5++;
			break;
		case 6:
			f6++;
			break;
		}
	}
	cout << "Face" << setw(13) << "Frequency" << endl;
	cout << "	1" << setw(13) << f1 << endl;
	cout << "	2" << setw(13) << f2 << endl;
	cout << "	3" << setw(13) << f3 << endl;
	cout << "	4" << setw(13) << f4 << endl;
	cout << "	5" << setw(13) << f5 << endl;
	cout << "	6" << setw(13) << f6 << endl;
	int g=f1,mode;
		if(g<f1){
			g=f1;
			mode=1;
		}if(g<f2){
			g=f2;
			mode=2;
		}if(g<f3){
			g=f3;
			mode=3;
		}if(g<f4){
			g=f4;
			mode=4;
		}if(g<f5){
			g=f5;
			mode=5;
		}if(g<f6){
			g=f6;
			mode=6;
			
		}
	cout << "Mode : " << mode << endl;
	
	int f=0; int median;
		if(f1<=3000){
			f=f1;
			if(f > 3000){
				median = 1;
			}
		}if(f<=3000){
			f=f+f2;
			if(f > 3000){
				median = 2;
			}
		}if(f<=3000){
			f=f+f3;
			if(f > 3000){
				median = 3;
			}
		}if(f<=3000){
			f=f+f4;
			if(f > 3000){
				median = 4;
			}
		}if(f<=3000){
			f=f+f5;
			if(f > 3000){
				median = 5;
			}
		}if(f<=3000){
			f=f+f6;
			if(f > 3000){
				median = 6;
			}
		}
		cout << "Median : " << median << endl;
		
	float t=0,p=0;
	t=f1*1+f2*2+f3*3+f4*4+f5*5+f6*6;
	p=t/6000;
	cout << "Mean : " << p << endl;
	
	float a=0,b=0,c=0;
	a=(pow((1-p),2)*f1)+(pow((2-p),2)*f2)+(pow((3-p),2)*f3)+(pow((4-p),2)*f4)+(pow((5-p),2)*f5)+(pow((6-p),2)*f6);
	b=a/6000;
	c=sqrt(b);
	cout << "standard : " << c << endl;
}
