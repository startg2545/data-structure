#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int face, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;
	switch(face){
		case 1:
			f1++;
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
	cout << "Face" << setw(13) << "Frequency" << endl;
	cout << "	1" << setw(13) << f1 << endl;
	cout << "	2" << setw(13) << f2 << endl;
	cout << "	3" << setw(13) << f3 << endl;
	cout << "	4" << setw(13) << f4 << endl;
	cout << "	5" << setw(13) << f5 << endl;
	cout << "	6" << setw(13) << f6 << endl;
	return 0;
}
