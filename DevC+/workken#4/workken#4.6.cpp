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
void random(char [][41], int [], int [], int );
void show(char [][41],int []);
void game(char [][41], int [], int [],int []);
void evil(char [][41], int [], int [],int [], int );
void check(char [][41], int [], int [],int [], int, int );
void skill_random(char [][41], int );
void skill_choose(char [][41], int [], int [], int []);
void skill_basic(char [][41], int [], int []);
void skill_boom(char [][41], int [], int []);
void skill_chikara1(char [][41], int [], int []);
void skill_chikara2(char [][41], int [], int []);
void skill_spread(char [][41], int [], int []);
void skill_security(char [][41], int [], int [],int []);

using namespace std;

int main(){
	int story_frequency=0, evil_frequency=-3,choose=1;
do{
	choose=1;
	story_frequency++;
	evil_frequency+=3;
	const int max_a1 = 20, max_a2 = 41; 
	int max_b = 5 + evil_frequency , pass[2] ={};
	char grid[max_a1][max_a2] = {},rudorf;
	int x_locate[max_b] = {0}, y_locate[max_b] = {0};
	switch(story_frequency){
		case 1:
			story1();
			rudorf = 'R';
			grid[18][18] = rudorf;
			break;
		case 2:
			story2();
			rudorf = 'K';
			grid[18][18] = rudorf;
			break;
		case 3:
			story3();
			rudorf = 'R';
			grid[18][18] = rudorf;
			break;
		case 4:
			story4();
			rudorf = 'R';
			grid[18][18] = rudorf;
			break;
		case 5:
			story5();
			rudorf = 'R';
			grid[18][18] = rudorf;
			break;
		default:
			story6();
			rudorf = 'R';
			grid[18][18] = rudorf;
			break;
	}
	random(grid,x_locate,y_locate,evil_frequency);
	skill_random(grid,story_frequency);
	show(grid,pass);
	do{
		game(grid,x_locate,y_locate,pass);
		if(pass[0]==1||pass[0]==2){
		}else{ 
		evil(grid,x_locate,y_locate,pass,evil_frequency);
		}
	}while(pass[0]==0||pass[0]==3);
	
	if(pass[0]==2){
		cout << "Do you want to continue?\n| Yes[1] | No[2] |" << endl<<endl;
		cin >> choose;
		if(choose==1){
			cout<< endl << "Even you are loser. But I will make you win."<<endl << endl;
			Sleep(2500);
			cout << "You won."<<endl<<endl;
			Sleep(2500);
		}else if(choose==2){
			return 0;
		}
		
	}
}while(choose==1);
	cout << endl << endl << endl << "Creat by JIRO." << endl ;
	return 0;
}

void skill_random(char grid[][41], int story_frequency){
	int x_locate, y_locate,passin;
	srand(time(0));
	for(int i=0 ; i<story_frequency*3 ; i++){
		do{
			do{
				x_locate = rand() % 13 + 3 ;
				y_locate = rand() % 13 + 3 ;
			}while(x_locate % 2 == 0 && y_locate % 2 == 0);
		}while(grid[x_locate][y_locate] == 'G');
		grid[x_locate][y_locate] = 'G';
	}
}
void skill_choose(char grid[][41], int x[], int y[],int pass[]){
	int i;
	srand(time(0));
	i = rand() % 5 ;
	switch(i){
		case 0:
			skill_boom(grid,x,y);
			break;
		case 1:
			skill_chikara1(grid,x,y);
			break;
		case 2:
			skill_chikara2(grid,x,y);
			break;
		case 3:
			skill_spread(grid,x,y);
			break;
		case 4:
			skill_security(grid,x,y,pass);
			pass[1]++;
	}
	
}

void skill_basic(char grid[][41], int x[], int y[]){
	int zzz[1];
	int x_constantde=0, x_constantin=0, y_constantde=0, y_constantin=0,full=0;	//You received a gift
	grid[10][22]='Y',grid[10][23]='o',grid[10][24]='u',grid[10][26]='r',grid[10][27]='e',grid[10][28]='c',grid[10][29]='e',grid[10][30]='i',grid[10][31]='v',grid[10][32]='e'
	,grid[10][33]='d',grid[10][35]='a',grid[10][37]='g',grid[10][38]='i',grid[10][39]='f',grid[10][40]='t';
	for(int i=2 ; i<5 ; i++){
		x_constantde--;
		x_constantin++;
		y_constantde--;
		y_constantin++;
		for(int j=0 ; j<4 ; j++){
				if(j==0){
					for(int k=full ; k<i ; k++){
						if(grid[x[0]+x_constantde][y[0]+k] == 'G'||grid[x[0]+x_constantde][y[0]+k] == 'R'||grid[x[0]+x_constantde][y[0]+k] == 'K'){
							
						}else{
						grid[x[0]+x_constantde][y[0]+k] = 'O';
						}
					}
				}else if(j==1){
					for(int k=full ; k<i ; k++){
						if(grid[x[0]+k][y[0]+y_constantin] == 'G'||grid[x[0]+k][y[0]+y_constantin] == 'R'||grid[x[0]+k][y[0]+y_constantin] == 'K'){
							
						}else{
						grid[x[0]+k][y[0]+y_constantin] = 'O';
						}
					}
				}else if(j==2){
					for(int k=i-2 ; k>=full-1 ; k--){
						if(grid[x[0]+x_constantin][y[0]+k] == 'G'||grid[x[0]+x_constantin][y[0]+k] == 'R'||grid[x[0]+x_constantin][y[0]+k] == 'K'){
							
						}else{
						grid[x[0]+x_constantin][y[0]+k] = 'O';
						}
					}
				}else if(j==3){
					for(int k=i-2 ; k>=full-1 ; k--){
						if(grid[x[0]+k][y[0]+y_constantde] == 'G'||grid[x[0]+k][y[0]+y_constantde] == 'R'||grid[x[0]+k][y[0]+y_constantde] == 'K'){
							
						}else{
						grid[x[0]+k][y[0]+y_constantde] = 'O';
						}
					}
				}
		}
		for(int i=0;i<10;i++){
			for(int j=20;j<=40;j++){
				if(grid[i][j]=='O'){
					grid[i][j] = ' ';
				}
			}
		}
		full--;
		Sleep(800);
		show(grid,zzz);
		cout << endl << endl << endl << endl;
	}
}

