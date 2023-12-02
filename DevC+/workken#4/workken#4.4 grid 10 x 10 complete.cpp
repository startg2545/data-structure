#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
void story1();
void story2();
void story3();
void story4();
void story5();
void story6();
void random(char [][10], int [], int [], int );
void show(char [][10]);
void game(char [][10], int [], int [],int []);
void evil(char [][10], int [], int [],int [], int );
void check(char [][10], int [], int [],int [], int, int );

using namespace std;

int main(){
	int pass[1]={}, story_frequency=0, evil_frequency=-3,choose=1;
do{
	pass[0] ={0};
	choose=1;
	story_frequency++;
	evil_frequency+=3;
	const int max_a = 10; 
	int max_b = 5 + evil_frequency;
	char grid[max_a][max_a] = {},rudorf;
	int x_locate[max_b] = {}, y_locate[max_b] = {};
	switch(story_frequency){
		case 1:
//			story1();
			rudorf = 'R';
			grid[9][9] = rudorf;
			break;
		case 2:
//			story2();
			rudorf = 'K';
			grid[9][9] = rudorf;
			break;
		case 3:
			story3();
			rudorf = 'R';
			grid[9][9] = rudorf;
			break;
		case 4:
			story4();
			rudorf = 'R';
			grid[9][9] = rudorf;
			break;
		case 5:
			story5();
			rudorf = 'R';
			grid[9][9] = rudorf;
			break;
		default:
			story6();
			rudorf = 'R';
			grid[9][9] = rudorf;
			break;
		
	}
	random(grid,x_locate,y_locate,evil_frequency);
	show(grid);
	do{
		game(grid,x_locate,y_locate,pass);
		if(pass[0]==1||pass[0]==2){
		}else{
		evil(grid,x_locate,y_locate,pass,evil_frequency);
		}
	}while(pass[0]==0);
	if(pass[0]==2){
		cout << "Do you want to continue?\n| Yes[1] | No[2] |" << endl<<endl;
		cin >> choose;
		if(choose==1){
			cout<< endl << "Even you are loser. But I will make you win."<<endl << endl;
			Sleep(2500);
			cout << "You won :)"<<endl<<endl;
			Sleep(2500);
		}else if(choose==2){
			return 0;
		}
		
	}
}while(choose==1);
	return 0;
}
void story1(){
	cout << "Santa : Where is my Rudorf?" << endl;
	Sleep(2000);
	cout << "Evil Elve : Haha! I stole your Rudorf." << endl;
	Sleep(3500);
	cout << "Covid-19 : Lmao don't worry I gonna kill you Santa~ and Evil Elves." <<endl;
	Sleep(4500);
	cout << "Santa : OK. If you want I going to fight you!" << endl ;
	Sleep(3000);
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\n";
	Sleep(4000);
	cout << endl << ">> You need to find Rudorf <<" << endl << endl;
	cout << setw(23) << "| CHALLENGE #4 |" << endl << endl << setw(21) << ">> Round 1 <<" << endl << endl;
}
void story2(){
	cout << "Evil Elev : Damn. Why I can not fight you Santa. "<<endl;
	Sleep(2800);
	cout << "            You are stronger us so I will incease my Evil Elev and then go to fight you." << endl;
	Sleep(3800);
	cout << "Santa : But I got my Rudorf.";
	Sleep(2300);
	cout << "I don't need to fight you." << endl;
	Sleep(2300);
	cout << "Evil Elev : Actually! you are got your Rudorf."<< endl;
	Sleep(2800);
	cout << "            But I stole your candy from children." << endl;
	Sleep(3000);
	cout << "Santa : Jesus! I going to kill you!"<< endl;
	Sleep(3000);
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nK is Evil Elev King.\n";
	Sleep(4000);
	cout << endl << ">> You need to Kill Evil Elev King <<" << endl << endl;
	cout << setw(21) << ">> Round 2 <<" << endl << endl;
}
void story3(){
	cout << setw(21) << ">> Round 3 <<" << endl << endl;
}
void story4(){
	cout << setw(21) << ">> Round 4 <<" << endl << endl;
}
void story5(){
	cout << setw(21) << ">> Round 5 <<" << endl << endl;
}
void story6(){
	cout << setw(18) << ">> Round Special <<" << endl << endl;
}

