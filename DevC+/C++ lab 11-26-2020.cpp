#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int stuff,want,sur,wei,day,discount,save,price;
	float surface[1000] = {};
	float weight[1000] = {};
	float prices[1000] = {};
	
	cout << "Salesperson : Hi I'm Hisako. what do you want?" << endl;
	cout << "You         : I want ...";
	cout << "  Book[1] Candy[2]" << endl;
	cin >> stuff ;
	if(stuff==2){
		cout << "SHUT UP. Get out ! ! ! ";
		return 0;
	}
	cout << "Salesperson : Good job! my shop have Manga and News. you can walk around bookshelves to decide." << endl;
	cout << "You         : I need to read ... Manga[1] News[2]" << endl;
	cin >> stuff ;
	if(stuff==2){
		cout << "Salesperson : alright You probably care about politics. " << endl;
	}else if(stuff==1){
		cout << "Salesperson : alright manga I love that. " << endl;
	}
	cout << "How many do you need." << endl;
	cout << "You         : I need ... " ;
	cin >> want ;
	for(int i=0;i<want;i++){
	cout << "book " << i+1 << " | weight " ;
	cin >> wei;
	weight[i] = wei;
	cout << "       | surface area ";
	cin >> sur;
	surface[i] = sur;
	cout << "       | stock have over ";
	cin >> day;
	if(day>10){
		discount = day;
	}if(day>30){
		discount = day*2;
	}
	price = wei*sur*10 - discount;
	cout << "  price is " << price << endl;
	prices[i] = price;
	}
	cout << "Salesperson : Now you must pay " << save << " bath." << endl;
	cout << "              Are you a member?" << endl;
	cout << "You         : Yes, I am." << endl;
	cout << "Salesperson : If you are member. We have discount for members.\n              the condition is 1 Baht per day it has been in stock over 10 days.\n              and 2 Baht per day it has been in stock over 30 days." << endl;
	cout << "You         : How long day in stock?" << endl;
	cout << "Salesperson : ... ";
	cin >> day;
	if(day>10){
		discount = day;
	}if(day>30){
		discount = day*2;
	}

	cout << "You : Thank you ^_^ ! ";
	cout << "Salesperson : Wait. I wanna give another discount is discount of cheapest book 20%!";
	if(want>2){
		for(int i=1;i<want;i++){
			if(prices[i]>prices[i-1]){
				save = prices[i];
			}
		}
	}	
	cout << save;
	
	return 0;
}
