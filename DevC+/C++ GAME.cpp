#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	
	srand(time(0));
	int player[2] = {};
	char input;
	int user = -1;
	int pc = rand() % 3;
	
	cout << "Chan-Ken-Pon!" << endl ;
	cout << "^o^ => Rock (R) , Shear (S) , Paper (P)" << endl;
	cout << "G A M E  S T A R T ~ ~" << endl;
	cout << setw(23) << "-----------" << endl ;
	cout << setw(21) << " Score " << endl ;
	cout << setw(23) << "-----------" << endl << endl ;
	cout << "player 1 : " << player[0] << setw(20) << "player 2 : " << player[1] << endl;
	cout << "INPUT R S P : ";
	cin >> input;
	cout << endl;
	do{
	switch(input){

		case 'R':
			user = 0;
			break;
		case 'S':
			user = 1;
			break;
		case 'P':
			user = 2;
			break;
		default:
			cout << "Invalid INPUT" << endl;
			break;
	}
}while(user == -1);
	if(user==0){
		cout << "Now You is Rock and PC is ";
		if(pc==0){
			cout << "Rock" << endl;
		}else if(pc==1){
			cout << "Shear" << endl;
		}else if(pc==2){
			cout << "Paper" << endl;
		}
	}else if(user==1){
		cout << "Now You is Shear and PC is ";
		if(pc==0){
			cout << "Rock" << endl;
		}else if(pc==1){
			cout << "Shear" << endl;
		}else if(pc==2){
			cout << "Paper" << endl;
		}
	}else if(user==2){
		cout << "Now You is Paper and PC is ";
		if(pc==0){
			cout << "Rock" << endl;
		}else if(pc==1){
			cout << "Shear" << endl;
		}else if(pc==2){
			cout << "Paper" << endl;
	}
	}
	if(user *= pc){
		int result = user - pc ;
		switch(user){
			case 0:
			if(result==-1){
				cout << "YOU WIN";
			}
			else{
				cout << "YOU LOST";
			}
			break;
			case 1:
			if(result==-1){
				cout << "YOU WIN";
			}
			else{
				cout << "YOU LOST";
			}
			break;
			case 2:
			if(result==2) {
				cout << "YOU WIN";
			}
			else{
				cout << "YOU LOST";
			}
			break;
			
		}
		
	}else if(user==pc){
		cout << "YOU And PC has Equa!";
	}
	

	
}