void check(char grid[][10], int x_locate[], int y_locate[], int pass[], int evil_frequency, int i){
	if(grid[x_locate[0]+1][y_locate[0]]=='C'||grid[x_locate[0]+1][y_locate[0]]=='E'||
	   grid[x_locate[0]+1][y_locate[0]+1]=='C'||grid[x_locate[0]+1][y_locate[0]+1]=='E'||
	   grid[x_locate[0]+1][y_locate[0]-1]=='C'||grid[x_locate[0]+1][y_locate[0]-1]=='E'||
	   grid[x_locate[0]-1][y_locate[0]]=='C'||grid[x_locate[0]-1][y_locate[0]]=='E'||
	   grid[x_locate[0]-1][y_locate[0]+1]=='C'||grid[x_locate[0]-1][y_locate[0]+1]=='E'||
	   grid[x_locate[0]-1][y_locate[0]-1]=='C'||grid[x_locate[0]-1][y_locate[0]-1]=='E'||
	   grid[x_locate[0]][y_locate[0]+1]=='C'||grid[x_locate[0]][y_locate[0]+1]=='E'||
	   grid[x_locate[0]][y_locate[0]-1]=='C'||grid[x_locate[0]][y_locate[0]-1]=='E')
	{
		cout << "You lose :(" << endl;
		
		pass[0]=2;
	}else if(x_locate[0]==8 && y_locate[0]==8 ||
			 x_locate[0]==8 && y_locate[0]==9 ||
			 x_locate[0]==9 && y_locate[0]==8)
	{
		cout << "You won :)" << endl;
		
		pass[0]=1;
	}else if(grid[x_locate[4]+1][y_locate[4]]=='E'||
	   grid[x_locate[4]+1][y_locate[4]+1]=='E'||
	   grid[x_locate[4]+1][y_locate[4]-1]=='E'||
	   grid[x_locate[4]-1][y_locate[4]]=='E'||
	   grid[x_locate[4]-1][y_locate[4]+1]=='E'||
	   grid[x_locate[4]-1][y_locate[4]-1]=='E'||
	   grid[x_locate[4]][y_locate[4]+1]=='E'||
	   grid[x_locate[4]][y_locate[4]-1]=='E')
	{
		grid[x_locate[4]+1][y_locate[4]]=' ';
	    grid[x_locate[4]+1][y_locate[4]+1]=' ';
	    grid[x_locate[4]+1][y_locate[4]-1]=' ';
	    grid[x_locate[4]-1][y_locate[4]]=' ';
	    grid[x_locate[4]-1][y_locate[4]+1]=' ';
	    grid[x_locate[4]-1][y_locate[4]-1]=' ';
	    grid[x_locate[4]][y_locate[4]+1]=' ';
	    grid[x_locate[4]][y_locate[4]-1]=' ';
	    Sleep(1000);
		if(i==4+evil_frequency){
			cout << endl << endl  ;
		}else{
			
		}
	    show(grid);
		if(i==4+evil_frequency){
			cout << endl << endl  ;
		}else{
		cout << endl << endl << endl << endl ;	
		}
	}
	
}

