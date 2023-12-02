#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int qua();
int opa;
int answer;
int d1, d2;
int main(){
	cout << "Enter -1 to End"<< endl;
	while(1){
		opa=qua();
		cin >> answer;
		if(answer==opa){
			cout << "correct!!" << endl ;
		}else if(answer==-1){
			cout << "Thak you for used";
			break;
		}
		else{
			cout << "incorrect :(\n" << "?" << opa << endl ;
	}
}
	return 0;
}
int qua(){
	srand(time(0));
	d1 = rand()%10;
	d2 = rand()%10;
	cout << "How much is" << d1 << " time " << d2 << "(-1 to End)? ";
	return d1*d2; 
}
