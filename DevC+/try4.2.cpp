#include<iostream>
using namespace std;
void sort(int A[], int N) 
   { 
      int i, j, Increment, Tmp; 
      for (Increment = N/2; Increment > 0; Increment /=2) 
{
         for (i=Increment; i<N; i++) 
         {
            Tmp = A[i]; 
for ( j=i;  j>=Increment; j -= Increment){
   	if(Tmp < A[j-Increment]) 
	{
	  	A[j] = A[j-Increment]; 
   	}else{
      	break;
  	}
}		A[j] = Tmp;
        }for(int x=0;x<N;x++){
		cout << A[x]<< " "  ;
	} cout << endl;  
      }
   }

int main(){
	const int N=16;
	int A[N]={5, 9, 2, 15, 23, 8, 41, 3, 99, 62, 12, 6, 10, 13, 1, 82};
	for(int i=0;i<N;i++){
		cout << A[i]<< " "  ;
	} cout << endl;
	sort(A,N);
}
