#include<iostream>
using namespace std;
const int student = 3;
const int exam = 4;
int minimum(int studentGrade[student][exam], int student, int exam);
int maximum(int [student][exam], int, int);
double average(int [], int);

int main(){
	int studentGrade[student][exam] = 
	{ 
		{77, 68, 86, 73},
		{96, 87, 89, 78},
		{70, 90, 86, 81}
	};
	cout << "Lowest grade: " << minimum(studentGrade, student, exam) << endl;
	cout << "Highest grade: " << maximum( studentGrade, student , exam ) << endl;
	for(int i=0;i<3;i++){
		cout << "The avarage grade for student " << i << "is "<< average(studentGrade[i],exam)<< endl;
	}
	
	
}
int minimum(int studentGrade[student][exam], int student , int exam ){
	int hold = 999;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(hold > studentGrade[i][j])
				hold = studentGrade[i][j];
		}
	}
	
return hold;
}
int maximum(int studentGrade[student][exam], int student , int exam ){
	int hold = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(hold < studentGrade[i][j])
				hold = studentGrade[i][j];
		}
	}
	
return hold;
}
double average(int studentGrade[],int exam){
	float sum,ave;
	sum = studentGrade[0]+studentGrade[1]+studentGrade[2]+studentGrade[3];
	ave = sum/4;
	return ave;
	
}
