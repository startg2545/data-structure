#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int rollDice(); //function prototype
int main(){
	int gameStatus; // 1=Win , 2=Lose , 3=Continue
	int mypoint;
	int sumOfDice = rollDice();
	cin.get();
	switch(sumOfDice){
		case 7:
		case 11:
			gameStatus = 1;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = 2;
			break;
		default:
			gameStatus = 3;
			mypoint = sumOfDice;
			cout << "Player point is " << mypoint << endl;
			break;
	}
	while(gameStatus){
		sumOfDice = rollDice();
		cin.get();
		if(gameStatus=mypoint){
			gameStatus=1;
		}else if(sumOfDice==7){
			gameStatus=2;
		}
	}if(gameStatus==1){
		cout << "Player Win!" ;
	}else{
		cout << "Player Lose!" ;
	}

	return 0;

}
int rollDice(){
	srand(time(0));
	int d1 = rand() % 6 + 1;
	int d2 = rand() % 6 + 1;
	cout << "Player Rolled " << d1 << " + " << d2 << " = " << d1+d2 << endl;
	
	return d1+d2;
}