void evil(char grid[][10],int x_locate[],int y_locate[],int pass_evil[],int evil_frequency){
	int x, y, i;
	const char change = ' ';
	cout << endl << endl << endl << endl ;
	for(int i=1;i<5+evil_frequency;i++){
		
		if(grid[x_locate[i]][y_locate[i]]=='E'||grid[x_locate[i]][y_locate[i]]=='C'){
			srand(time(0));
			do{
			x = rand() % 3 - 1 ;
			y = rand() % 3 - 1 ;
			}while(x==0&&y==0);
		if(grid[x_locate[i]][y_locate[i]]=='C'){
		while(x_locate[i]+x==-1 || y_locate[i]+y==-1 || x_locate[i]+x==10 || y_locate[i]+y==10|| grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
		grid[x_locate[i]+2*x][y_locate[i]+2*y] == 'R'|| grid[x_locate[i]+2*x][y_locate[i]+y] == 'R'|| grid[x_locate[i]+x][y_locate[i]+2*y] == 'R')
			{
				srand(time(0));
				do{
				x = rand() % 3 - 1 ;
				y = rand() % 3 - 1 ;
				}while(x==0&&y==0);
			}
		}else if(grid[x_locate[i]][y_locate[i]]=='E'){
		while(x_locate[i]+x==-1 || y_locate[i]+y==-1 || x_locate[i]+x==10 || y_locate[i]+y==10 ||
		grid[x_locate[i]+x][y_locate[i]+y] == 'E' || grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
		grid[x_locate[i]+x*2][y_locate[i]+y*2] == 'R'|| grid[x_locate[i]+x*2][y_locate[i]+y] == 'R'||
		grid[x_locate[i]+x][y_locate[i]+y*2] == 'R'||grid[x_locate[i]+x][y_locate[i]+y] == 'K' ||
		grid[x_locate[i]+x+1][y_locate[i]+y]=='C'||grid[x_locate[i]+x*2][y_locate[i]+y*2] == 'K'||
	    grid[x_locate[i]+x+1][y_locate[i]+y+1]=='C'||grid[x_locate[i]+x*2][y_locate[i]+y] == 'K'||
	    grid[x_locate[i]+x+1][y_locate[i]+y-1]=='C'||grid[x_locate[i]+x][y_locate[i]+y*2] == 'K'||
	    grid[x_locate[i]+x-1][y_locate[i]+y]=='C'||
	    grid[x_locate[i]+x-1][y_locate[i]+y+1]=='C'||
	    grid[x_locate[i]+x-1][y_locate[i]+y-1]=='C'||
	    grid[x_locate[i]+x][y_locate[i]+y+1]=='C'||
	    grid[x_locate[i]+x][y_locate[i]+y-1]=='C')
			{
				srand(time(0));
				do{
				x = rand() % 3 - 1 ;
				y = rand() % 3 - 1 ;
				}while(x==0&&y==0);
			}
		}
		Sleep(1000);
		grid[x_locate[i]+x][y_locate[i]+y] = grid[x_locate[i]][y_locate[i]];
		grid[x_locate[i]][y_locate[i]] = change;
		y_locate[i] = y_locate[i]+y ;
		x_locate[i] = x_locate[i]+x ;
		show(grid);
		if(i==4+evil_frequency){
			cout << endl << endl  ;
		}else{
		cout << endl << endl << endl << endl ;	
		}
		
		check(grid,x_locate,y_locate,pass_evil,evil_frequency,i);
		
		if(pass_evil[0]==1||pass_evil[0]==2){
			show(grid);
			break;
		}
	}
}
}
	
