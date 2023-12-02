#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
void story1();
void story2();
void random(char [][10], int [], int []);
void show(char [][10]);
void game(char [][10], int [], int [],int []);
void evil(char [][10], int [], int [],int []);
void check(char [][10], int [], int [],int [] );

using namespace std;

int main(){
	const int max_a = 10; 
	int max_b = 5;
	char grid[max_a][max_a] = {},rudorf='R';
	int x_locate[max_b] = {}, y_locate[max_b] = {},pass[1]={};
	grid[9][9] = rudorf;
//	story1();	
	random(grid,x_locate,y_locate);
	show(grid);
	do{
		game(grid,x_locate,y_locate,pass);
		if(pass[0]==1||pass[0]==2){
			cout << "Complete";
		}else{
		evil(grid,x_locate,y_locate,pass);
		}
	}while(pass[0]==0);
	if(pass[0]==2){
		int choose;
		cout << "Do you want to continue?\n| Yes[1] | No[2] |" << endl;
		cin >> choose;
		if(choose==1){
			
		}else if(choose==2){
			return 0;
		}
		
	}
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
//	system("pause");
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\n";
	Sleep(4000);
	cout << endl << ">> You need to find Rudorf <<" << endl << endl;
	cout << setw(23) << "| CHALLENGE #4 |" << endl << endl;
}
void story2(){
	cout << "Evil Elev : Damn. Why I can not fight you Santa. \n            You are stronger us so I will incease my Evil Elev." << endl;
	cout << "Santa : But I got my Rudorf. I don't need to fight you." << endl;
	cout << "Evil Elev : Actually! you are got your Rudorf.\n            And then I stole your candy from children." << endl;
	cout << "Santa : Jesus! I going to kill you!";
}

void check(char grid[][10], int x_locate[], int y_locate[], int pass[]){
	if(grid[x_locate[0]+1][y_locate[0]]=='C'||grid[x_locate[0]+1][y_locate[0]]=='E'||
	   grid[x_locate[0]+1][y_locate[0]+1]=='C'||grid[x_locate[0]+1][y_locate[0]+1]=='E'||
	   grid[x_locate[0]+1][y_locate[0]-1]=='C'||grid[x_locate[0]+1][y_locate[0]-1]=='E'||
	   grid[x_locate[0]-1][y_locate[0]]=='C'||grid[x_locate[0]-1][y_locate[0]]=='E'||
	   grid[x_locate[0]-1][y_locate[0]+1]=='C'||grid[x_locate[0]-1][y_locate[0]+1]=='E'||
	   grid[x_locate[0]-1][y_locate[0]-1]=='C'||grid[x_locate[0]-1][y_locate[0]-1]=='E'||
	   grid[x_locate[0]][y_locate[0]+1]=='C'||grid[x_locate[0]][y_locate[0]+1]=='E'||
	   grid[x_locate[0]][y_locate[0]-1]=='C'||grid[x_locate[0]][y_locate[0]-1]=='E')
	{
		cout << "You lose." << endl;
		
		pass[0]=2;
	}else if(x_locate[0]==8 && y_locate[0]==8 ||
			 x_locate[0]==8 && y_locate[0]==9 ||
			 x_locate[0]==9 && y_locate[0]==8)
	{
		cout << "You won." << endl;
		
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
	    show(grid);
	    cout << endl << endl << endl << endl  ;
	}
	
}