void skill_boom(char grid[][41], int x[], int y[]){
	int zzz[1];
	int x_constantde=0, x_constantin=0, y_constantde=0, y_constantin=0,full=0;	//You received a gift
	grid[10][22]='Y',grid[10][23]='o',grid[10][24]='u',grid[10][26]='r',grid[10][27]='e',grid[10][28]='c',grid[10][29]='e',grid[10][30]='i',grid[10][31]='v',grid[10][32]='e'
	,grid[10][33]='d',grid[10][35]='a',grid[10][37]='g',grid[10][38]='i',grid[10][39]='f',grid[10][40]='t';
	
	grid[12][28]='[',grid[12][30]='B',grid[12][31]='o',grid[12][32]='o',grid[12][33]='m',grid[12][35]=']';
	for(int i=2 ; i<7 ; i++){
		x_constantde--;
		x_constantin++;
		y_constantde--;
		y_constantin++;
		for(int j=0 ; j<4 ; j++){
				if(j==0){
					for(int k=full ; k<i ; k++){
						if(x[0]+x_constantde==-1){
							
						}else if(grid[x[0]+x_constantde][y[0]+k] == 'G'||grid[x[0]+x_constantde][y[0]+k] == 'R'||grid[x[0]+x_constantde][y[0]+k] == 'K'){
							
						}else{
						grid[x[0]+x_constantde][y[0]+k] = 'O';
						}
					}
				}else if(j==1){
					for(int k=full ; k<i ; k++){
						if(y[0]+y_constantin==10){
							
						}else if(grid[x[0]+k][y[0]+y_constantin] == 'G'||grid[x[0]+k][y[0]+y_constantin] == 'R'||grid[x[0]+k][y[0]+y_constantin] == 'K'){
							
						}else{
						grid[x[0]+k][y[0]+y_constantin] = 'O';
						}
					}
				}else if(j==2){
					for(int k=i-2 ; k>=full-1 ; k--){
						if(x[0]+x_constantin==10){
							
						}else if(grid[x[0]+x_constantin][y[0]+k] == 'G'||grid[x[0]+x_constantin][y[0]+k] == 'R'||grid[x[0]+x_constantin][y[0]+k] == 'K'){
							
						}else{
						grid[x[0]+x_constantin][y[0]+k] = 'O';
						}
					}
				}else if(j==3){
					for(int k=i-2 ; k>=full-1 ; k--){
						if(y[0]+y_constantde==-1){
							
						}else if(grid[x[0]+k][y[0]+y_constantde] == 'G'||grid[x[0]+k][y[0]+y_constantde] == 'R'||grid[x[0]+k][y[0]+y_constantde] == 'K'){
							
						}else{
						grid[x[0]+k][y[0]+y_constantde] = 'O';
						}
					}
				}
		}
		for(int i=0;i<10;i++){
			for(int j=20;j<=40;j++){
				if(grid[i][j]=='O'){
					grid[i][j] = ' ';
				}
			}
		}
		
		full--;
		Sleep(800);
		show(grid,zzz);
		cout << endl << endl << endl << endl;

	}
	Sleep(2000);
	for(int i=0;i<19;i++){
		for(int j=0;j<=40;j++){
			if(grid[i][j]=='O'){
				grid[i][j] = ' ';
			}
		}
	}
	for(int i=22;i<=40;i++){
		grid[10][i]=' ';
		grid[12][i]=' ';
	}
	Sleep(800);
	show(grid,zzz);
	cout << endl << endl << endl << endl;

}
void skill_chikara1(char grid[][41], int x[], int y[]){
	int zzz[1];
	grid[12][26]='[',grid[12][28]='C',grid[12][29]='h',grid[12][30]='i',grid[12][31]='k',
	grid[12][32]='a',grid[12][33]='r',grid[12][34]='a',grid[12][36]=']';
	skill_basic(grid,x,y);
	for(int i=-1;i<=1;i++){
		for(int j=4;j<19;j++){
			if(grid[x[0]+i][y[0]+j] == 'G'||grid[x[0]+i][y[0]+j] == 'R'||grid[x[0]+i][y[0]+j] == 'K'){
				
			}else{
				grid[x[0]+i][y[0]+j] = 'O';
				if(y[0]+j==18){
					break;
				}
			}
		}
		for(int j=-4;j>-19;j--){
			if(grid[x[0]+i][y[0]+j] == 'G'||grid[x[0]+i][y[0]+j] == 'R'||grid[x[0]+i][y[0]+j] == 'K'){
				
			}else{
				grid[x[0]+i][y[0]+j] = 'O';
				if(y[0]+j==0){
					break;
				}
			}
		}
		for(int j=4;j<19;j++){
			if(grid[x[0]+j][y[0]+i] == 'G'||grid[x[0]+j][y[0]+i] == 'R'||grid[x[0]+j][y[0]+i] == 'K'){
				
			}else{
				grid[x[0]+j][y[0]+i] = 'O';
				if(x[0]+j==18){
					break;
				}
			}
		}
		for(int j=-4;j>-19;j--){
			if(grid[x[0]+j][y[0]+i] == 'G'||grid[x[0]+j][y[0]+i] == 'R'||grid[x[0]+j][y[0]+i] == 'K'){
				
			}else{
				grid[x[0]+j][y[0]+i] = 'O';
				if(x[0]+j==0){
					break;
				}
			}
		}
	}
	for(int i=0;i<20;i++){
			for(int j=20;j<=40;j++){
				if(grid[i][j]=='O'){
					grid[i][j] = ' ';
				}
			}
		}
		Sleep(800);
		show(grid,zzz);
		cout << endl << endl << endl << endl;
		Sleep(2000);
	for(int i=0;i<19;i++){
		for(int j=0;j<=40;j++){
			if(grid[i][j]=='O'){
				grid[i][j] = ' ';
			}
		}
	}
	for(int i=22;i<=40;i++){
		grid[10][i]=' ';
		grid[12][i]=' ';
	}
	show(grid,zzz);
	cout << endl << endl << endl << endl;
}
void skill_chikara2(char grid[][41], int x[], int y[]){
	int zzz[1];
	grid[12][26]='[',grid[12][28]='C',grid[12][29]='h',grid[12][30]='i',grid[12][31]='k',
	grid[12][32]='a',grid[12][33]='r',grid[12][34]='a',grid[12][36]=']';
	skill_basic(grid,x,y);
		for(int j=4;j<19;j++){
			if(x[0]+j>18 || y[0]+j>18){
				break;
			}
			if(grid[x[0]+j][y[0]+j] == 'G' ||grid[x[0]+j][y[0]+j] == 'R' ||grid[x[0]+j][y[0]+j] == 'K' ||
			grid[x[0]+j-1][y[0]+j] == 'G' ||
			grid[x[0]+j][y[0]+j-1] == 'G'){
				
			}else{
			grid[x[0]+j][y[0]+j] = 'O';
			grid[x[0]+j-1][y[0]+j] = 'O';
			grid[x[0]+j][y[0]+j-1] = 'O';
			}
		}
		for(int j=-4;j>-19;j--){
			if(x[0]+j<0 || y[0]+j<0){
				break;
			}
			if(grid[x[0]+j][y[0]+j] == 'G' ||grid[x[0]+j][y[0]+j] == 'R' ||grid[x[0]+j][y[0]+j] == 'K' ||
			grid[x[0]+j+1][y[0]+j] == 'G' ||
			grid[x[0]+j][y[0]+j+1] == 'G'){
			}else{
			grid[x[0]+j][y[0]+j] = 'O';
			grid[x[0]+j+1][y[0]+j] = 'O';
			grid[x[0]+j][y[0]+j+1] = 'O';
			}
		}
		for(int j=4;j<19;j++){
			if(x[0]-j<0 || y[0]+j>18){
				break;
			}
			if(grid[x[0]-j][y[0]+j] == 'G' ||grid[x[0]-j][y[0]+j] == 'R' ||grid[x[0]-j][y[0]+j] == 'K' ||
			grid[x[0]-j+1][y[0]+j] == 'G' ||
			grid[x[0]-j][y[0]+j-1] == 'G'){
			}else{
			grid[x[0]-j][y[0]+j] = 'O';
			grid[x[0]-j+1][y[0]+j] = 'O';
			grid[x[0]-j][y[0]+j-1] = 'O';
			}
		}
		for(int j=-4;j>-19;j--){
			if(x[0]-j>18 || y[0]+j<0){
				break;
			}
			if(grid[x[0]-j][y[0]+j] == 'G' ||grid[x[0]-j][y[0]+j] == 'R' ||grid[x[0]-j][y[0]+j] == 'K' ||
			grid[x[0]-j-1][y[0]-j] == 'G' ||
			grid[x[0]-j][y[0]+j-1] == 'G'){
			}else{
			grid[x[0]-j][y[0]+j] = 'O';
			grid[x[0]-j-1][y[0]+j] = 'O';
			grid[x[0]-j][y[0]+j-1] = 'O';
			}
		}
	for(int i=0;i<20;i++){
			for(int j=20;j<=40;j++){
				if(grid[i][j]=='O'){
					grid[i][j] = ' ';
				}
			}
		}
		Sleep(800);
		show(grid,zzz);
		cout << endl << endl << endl << endl;
		Sleep(2000);
	for(int i=0;i<19;i++){
		for(int j=0;j<=40;j++){
			if(grid[i][j]=='O'){
				grid[i][j] = ' ';
			}
		}
	}
	for(int i=22;i<=40;i++){
		grid[10][i]=' ';
		grid[12][i]=' ';
	}
	show(grid,zzz);
	cout << endl << endl << endl << endl;
	
}

