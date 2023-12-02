#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void changepos(int* x, int* y, int resultX, int resultY) { // function change position of Santa
	*x = resultX; 
	*y = resultY;
}
int main() {
	int santa[10][10] = {0};
	int evilelves[10][10] = {0};
	int input_number;
	int posit_santa_x = 0, posit_santa_y = 0;
	int posit_evilelves_x = 0, posit_evilelves_y = 0;
	santa[posit_santa_y][posit_santa_x] = 1;
	evilelves[posit_evilelves_y][posit_evilelves_x] == 2;
	
	
	cout << setw(20) << "Saving Santa" << endl << endl ;
	//cout <<  setw(10) << "Game rules" << end;
	
	
	while (1) {
		for (int x = 0; x < 10; x++) {
			for (int y = 0; y < 10; y++) {
				cout << "[";
				if (santa[x][y] == 1) {
					cout << "S";
				}else if (evilelves[x][y] == 2) {
					cout << "E"	;
				}else {
				cout << " " ;
				}
				cout << "]";
			}
			cout << endl;
		}		cout << endl <<"Enter the number to move Santa : " ;
		cin  >> input_number;
		santa[posit_santa_y][posit_santa_x] = 0;
		if (input_number == 1) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x - 1, posit_santa_y + 1);
		}
		else if (input_number == 2) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x, posit_santa_y + 1);
		}
		else if (input_number == 3) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x + 1, posit_santa_y + 1);
		}
		else if (input_number == 4) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x - 1, posit_santa_y);
		}
		else if (input_number == 5) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x, posit_santa_y);
		}
		else if (input_number == 6) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x + 1, posit_santa_y);
		}
		else if (input_number == 7) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x - 1, posit_santa_y - 1);
		}
		else if (input_number == 8) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x, posit_santa_y - 1);
		}
		else if (input_number == 9) {
			changepos(&posit_santa_x, &posit_santa_y, posit_santa_x + 1, posit_santa_y - 1);
		}
		santa[posit_santa_y][posit_santa_x] = 1;
		
	}
	

	return 0;
}