void evil(char grid[][10],int x_locate[],int y_locate[],int pass_evil[]){
	int x, y, i, pass=0;
	const char change = ' ';
	cout << endl << endl << endl << endl ;
	for(int i=1;i<4;i++){
		if(grid[x_locate[i]][y_locate[i]]=='E'){
		srand(time(0));
		do{
		x = rand() % 3 - 1 ;
		y = rand() % 3 - 1 ;
		}while(x==0&&y==0);
		while(x_locate[i]+x==-1 || y_locate[i]+y==-1 || x_locate[i]+x==10 || y_locate[i]+y==10 ||
		grid[x_locate[i]+x][y_locate[i]+y] == 'C' || grid[x_locate[i]+x][y_locate[i]+y] == 'E' || grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
		grid[x_locate[i]+x*2][y_locate[i]+y*2] == 'R'|| grid[x_locate[i]+x*2][y_locate[i]+y] == 'R'|| grid[x_locate[i]+x][y_locate[i]+y*2] == 'R'){
			srand(time(0));
			do{
			x = rand() % 3 - 1 ;
			y = rand() % 3 - 1 ;
			}while(x==0&&y==0);
		}
		Sleep(1000);
		grid[x_locate[i]+x][y_locate[i]+y] = grid[x_locate[i]][y_locate[i]];
		grid[x_locate[i]][y_locate[i]] = change;
		y_locate[i] = y_locate[i]+y ;
		x_locate[i] = x_locate[i]+x ;
		show(grid);
		cout << endl << endl << endl << endl ;
		check(grid,x_locate,y_locate,pass_evil);
		if(pass_evil[0]==1||pass_evil[0]==2){
			show(grid);
			pass = 1;
			break;
		}
	}
}
	if(pass==0){
	i = 4;
	srand(time(0));
	do{
	x = rand() % 3 - 1 ;
	y = rand() % 3 - 1 ;
	}while(x==0&&y==0);
	while(x_locate[i]+x==-1 || y_locate[i]+y==-1 || x_locate[i]+x==10 || y_locate[i]+y==10|| grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
	grid[x_locate[i]+2*x][y_locate[i]+2*y] == 'R'|| grid[x_locate[i]+2*x][y_locate[i]+y] == 'R'|| grid[x_locate[i]+x][y_locate[i]+2*y] == 'R'){
		srand(time(0));
		do{
		x = rand() % 3 - 1 ;
		y = rand() % 3 - 1 ;
		}while(x==0&&y==0);
		}
		Sleep(1000);
//		cout << x << "  " << y  << endl;
		grid[x_locate[i]+x][y_locate[i]+y] = grid[x_locate[i]][y_locate[i]];
		grid[x_locate[i]][y_locate[i]] = change;
		y_locate[i] = y_locate[i]+y ;
		x_locate[i] = x_locate[i]+x ;
		show(grid);
		cout << endl << endl << endl ;
		check(grid,x_locate,y_locate,pass_evil);
		if(pass_evil[0]==1||pass_evil[0]==2){
			show(grid);
		}
	}

}
	
void random(char grid[][10], int x_locate[], int y_locate[]){
	int x, y;
	srand(time(0));
	grid[x_locate[0]][y_locate[0]] = 'S';
	for(int i=1;i<5;i++){
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
		grid[x_locate[i]][y_locate[i]]=='E'||grid[x_locate[i]-4][y_locate[i]]=='S'||
		grid[x_locate[i]+1][y_locate[i]]=='E'||grid[x_locate[i]-4][y_locate[i]-1]=='S'||
	    grid[x_locate[i]+1][y_locate[i]+1]=='E'||grid[x_locate[i]-4][y_locate[i]-2]=='S'||
		grid[x_locate[i]+1][y_locate[i]-1]=='E'||grid[x_locate[i]-4][y_locate[i]-3]=='S'||
		grid[x_locate[i]-1][y_locate[i]]=='E'||grid[x_locate[i]-4][y_locate[i]-4]=='S'||
	    grid[x_locate[i]-1][y_locate[i]+1]=='E'||grid[x_locate[i]-3][y_locate[i]-4]=='S'||
	    grid[x_locate[i]-1][y_locate[i]-1]=='E'||grid[x_locate[i]-2][y_locate[i]-4]=='S'||
	    grid[x_locate[i]][y_locate[i]+1]=='E'||grid[x_locate[i]-1][y_locate[i]-4]=='S'||
	    grid[x_locate[i]][y_locate[i]-1]=='E'||grid[x_locate[i]][y_locate[i]-4]=='S'
		);
		switch(i){
			case 1:
				grid[x_locate[i]][y_locate[i]] = 'E';
				break;
			case 2:
				grid[x_locate[i]][y_locate[i]] = 'E';
				break;
			case 3:
				grid[x_locate[i]][y_locate[i]] = 'E';
				break;
			case 4:
				grid[x_locate[i]][y_locate[i]] = 'C';
				break;
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
	char input[2]={};
	const char change=' ';
	int passin=0;
	do{
//	cout << endl << endl << endl << endl << endl << endl;
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
	check(grid,x_locate,y_locate,pass_game);

}