void random(char grid[][10], int x_locate[], int y_locate[],int evil_frequency){
	srand(time(0));
	grid[x_locate[0]][y_locate[0]] = 'S';
	for(int i=1;i<5+evil_frequency;i++){
		do{
			x_locate[i] = rand() % 9;
			y_locate[i] = rand() % 9;
		}while(grid[x_locate[i]][y_locate[i]]=='S'||grid[x_locate[i]][y_locate[i]]=='R'||grid[x_locate[i]-3][y_locate[i]]=='S'||
		grid[x_locate[i]-1][y_locate[i]]=='S'||grid[x_locate[i]+1][y_locate[i]]=='R'||grid[x_locate[i]-3][y_locate[i]-1]=='S'||
		grid[x_locate[i]][y_locate[i]-1]=='S'||grid[x_locate[i]][y_locate[i]+1]=='R'||grid[x_locate[i]-3][y_locate[i]-2]=='S'||
		grid[x_locate[i]-1][y_locate[i]-1]=='S'||grid[x_locate[i]+1][y_locate[i]+1]=='R'||grid[x_locate[i]-3][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]]=='S'||grid[x_locate[i]+2][y_locate[i]]=='R'||grid[x_locate[i]-2][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]-1]=='S'||grid[x_locate[i]+2][y_locate[i]+1]=='R'||grid[x_locate[i]-1][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]-2]=='S'||grid[x_locate[i]+2][y_locate[i]+2]=='R'||grid[x_locate[i]][y_locate[i]-3]=='S'||
		grid[x_locate[i]-1][y_locate[i]-2]=='S'||grid[x_locate[i]+1][y_locate[i]+2]=='R'||
		grid[x_locate[i]][y_locate[i]-2]=='S'||grid[x_locate[i]][y_locate[i]+2]=='R'||
		
		grid[x_locate[i]][y_locate[i]]=='E' || grid[x_locate[i]-4][y_locate[i]]=='S' || grid[x_locate[i]][y_locate[i]]=='C' ||
		grid[x_locate[i]-4][y_locate[i]-1]=='S' || grid[x_locate[i]+1][y_locate[i]]=='C' ||
	    grid[x_locate[i]-4][y_locate[i]-2]=='S' || grid[x_locate[i]+1][y_locate[i]+1]=='C' ||
		grid[x_locate[i]-4][y_locate[i]-3]=='S' || grid[x_locate[i]+1][y_locate[i]-1]=='C' ||
		grid[x_locate[i]-4][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]]=='C' ||
	    grid[x_locate[i]-3][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]+1]=='C' ||
	    grid[x_locate[i]-2][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]-1]=='C' ||
	    grid[x_locate[i]-1][y_locate[i]-4]=='S' || grid[x_locate[i]][y_locate[i]+1]=='C' ||
	    grid[x_locate[i]][y_locate[i]-4]=='S' || grid[x_locate[i]][y_locate[i]-1]=='C' ||
	    
		grid[x_locate[i]][y_locate[i]]=='K'||
		grid[x_locate[i]+1][y_locate[i]]=='K'||
	    grid[x_locate[i]+1][y_locate[i]+1]=='K'||
		grid[x_locate[i]][y_locate[i]+1]=='K'||
		grid[x_locate[i]+2][y_locate[i]+2]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+1]=='K'||
	    grid[x_locate[i]+2][y_locate[i]]=='K'||
	    grid[x_locate[i]+1][y_locate[i]+2]=='K'||
	    grid[x_locate[i]][y_locate[i]+2]=='K'
		);	
		if(i==4){
			do{
			x_locate[i] = rand() % 9;
			y_locate[i] = rand() % 9;
			}while(
		grid[x_locate[i]][y_locate[i]]=='S'||grid[x_locate[i]][y_locate[i]]=='R'||grid[x_locate[i]-3][y_locate[i]]=='S'||
		grid[x_locate[i]-1][y_locate[i]]=='S'||grid[x_locate[i]+1][y_locate[i]]=='R'||grid[x_locate[i]-3][y_locate[i]-1]=='S'||
		grid[x_locate[i]][y_locate[i]-1]=='S'||grid[x_locate[i]][y_locate[i]+1]=='R'||grid[x_locate[i]-3][y_locate[i]-2]=='S'||
		grid[x_locate[i]-1][y_locate[i]-1]=='S'||grid[x_locate[i]+1][y_locate[i]+1]=='R'||grid[x_locate[i]-3][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]]=='S'||grid[x_locate[i]+2][y_locate[i]]=='R'||grid[x_locate[i]-2][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]-1]=='S'||grid[x_locate[i]+2][y_locate[i]+1]=='R'||grid[x_locate[i]-1][y_locate[i]-3]=='S'||
		grid[x_locate[i]-2][y_locate[i]-2]=='S'||grid[x_locate[i]+2][y_locate[i]+2]=='R'||grid[x_locate[i]][y_locate[i]-3]=='S'||
		grid[x_locate[i]-1][y_locate[i]-2]=='S'||grid[x_locate[i]+1][y_locate[i]+2]=='R'||
		grid[x_locate[i]][y_locate[i]-2]=='S'||grid[x_locate[i]][y_locate[i]+2]=='R'||
		
		grid[x_locate[i]][y_locate[i]]=='E' || grid[x_locate[i]-4][y_locate[i]]=='S' || grid[x_locate[i]][y_locate[i]]=='C' ||
		grid[x_locate[i]+1][y_locate[i]]=='E' || grid[x_locate[i]-4][y_locate[i]-1]=='S' || grid[x_locate[i]+1][y_locate[i]]=='C' ||
	    grid[x_locate[i]+1][y_locate[i]+1]=='E' || grid[x_locate[i]-4][y_locate[i]-2]=='S' || grid[x_locate[i]+1][y_locate[i]+1]=='C' ||
		grid[x_locate[i]+1][y_locate[i]-1]=='E' || grid[x_locate[i]-4][y_locate[i]-3]=='S' || grid[x_locate[i]+1][y_locate[i]-1]=='C' ||
		grid[x_locate[i]-1][y_locate[i]]=='E' || grid[x_locate[i]-4][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]]=='C' ||
	    grid[x_locate[i]-1][y_locate[i]+1]=='E' || grid[x_locate[i]-3][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]+1]=='C' ||
	    grid[x_locate[i]-1][y_locate[i]-1]=='E' || grid[x_locate[i]-2][y_locate[i]-4]=='S' || grid[x_locate[i]-1][y_locate[i]-1]=='C' ||
	    grid[x_locate[i]][y_locate[i]+1]=='E' || grid[x_locate[i]-1][y_locate[i]-4]=='S' || grid[x_locate[i]][y_locate[i]+1]=='C' ||
	    grid[x_locate[i]][y_locate[i]-1]=='E' || grid[x_locate[i]][y_locate[i]-4]=='S' || grid[x_locate[i]][y_locate[i]-1]=='C' ||
	    
		grid[x_locate[i]][y_locate[i]]=='K'||
		grid[x_locate[i]+1][y_locate[i]]=='K'||
	    grid[x_locate[i]+1][y_locate[i]+1]=='K'||
		grid[x_locate[i]][y_locate[i]+1]=='K'||
		grid[x_locate[i]+2][y_locate[i]+2]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+1]=='K'||
	    grid[x_locate[i]+2][y_locate[i]]=='K'||
	    grid[x_locate[i]+1][y_locate[i]+2]=='K'||
	    grid[x_locate[i]][y_locate[i]+2]=='K'
			);
		}
			
						grid[x_locate[i]][y_locate[i]] = 'E';
						if(i==4){
							grid[x_locate[i]][y_locate[i]] = 'C';
						}
		// x y location , at 0 is santa , at 1 is evil1 , at 2 is evil2 , at 3 is evil3 , at 4 is covid , at 5 is rudolph
	}

}