void skill_spread(char grid[][41], int x[], int y[]){
	int POTATO[1];
	int x_constantde=-1, x_constantin=1, y_constantde=-1, y_constantin=1,full=0;
	int a, b, i=2;
	grid[12][26]='[',grid[12][28]='S',grid[12][29]='p',grid[12][30]='r',grid[12][31]='e',
	grid[12][32]='a',grid[12][33]='d',grid[12][35]=']';
	skill_basic(grid,x,y);
	srand(time(0));
		for(int z=0;z<10;z++){
			do{
			a = rand() % 20 ;
			b = rand() % 20 ;
			}while(grid[a][b]=='S'||grid[a+2][b]=='S'||grid[a-2][b]=='S'||grid[a][b+2]=='S'||grid[a][b-2]=='S' || a%2!=0 || b%2!=0||
				   grid[a+2][b+2]=='S'||grid[a-2][b-2]=='S'||grid[a+2][b-2]=='S'||grid[a-2][b+2]=='S'||grid[a][b]=='R'||grid[a][b]=='K'
			);
			for(int j=0 ; j<4 ; j++){
				grid[a][b] = 'Q';
					if(j==0){
						for(int k=full ; k<i ; k++){
							grid[a+x_constantde][b+k] = 'Q';
						}
					}else if(j==1){
						for(int k=full ; k<i ; k++){
							grid[a+k][b+y_constantin] = 'Q';
						}
					}else if(j==2){
						for(int k=i-2 ; k>=full-1 ; k--){
							grid[a+x_constantin][b+k] = 'Q';
						}
					}else if(j==3){
						for(int k=i-2 ; k>=full-1 ; k--){
							grid[a+k][b+y_constantde] = 'Q';
					}
				}
			}
		for(int i=0;i<20;i++){
			for(int j=20;j<=40;j++){
				if(grid[i][j]=='O'){
					grid[i][j] = ' ';
				}
			}
		}
		Sleep(800);
		show(grid,POTATO);
		cout << endl << endl << endl << endl;
		}
	
	Sleep(2000);
	for(int i=0;i<19;i++){
		for(int j=0;j<=40;j++){
			if(grid[i][j]=='O'||grid[i][j]=='Q'){
				grid[i][j] = ' ';
			}
		}
	}
	for(int i=22;i<=40;i++){
		grid[10][i]=' ';
		grid[12][i]=' ';
	}
	show(grid,POTATO);
	cout << endl << endl << endl << endl;
	
	
}
void skill_security(char grid[][41], int x[], int y[], int pass[]){
	int x_constantde=-1, x_constantin=1, y_constantde=-1, y_constantin=1,full=0;
	grid[10][22]='Y',grid[10][23]='o',grid[10][24]='u',grid[10][26]='r',grid[10][27]='e',
	grid[10][28]='c',grid[10][29]='e',grid[10][30]='i',grid[10][31]='v',grid[10][32]='e',
	grid[10][33]='d',grid[10][35]='a',grid[10][37]='g',grid[10][38]='i',grid[10][39]='f',grid[10][40]='t';

	grid[12][25]='[',grid[12][27]='P',grid[12][28]='r',grid[12][29]='o',grid[12][30]='t',
	grid[12][31]='e',grid[12][32]='c',grid[12][33]='t',
	grid[12][34]='i',grid[12][35]='o',grid[12][36]='n',grid[12][38]=']';
	
	grid[14][28]='t',grid[14][29]='i',grid[14][30]='m',grid[14][31]='e',
	grid[14][33]='l',grid[14][34]='e',grid[14][35]='f',grid[14][36]='t';
	
	int i=2;
	srand(time(0));
		for(int i=0;i<19;i++){
			for(int j=0;j<=40;j++){
				if(grid[i][j]=='S'){
					grid[i][j] = ' ';
				}
			}
		}
		grid[x[0]][y[0]] = 'S';
			for(int j=0 ; j<4 ; j++){
					if(j==0){
						for(int k=full ; k<i ; k++){
							grid[x[0]+x_constantde][y[0]+k] = 'S';
						}
					}else if(j==1){
						for(int k=full ; k<i ; k++){
							grid[x[0]+k][y[0]+y_constantin] = 'S';
						}
					}else if(j==2){
						for(int k=i-2 ; k>=full-1 ; k--){
							grid[x[0]+x_constantin][y[0]+k] = 'S';
						}
					}else if(j==3){
						for(int k=i-2 ; k>=full-1 ; k--){
							grid[x[0]+k][y[0]+y_constantde] = 'S';
					}
				}
			}		
		show(grid,pass);
		cout << endl << endl << endl << endl;
		Sleep(600);
}

