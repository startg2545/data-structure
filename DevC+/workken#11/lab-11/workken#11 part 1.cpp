#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
template<class T>
void swap_values(T& variable1, T& variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}
template<class T>
int index_of_smallest(const T a[], int start_index, int number_used)
{
	T min = a[start_index];
	int index_of_min = start_index;
	for (int index = start_index + 1; index < number_used; index++)
	if (a[index] < min)
	{
		min = a[index];
		index_of_min = index;
	}
	return index_of_min;
}
template<class T>
void sort(T a[], int number_used)
{
	int index_of_next_smallest;
	for (int index = 0; index < number_used - 1; index++)
	{
		index_of_next_smallest = index_of_smallest(a, index, number_used);
		swap_values(a[index], a[index_of_next_smallest]);
	}
}
int main(){
	srand(time(0));
	int choose;
	const int max=10;
	cout << "integer[1] | character[2] "<<endl;
	cin >> choose;
	if(choose==1){
		int a[max],m;
		cout << "Integer : ";
		for(int i=0;i<10;i++){
			m = rand() % 10 ;
			a[i] = m;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Sort    : ";
		sort(a,max);
		for(int i=0;i<10;i++){
			cout << a[i] << " ";
		}
	}else if(choose==2){
		char a[max],m;
		cout << "Character : ";
		for(int i=0;i<10;i++){
			m = rand() % 26 + 97;
			a[i] = m;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Sort      : ";
		sort(a,max);
		for(int i=0;i<10;i++){
			cout << a[i] << " ";
		}
	}else{
		cout <<"Something wrong !";
	}
}