void show(char grid[][10]){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout << "[" << grid[i][j] << "]" ;
			
		}
		cout << endl;
	}
}

void game(char grid[][10], int x_locate[], int y_locate[],int pass_game[]){
	int evil_frequency = -1,i=-1;
	char input[2]={};
	const char change=' ';
	int passin=0;
	do{

	cout << "Press W  [up]       A  [left]      S  [down]       D  [right]        *Please press in lowercase letters.\n      WA [up/left]  WD [up/right]  SA [down/left]  SD [down/right]" << endl;
	cout << "Press : ";
	cin >> input;
	
	if(input[0]=='w' && input[1]=='a' || input[0]=='a' && input[1]=='w'){
		if(x_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		
		grid[x_locate[0]-1][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='w' && input[1]=='d' || input[0]=='d' && input[1]=='w'){
		if(x_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]+1==10){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		
		grid[x_locate[0]-1][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='s' && input[1]=='d' || input[0]=='d' && input[1]=='s'){
		if(x_locate[0]+1==10){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]+1==10){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		
		grid[x_locate[0]+1][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='a' && input[1]=='s' || input[0]=='s' && input[1]=='a'){
		if(x_locate[0]+1==10){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		
		grid[x_locate[0]+1][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='w'){
		if(x_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		grid[x_locate[0]-1][y_locate[0]] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='s'){
		if(x_locate[0]+1==10){
			cout << "Limited scope. Please try agiant"<< endl;
			passin=1;
		}else{
		grid[x_locate[0]+1][y_locate[0]] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='a'){
		if(y_locate[0]-1==-1){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		grid[x_locate[0]][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='d'){
		if(y_locate[0]+1==10){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
		
		grid[x_locate[0]][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		passin=0;
		}
	}

}while(passin==1);
	show(grid);
	check(grid,x_locate,y_locate,pass_game,evil_frequency,i);

}