void check(char grid[][41], int x_locate[], int y_locate[], int pass[], int evil_frequency, int i){
	if(grid[x_locate[0]+2][y_locate[0]]=='C'||grid[x_locate[0]+2][y_locate[0]]=='E'||
	   grid[x_locate[0]+2][y_locate[0]+2]=='C'||grid[x_locate[0]+2][y_locate[0]+2]=='E'||
	   grid[x_locate[0]+2][y_locate[0]-2]=='C'||grid[x_locate[0]+2][y_locate[0]-2]=='E'||
	   grid[x_locate[0]-2][y_locate[0]]=='C'||grid[x_locate[0]-2][y_locate[0]]=='E'||
	   grid[x_locate[0]-2][y_locate[0]+2]=='C'||grid[x_locate[0]-2][y_locate[0]+2]=='E'||
	   grid[x_locate[0]-2][y_locate[0]-2]=='C'||grid[x_locate[0]-2][y_locate[0]-2]=='E'||
	   grid[x_locate[0]][y_locate[0]+2]=='C'||grid[x_locate[0]][y_locate[0]+2]=='E'||
	   grid[x_locate[0]][y_locate[0]-2]=='C'||grid[x_locate[0]][y_locate[0]-2]=='E')
	{
		if(grid[12][27]!='P'){
			cout << endl << endl << "You lose." << endl << endl;
			Sleep(500);
			pass[0]=2;
		}
	}else if(x_locate[0]==16 && y_locate[0]==16 ||
		x_locate[0]==16 && y_locate[0]==18 ||
		x_locate[0]==18 && y_locate[0]==16)
	{
		cout << endl << endl << "You won." << endl<< endl;
		Sleep(500);
		pass[0]=1;
	}else if(grid[x_locate[4]+2][y_locate[4]]=='E'||
	   grid[x_locate[4]+2][y_locate[4]+2]=='E'||
	   grid[x_locate[4]+2][y_locate[4]-2]=='E'||
	   grid[x_locate[4]-2][y_locate[4]]=='E'||
	   grid[x_locate[4]-2][y_locate[4]+2]=='E'||
	   grid[x_locate[4]-2][y_locate[4]-2]=='E'||
	   grid[x_locate[4]][y_locate[4]+2]=='E'||
	   grid[x_locate[4]][y_locate[4]-2]=='E')
	{
		grid[x_locate[4]+2][y_locate[4]]=' ';
	    grid[x_locate[4]+2][y_locate[4]+2]=' ';
	    grid[x_locate[4]+2][y_locate[4]-2]=' ';
	    grid[x_locate[4]-2][y_locate[4]]=' ';
	    grid[x_locate[4]-2][y_locate[4]+2]=' ';
	    grid[x_locate[4]-2][y_locate[4]-2]=' ';
	    grid[x_locate[4]][y_locate[4]+2]=' ';
	    grid[x_locate[4]][y_locate[4]-2]=' ';
	    Sleep(1000);
		if(i==4+evil_frequency){
			cout << endl << endl << endl ;
		}else{
			
		}
	    show(grid,pass);
		if(i==4+evil_frequency){
			cout << endl ;
		}else{
			cout << endl << endl << endl << endl ;	
		}
	}
}

