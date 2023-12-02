#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void show(list<int> number){
	list<int>::iterator move;
	for(move = number.begin(); move !=number.end(); move++ ){
	    cout << "Winnning:  ";
		cout << *move;
	}
	cout << endl;
}

int main(){
	
	list<int> number;
	list<int>::iterator move,bin,num;
	list<int>::iterator tem;
	
	int n,m ;
	int c;
	
	cout << endl;
	cout << " ----- Hot Potato Game ----- "<< endl;
	cout << endl;
	cout << " People number 1 to ";
	cin >> n;
	cout << " People move : ";
	cin >> m;
	
	for(int i = 1;i <= n;i++){
		number.push_back(i);	
	}
	
	move = number.begin();
	
	c = n;
	while(c != 1){
		//cout<<*move<<endl;
		for(int i = 1; i <= m; i++){
			if(move == number.end()){
				move = number.begin();
			}
		//	cout<<*move<<endl;
			move++;
			if(move == number.end()){
				move = number.begin();
			}
		//	cout<<*move<<endl;
		}
		cout<<"|"<<*move<<"|"<<endl;
		tem = move;
		tem++;
		cout << *move <<" ";
		number.remove(*move);
		move = tem;	
		c--;
	}
	show(number); // show on display 
	
	return 0;
}
