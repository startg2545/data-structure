#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<cmath>

using namespace std;

int calculate_num();
int calculate_sum(int [], int );
int calculate_high(int [], int );
int calculate_low(int [], int );
int calculate_mean(int , int );
int calculate_median(int [], int );
int calculate_mode(int [], int );

int main(){
	vector<int> stor(150);
	int num, sum ,high ,low, mean, median, mode;
	srand(time(0));
	num = rand() % 100 + 50 ;
	cout << "The number of elements : " << num << endl ;
	for(int i=0;i<num;i++){
		stor[i] = rand() % 101 ;
	}
	for(int i=0;i<num;i++){
		sum += stor[i];
	}
	cout << "The sum of elements : " << sum << endl ;
	int hold, swap ;
	do{	
		swap = 0;
		for(int i=0; i<num-1; i++){
			if(stor[i]>stor[i+1]){
				hold = stor[i];
				stor[i] = stor[i+1];
				stor[i+1] = hold;
				swap = 1 ; //set swap flag
			}
			
		}
	}while(swap==1);
	high = stor[num-1];
	cout << "The highest value : " << high << endl ;
	
	do{
		swap = 0;
		for(int i=0; i<num-1; i++){
			if(stor[i]>stor[i+1]){
				hold = stor[i];
				stor[i] = stor[i+1];
				stor[i+1] = hold;
				swap = 1 ; //set swap flag
			}
			
		}
	}while(swap==1);
	low= stor[0];
	cout << "The lowest value : " << low << endl ;
	
	mean = sum / num;
	cout << "The mean value : " << mean << endl ;
	
	
	int x ;
	x = ( num + 1 ) / 2;
	median = stor[x];
	cout << "The median value : " << median << endl ;
	int frequency[101] = {};
	for(int i=0;i<num;i++){
		frequency[stor[i]]++;
	}
	do{
		swap = 0;
		for(int i=0; i<101; i++){
			if(frequency[i]>frequency[i+1]){
				hold = frequency[i];
				frequency[i] = frequency[i+1];
				frequency[i+1] = hold;
				swap = 1 ; //set swap flag
			}
		}
	}while(swap==1);
	cout << "The mode value : " << frequency[100] << " , " << frequency[99]  << endl ;
	float sd,sd1,full,full1,fullx;
	for(int i=0;i<num;i++){
	full = stor[i] - mean ;
	full1 = pow(full,2);
	fullx += full1;
	}
	sd1 = fullx / 100;
	sd = sqrt(sd1);
	cout << "The standard devision : " <<  sd << endl ;
	int even , odd;
	for(int i=0;i<num;i++){
		if(stor[i]%2==0){
			even++;
		}
	}
	odd = num - even;
	cout << "The number of even numbers : " << even << endl ;
	
	cout << "The number of odd numbers : " << odd << endl ;
	
	
	cout << "The value output in order from lowest to highest : " ;
	for(int i=0;i<num;i++){
		if(i%10==0){
			cout << endl ;
		}
		cout << stor[i] << " ";
	}
}
int calculate_mode(int stor[], int num){
	int frequency[101] = {},hold,swap;
	for(int i=0;i<num;i++){
		frequency[stor[i]]++;
	}
	do{
		swap = 0;
		for(int i=0; i<101; i++){
			if(frequency[i]>frequency[i+1]){
				hold = frequency[i];
				frequency[i] = frequency[i+1];
				frequency[i+1] = hold;
				swap = 1 ; //set swap flag
			}
		}
	}while(swap==1);
	return frequency[30] ;
}

int calculate_median(int stor[], int num){
	int median ,x ;
	x = ( num + 1 ) / 2;
	median = stor[x];
	
	return median ;
}


int calculate_mean(int sum,int num){
	int mean ;
	mean = sum / num;
	
	return mean ;
}

int calculate_high(int a[],int a_size){
	int hold , high, swap ;
	do{	
		swap = 0;
		for(int i=0; i<a_size-1; i++){
			if(a[i]>a[i+1]){
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				swap = 1 ; //set swap flag
			}
			
		}
	}while(swap==1);
	high = a[a_size-1];
	return high ;
}
int calculate_low(int a[],int a_size){
	int hold ,low , swap ;
	do{
		swap = 0;
		for(int i=0; i<a_size-1; i++){
			if(a[i]>a[i+1]){
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				swap = 1 ; //set swap flag
			}
			
		}
	}while(swap==1);
	low= a[0];
	return low;
}

int calculate_sum(int stor[], int num){
	int sum = 0;
	for(int i=0;i<num;i++){
		sum += stor[i];
	}
	
	return sum ;
}