void evil(char grid[][41],int x_locate[],int y_locate[],int pass_evil[],int evil_frequency){
	int x, y, i;
	const char change = ' ';
	for(int i=1;i<5+evil_frequency;i++){
		if(grid[x_locate[i]][y_locate[i]]=='E'||grid[x_locate[i]][y_locate[i]]=='C'){
			srand(time(0));
			do{
				x = rand() % 3 - 1 ;
				y = rand() % 3 - 1 ;
			}while(x==0&&y==0);
				x *= 2;
				y *= 2;
		if(grid[x_locate[i]][y_locate[i]]=='C'){
		while(x_locate[i]+x==-2 || y_locate[i]+y==-2 || x_locate[i]+x==20 || y_locate[i]+y==20|| grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
		grid[x_locate[i]+2*x][y_locate[i]+2*y] == 'R'|| grid[x_locate[i]+2*x][y_locate[i]+y] == 'R'|| grid[x_locate[i]+x][y_locate[i]+2*y] == 'R'||
		grid[x_locate[i]+x][y_locate[i]+y] == 'S'
		)
			{
				srand(time(0));
				do{
				x = rand() % 3 - 1 ;
				y = rand() % 3 - 1 ;
				}while(x==0&&y==0);
				x *= 2;
				y *= 2;
			}
		}else if(grid[x_locate[i]][y_locate[i]]=='E'){
		while(x_locate[i]+x==-2 || y_locate[i]+y==-2 || x_locate[i]+x==20 || y_locate[i]+y==20 ||
		grid[x_locate[i]+x][y_locate[i]+y] == 'E' || grid[x_locate[i]+x][y_locate[i]+y] == 'R' ||
		grid[x_locate[i]+x*2][y_locate[i]+y*2] == 'R'|| grid[x_locate[i]+x*2][y_locate[i]+y] == 'R'||
		grid[x_locate[i]+x][y_locate[i]+y*2] == 'R'||grid[x_locate[i]+x][y_locate[i]+y] == 'K' ||
		grid[x_locate[i]+x+2][y_locate[i]+y]=='C'||grid[x_locate[i]+x*2][y_locate[i]+y*2] == 'K'||
	    grid[x_locate[i]+x+2][y_locate[i]+y+2]=='C'||grid[x_locate[i]+x*2][y_locate[i]+y] == 'K'||
	    grid[x_locate[i]+x+2][y_locate[i]+y-2]=='C'||grid[x_locate[i]+x][y_locate[i]+y*2] == 'K'||
	    grid[x_locate[i]+x-2][y_locate[i]+y]=='C'||
	    grid[x_locate[i]+x-2][y_locate[i]+y+2]=='C'||
	    grid[x_locate[i]+x-2][y_locate[i]+y-2]=='C'||
	    grid[x_locate[i]+x][y_locate[i]+y+2]=='C'||grid[x_locate[i]+x][y_locate[i]+y] == 'S' ||
	    grid[x_locate[i]+x][y_locate[i]+y-2]=='C')
			{
				srand(time(0));
				do{
					x = rand() % 3 - 1 ;
					y = rand() % 3 - 1 ;
				}while(x==0&&y==0);
				x *= 2;
				y *= 2;
			}
		}
		Sleep(150);
		x /= 2;
		y /= 2;
		for(int j=1;j<=2;j++){
			
			if(i==4+evil_frequency&&j==2&&pass_evil[1]==4){
				grid[x_locate[i]+x][y_locate[i]+y] = grid[x_locate[i]][y_locate[i]];
				grid[x_locate[i]][y_locate[i]] = change;
				y_locate[i] +=y ;
				x_locate[i] +=x ;
				for(int i=0;i<=18;i++){
					for(int j=0;j<=40;j++){
						if(i==x_locate[0] && j==y_locate[0]){
							
						}else if(grid[i][j]=='S'){
							grid[i][j] = ' ';
						}
					}
				}
				for(int i=10;i<=14;i+=2){
					for(int j=20;j<=40;j++){
						grid[i][j]=' ';
					}
				}
				pass_evil[1] = 0;
				Sleep(600);
				show(grid,pass_evil);
				
			}else{
				grid[x_locate[i]+x][y_locate[i]+y] = grid[x_locate[i]][y_locate[i]];
				grid[x_locate[i]][y_locate[i]] = change;
				y_locate[i] +=y ;
				x_locate[i] +=x ;
				Sleep(600);
				show(grid,pass_evil);
				if(i!=4+evil_frequency||j==1){
					cout << endl << endl << endl << endl ;
				}else if(i==4+evil_frequency||j==2){
					cout << endl ;	
				}
			}
		}
		
		check(grid,x_locate,y_locate,pass_evil,evil_frequency,i);
		
		if(pass_evil[0]==1||pass_evil[0]==2){
			show(grid,pass_evil);
			break;
		}
	}
	
	}
}
	
