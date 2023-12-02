#include<iostream>
#include<iomanip>
using namespace std;
void print(char x[][9],int y[][9] ,int ,int );
void print1(char x[][9],int y[][9] ,int ,int ,int ,int t[],char z[]);
void print2(char x[][9],int y[][9] ,int ,int ,int ,int t[],char z[]);
int check(char x[][9] ,char );


int main(){	
	const int max=9;
	int rowinput[max] = {-1,6,6,6,6,6,6,6,-1};
	int row=8, column=9;
	char a[8][9] = {};
	int b[8][9] = {};
	char nameplayer1[10],nameplayer2[10];
	int win,columninput1,columninput2,y;
	cout << "----------------------" << endl;
	cout << ">> >> Connect 4 << <<" << endl;
	cout << "----------------------" << endl;
	cout << "Please enter the name of the 1st player : ";
	cin >> nameplayer1;
	cout << "Please enter the name of the 2nd player : ";
	cin >> nameplayer2;
	
	print(a, b, row, column);
	do{
		print1(a ,b ,row ,column ,columninput1,rowinput,nameplayer1);
		
		win = check(a,'O');
		if(win==1){
			cout << setw(35) << "> > > " << nameplayer1 << " won" << " < < <" << endl;
			break;
		}
	
		print2(a ,b ,row ,column ,columninput2,rowinput,nameplayer2);
		
		win = check(a,'X');
		if(win==1){
			cout << setw(35) << "> > > " << nameplayer2 << " won" << " < < <" << endl;
			break;
		}

	}while(win!=1);
	
	cout << "                WWWWWWWWW                            WWWWWWWWW               " << endl ;
	cout << "               WWWWWWWWWWW                          WWWWWWWWWWW               " << endl ;
	cout << "               WWWWWWWWWWW                          WWWWWWWWWWW               " << endl ;
	cout << "               WWWWWWWWWWW                          WWWWWWWWWWW               " << endl ;
	cout << "                WWWWWWWWW           MMMMMM           WWWWWWWWW                " << endl ;
	cout << "                                   M      M                                   " << endl ;
	cout << "                                   M      M                                   " << endl ;
	cout << "          / / /                    M      M                    / / /          " << endl ;
	cout << "                                    MMMMMM                                    " << endl ;
	cout << "                                                                              " << endl ;
	cout << "                       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                       " << endl ;
	cout << "                       W                              W                       " << endl ;
	cout << "                       W                              W                       " << endl ;
	cout << "                        W                            W                        " << endl ;
	cout << "                          W                        W                          " << endl ;
	cout << "                             WWWWWWWWWWWWWWWWWWWW                             " << endl ;
	cout << "                                                                              " << endl ;
	cout << "                                                                              " << endl ;
	cout << "    MMMMMM   MMMMMM   MM    M   MMMMMM   MMMMMMM    MMMMMM   MMMMMMM   MMMMMM " << endl ;
	cout << "   M        M      M  M M   M  M         M      M  M      M     M      M      " << endl ;
	cout << "   M        M      M  M  M  M  M   MMM   MMMMMM    MMMMMMMM     M      MMMMMM " << endl ;
	cout << "   M        M      M  M   M M  M     M   M     M   M      M     M      M      " << endl ;
	cout << "    MMMMMM   MMMMMM   M    MM   MMMMMM   M      M  M      M     M      MMMMMM " << endl ;
	return 0;
}
void print(char a[][9],int b[][9] ,int row ,int column){
	for(int i=0;i<8;i++){
		for(int j=0;j<9;j++){
			a[i][j] = ' ';
			a[0][j] = '¡';
		}
		a[i][8] = '¡';
		a[i][0] = '¡';
	}
	
	
	for(int i=0; i<row-1; i++){
		cout << setw(5);
		for(int j=0;j<column;j++){
			cout << a[i][j] << " ";
			
		}
		cout << endl;
	}
	cout << setw(5) << a[0][0] << " ";
	for(int i=1; i<column-1;i++){
		cout << i << " ";
	}
	cout << a[0][0] << endl;
}
void print1(char a[][9],int b[][9] ,int row ,int column,int columninput ,int rowinput[],char nameplayer[]){
		cout << endl;
		cout << nameplayer << " select : ";
		cin >> columninput ;
		while(rowinput[columninput]==0){
		cout << "That row is full. Please enter a new row : ";
		cin >> columninput;
		while(columninput<1||columninput>7){
			cout << "Your column is wrong. Please try again : " ;
			cin >> columninput ;
		}
	}
		while(columninput<1||columninput>7){
			cout << "Your column is wrong. Please try again : " ;
			cin >> columninput ;
		}
		
	a[rowinput[columninput]][columninput] = 'O';
	for(int i=0; i<row-1; i++){
		cout << setw(5);
		for(int j=0;j<column;j++){
			cout << a[i][j] << " ";
			
		}
		cout << endl;
	}
	cout << setw(5) << a[0][0] << " ";
	for(int i=1; i<column-1;i++){
		cout << i << " ";
	}
	cout << a[0][0] << endl;

	rowinput[columninput]--;
}

void print2(char a[][9],int b[][9] ,int row ,int column,int columninput ,int rowinput[],char nameplayer[]){
		cout << endl;
		cout << nameplayer << " select : ";
		cin >> columninput ;
	while(rowinput[columninput]==0){
		cout << "That row is full. Please enter a new row : ";
		cin >> columninput;
		while(columninput<1||columninput>7){
			cout << "Your column is wrong. Please try again : " ;
			cin >> columninput ;
		}
	}
		while(columninput<1||columninput>7){
			cout << "Your column is wrong. Please try again : " ;
			cin >> columninput ;
		}
		
	a[rowinput[columninput]][columninput] = 'X';
	for(int i=0; i<row-1; i++){
		cout << setw(5);
		for(int j=0;j<column;j++){
			cout << a[i][j] << " ";
			
		}
		cout << endl;
	}
	cout << setw(5) << a[0][0] << " ";
	for(int i=1; i<column-1;i++){
		cout << i << " ";
	}
	cout << a[0][0] << endl;

	rowinput[columninput]--;
}
int check(char x[][9] ,char store){
	int win;
	for(int i=6;i>0;--i){
		for(int j=7;j>0;--j){
			if(	x[i][j]==store &
				x[i-1][j]==store &
				x[i-2][j]==store &
				x[i-3][j]==store )
				{
					win = 1;
				}
			if( x[i][j]==store &
				x[i][j-1]==store &
				x[i][j-2]==store &
				x[i][j-3]==store )
				{
					win = 1;
				}
			if(	x[i][j]==store &
				x[i-1][j+1]==store &
				x[i-2][j+2]==store &
				x[i-3][j+3]==store )
				{
					win = 1;
				}
			if(	x[i][j]==store &
				x[i-1][j-1]==store &
				x[i-2][j-2]==store &
				x[i-3][j-3]==store )
				{
					win = 1;
				}
		}
	}
	return win;
}