void random(char grid[][41], int x_locate[], int y_locate[],int evil_frequency){
	
	srand(time(0));
	grid[x_locate[0]][y_locate[0]] = 'S';
	for(int i=1;i<5+evil_frequency;i++){
		do{
			do{
				x_locate[i] = rand() % 18;
			}while(x_locate[i]%2!=0);
			do{
				y_locate[i] = rand() % 18;
			}while(y_locate[i]%2!=0);
		}while(grid[x_locate[i]][y_locate[i]]=='S'||grid[x_locate[i]][y_locate[i]]=='R'||grid[x_locate[i]-6][y_locate[i]]=='S'||
		grid[x_locate[i]-2][y_locate[i]]=='S'||grid[x_locate[i]+2][y_locate[i]]=='R'||grid[x_locate[i]-6][y_locate[i]-2]=='S'||
		grid[x_locate[i]][y_locate[i]-2]=='S'||grid[x_locate[i]][y_locate[i]+2]=='R'||grid[x_locate[i]-6][y_locate[i]-4]=='S'||
		grid[x_locate[i]-2][y_locate[i]-2]=='S'||grid[x_locate[i]+2][y_locate[i]+2]=='R'||grid[x_locate[i]-6][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]]=='S'||grid[x_locate[i]+4][y_locate[i]]=='R'||grid[x_locate[i]-4][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]-2]=='S'||grid[x_locate[i]+4][y_locate[i]+2]=='R'||grid[x_locate[i]-2][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]-4]=='S'||grid[x_locate[i]+4][y_locate[i]+4]=='R'||grid[x_locate[i]][y_locate[i]-6]=='S'||
		grid[x_locate[i]-2][y_locate[i]-4]=='S'||grid[x_locate[i]+2][y_locate[i]+4]=='R'||
		grid[x_locate[i]][y_locate[i]-4]=='S'||grid[x_locate[i]][y_locate[i]+4]=='R'||
		
		grid[x_locate[i]][y_locate[i]]=='E' || grid[x_locate[i]-8][y_locate[i]]=='S' || grid[x_locate[i]][y_locate[i]]=='C' ||
		grid[x_locate[i]-8][y_locate[i]-2]=='S' || grid[x_locate[i]+2][y_locate[i]]=='C' ||
	    grid[x_locate[i]-8][y_locate[i]-4]=='S' || grid[x_locate[i]+2][y_locate[i]+2]=='C' ||
		grid[x_locate[i]-8][y_locate[i]-6]=='S' || grid[x_locate[i]+2][y_locate[i]-2]=='C' ||
		grid[x_locate[i]-8][y_locate[i]-8]=='S' || grid[x_locate[i]-2][y_locate[i]]=='C' ||
	    grid[x_locate[i]-6][y_locate[i]-8]=='S' || grid[x_locate[i]-2][y_locate[i]+2]=='C' ||
	    grid[x_locate[i]-4][y_locate[i]-8]=='S' || grid[x_locate[i]-2][y_locate[i]-2]=='C' ||
	    grid[x_locate[i]-2][y_locate[i]-8]=='S' || grid[x_locate[i]][y_locate[i]+2]=='C' ||
	    grid[x_locate[i]][y_locate[i]-8]=='S' || grid[x_locate[i]][y_locate[i]-2]=='C' ||
	    
		grid[x_locate[i]][y_locate[i]]=='K'||
		grid[x_locate[i]+2][y_locate[i]]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+2]=='K'||
		grid[x_locate[i]][y_locate[i]+2]=='K'||
		grid[x_locate[i]+4][y_locate[i]+4]=='K'||
	    grid[x_locate[i]+4][y_locate[i]+2]=='K'||
	    grid[x_locate[i]+4][y_locate[i]]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+4]=='K'||
	    grid[x_locate[i]][y_locate[i]+4]=='K'
		);	
		if(i==4){
		do{
			do{
				x_locate[i] = rand() % 18;
			}while(x_locate[i]%2!=0);
			do{
				y_locate[i] = rand() % 18;
			}while(y_locate[i]%2!=0);
		}while(
		grid[x_locate[i]][y_locate[i]]=='E'||
		grid[x_locate[i]][y_locate[i]+2]=='E'||
		grid[x_locate[i]][y_locate[i]-2]=='E'||
		grid[x_locate[i]+2][y_locate[i]]=='E'||
	    grid[x_locate[i]+2][y_locate[i]+2]=='E'||
		grid[x_locate[i]+2][y_locate[i]-2]=='E'||
		grid[x_locate[i]-2][y_locate[i]]=='E'||
	    grid[x_locate[i]-2][y_locate[i]+2]=='E'||
	    grid[x_locate[i]-2][y_locate[i]-2]=='E'||

		grid[x_locate[i]][y_locate[i]]=='S'||grid[x_locate[i]][y_locate[i]]=='R'||grid[x_locate[i]-6][y_locate[i]]=='S'||
		grid[x_locate[i]-2][y_locate[i]]=='S'||grid[x_locate[i]+2][y_locate[i]]=='R'||grid[x_locate[i]-6][y_locate[i]-2]=='S'||
		grid[x_locate[i]][y_locate[i]-2]=='S'||grid[x_locate[i]][y_locate[i]+2]=='R'||grid[x_locate[i]-6][y_locate[i]-4]=='S'||
		grid[x_locate[i]-2][y_locate[i]-2]=='S'||grid[x_locate[i]+2][y_locate[i]+2]=='R'||grid[x_locate[i]-6][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]]=='S'||grid[x_locate[i]+4][y_locate[i]]=='R'||grid[x_locate[i]-4][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]-2]=='S'||grid[x_locate[i]+4][y_locate[i]+2]=='R'||grid[x_locate[i]-2][y_locate[i]-6]=='S'||
		grid[x_locate[i]-4][y_locate[i]-4]=='S'||grid[x_locate[i]+4][y_locate[i]+4]=='R'||grid[x_locate[i]][y_locate[i]-6]=='S'||
		grid[x_locate[i]-2][y_locate[i]-4]=='S'||grid[x_locate[i]+2][y_locate[i]+4]=='R'||
		grid[x_locate[i]][y_locate[i]-4]=='S'||grid[x_locate[i]][y_locate[i]+4]=='R'||
		
		grid[x_locate[i]-8][y_locate[i]]=='S' || 
		grid[x_locate[i]-8][y_locate[i]-2]=='S' || 
	    grid[x_locate[i]-8][y_locate[i]-4]=='S' ||
		grid[x_locate[i]-8][y_locate[i]-6]=='S' || 
		grid[x_locate[i]-8][y_locate[i]-8]=='S' ||
	    grid[x_locate[i]-6][y_locate[i]-8]=='S' ||
	    grid[x_locate[i]-4][y_locate[i]-8]=='S' ||
	    grid[x_locate[i]-2][y_locate[i]-8]=='S' ||
	    grid[x_locate[i]][y_locate[i]-8]=='S' ||
	    
		grid[x_locate[i]][y_locate[i]]=='K'||
		grid[x_locate[i]+2][y_locate[i]]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+2]=='K'||
		grid[x_locate[i]][y_locate[i]+2]=='K'||
		grid[x_locate[i]+4][y_locate[i]+4]=='K'||
	    grid[x_locate[i]+4][y_locate[i]+2]=='K'||
	    grid[x_locate[i]+4][y_locate[i]]=='K'||
	    grid[x_locate[i]+2][y_locate[i]+4]=='K'||
	    grid[x_locate[i]][y_locate[i]+4]=='K'
	    
			);
		}
			
					grid[x_locate[i]][y_locate[i]] = 'E';
					if(i==4){
						grid[x_locate[i]][y_locate[i]] = 'C';
					}
		// x y location , at 0 is santa , at 1 is evil1 , at 2 is evil2 , at 3 is evil3 , at 4 is covid , at 5 is rudolph
	}

}

void show(char grid[][41],int pass[]){
	int num=4;
	for(int i=0;i<19;i++){
		if(i%2==0){
		for(int j=0;j<19;j++){
			
			if(j%2==0){
				cout << "[" << grid[i][j] << "]" ;
			}else{
				cout << " " << grid[i][j] << " ";
			}
		}
		}else{
			for(int j=0;j<19;j++){
				cout << " " << grid[i][j] << " ";
			}
		}
		for(int j=19;j<41;j++){
			if(pass[1]>0&&i==14&&j==26){
				cout << " " << num-pass[1] << " " ;
			}else{
				cout << grid[i][j];
			}
		}
		cout << endl;
	}
}

void game(char grid[][41], int x_locate[], int y_locate[],int pass_game[]){
	int evil_frequency = -1,i=-1;
	char input[2]={};
	const char change=' ';
	int passin=0, skill_pass=0,polar;
	cout << endl ;
	do{
		do{
			cout << "Press W  [up]       A  [left]      S  [down]       D  [right]        *Please press in lowercase letters.\n      WA [up/left]  WD [up/right]  SA [down/left]  SD [down/right]" << endl;
			cout << "Press : ";
			cin >> input;
			if(input[0]=='w'||input[0]=='a'||input[0]=='s'||input[0]=='d'||
			input[1]=='w'||input[1]=='a'||input[1]=='s'||input[1]=='d'){
				polar=1;
			}else{
				polar=0;
			}
		}while(polar==0);
	cout << endl << endl << endl << endl;
	for(int i=1;i<=2;i++){
	if(input[0]=='w' && input[1]=='a' || input[0]=='a' && input[1]=='w'){
		if(x_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]-1][y_locate[0]-1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]-1][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='w' && input[1]=='d' || input[0]=='d' && input[1]=='w'){
		if(x_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]==18){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]-1][y_locate[0]+1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]-1][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='s' && input[1]=='d' || input[0]=='d' && input[1]=='s'){
		if(x_locate[0]==18){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]==18){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]+1][y_locate[0]+1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]+1][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='a' && input[1]=='s' || input[0]=='s' && input[1]=='a'){
		if(x_locate[0]==18){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else if(y_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]+1][y_locate[0]-1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]+1][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='w'){
		if(x_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]-1][y_locate[0]]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]-1][y_locate[0]] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		x_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='s'){
		if(x_locate[0]==18){
			cout << "Limited scope. Please try agiant"<< endl;
			passin=1;
		}else{
			if(grid[x_locate[0]+1][y_locate[0]]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]+1][y_locate[0]] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		x_locate[0]++;
		passin=0;
		}
	}else if(input[0]=='a'){
		if(y_locate[0]==0){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]][y_locate[0]-1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]][y_locate[0]-1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]--;
		passin=0;
		}
	}else if(input[0]=='d'){
		if(y_locate[0]==18){
			cout << "Limited scope. Please try agiant" << endl;
			passin=1;
		}else{
			if(grid[x_locate[0]][y_locate[0]+1]=='G'){
				skill_pass=1;
			}
		grid[x_locate[0]][y_locate[0]+1] = grid[x_locate[0]][y_locate[0]];
		grid[x_locate[0]][y_locate[0]] = change;
		y_locate[0]++;
		passin=0;
		}
	}
	if(passin==1&&i==1){
		break;
	}else if(i==1){
		if(grid[12][27]=='P'){
			pass_game[1]++;
			skill_security(grid,x_locate,y_locate,pass_game);
		}else{
			show(grid,pass_game);
			cout << endl << endl << endl << endl;
			Sleep(600);
		}
	}else if(i==2){
		if(grid[12][27]=='P'){
			skill_security(grid,x_locate,y_locate,pass_game);
			
		}else{
			show(grid,pass_game);
			cout << endl << endl << endl << endl;
			Sleep(600);
		}
	}
	}
}while(passin==1);
	if(skill_pass==1){
		skill_choose(grid,x_locate,y_locate,pass_game);
		skill_pass=0;
	}
	check(grid,x_locate,y_locate,pass_game,evil_frequency,i);
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
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\nG is Gift.\n";
	Sleep(4000);
	cout << endl << ">> You need to find Rudorf <<" << endl << endl;
	cout << setw(34) << "| CHALLENGE #4 |" << endl << endl << setw(32) << ">> Round 1 <<" << endl << endl;
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
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nK is Evil Elev King.\nG is Gift.\n";
	Sleep(4000);
	cout << endl << ">> You need to Kill Evil Elev King <<" << endl << endl;
	cout << setw(32) << ">> Round 2 <<" << endl << endl;
}
void story3(){
	cout << "Evil Elev : Omai wa mo ~ Chindeiru! " << endl ;
	Sleep(2600);
	cout << "Santa : NANI ><'" << endl ;
	Sleep(2500);
	cout << "Covid-19 : Evil Elev Omai mo Chideiru! " << endl ;
	Sleep(2500); 
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\nG is Gift.\n";
	Sleep(4000);
	cout << endl << ">> You need to Kill Evil Elev King <<" << endl << endl;
	cout << setw(32) << ">> Round 3 <<" << endl << endl;
}
void story4(){
	char x[20]={};
	cout << "Santa : Kencosh. Are you funny?" << endl;
	Sleep(2500);
	cout << "Kencosh : Ammm. No " << endl;
	Sleep(2500);
	cout << "Evil Elev : GOTTA. Kencosh fight ME !" << endl ;
	Sleep(2300);
	cout << "Kencosh : say something ..." ;
	cin >> x;
	Sleep(1500);
	cout << endl << "Covid-19 : " ;
	for(int i=0;i<20;i++){
		cout << x[i] ;
	}
	cout << " ? "<< endl ;
	Sleep(1500);
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\nG is Gift.\n";
	Sleep(4000);
	cout << setw(32) << ">> Round 4 <<" << endl << endl;
}
void story5(){
	cout << "Santa : Yametekudasai ~ ~ "<< endl ;
	Sleep(2000);
	cout << "Evil Elev : LOL" << endl ;
	Sleep(1500);
	cout << "S is Santa.\nE is Evil Elve.\nC is Covid-19.\nR is Rudorf.\nG is Gift.\n";
	cout << setw(32) << ">> Round 5 <<" << endl << endl;
}
void story6(){
	cout << setw(32) << ">> Round Special <<" << endl << endl;
}
