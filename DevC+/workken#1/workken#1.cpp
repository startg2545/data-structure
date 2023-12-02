
#include<iostream>
#include<iomanip>

using namespace std;

void bubblesort(float [], float);
int main(){
	float stuff,want,leng,wid,wei,day,price,discount,save,check=0,decide,hold;
//	float surface[1000] = {};
	float length[1000] = {};
	float width[1000] = {};
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
	if(stuff>2||stuff<1){
		cout << "**Something wrong :P" << endl ;
		return 0;
	}
	cout << "Salesperson : Good job! my shop have Manga and News. you can walk around bookshelves to decide." << endl;
	cout << "You         : I need to read ... Manga[1] News[2]" << endl;
	cin >> stuff ;
	if(stuff==2){
		cout << "Salesperson : alright You probably care about politics. " << endl;
	}else if(stuff==1){
		cout << "Salesperson : alright manga I love that. " << endl;
	}else{
		cout << "**Something wrong :P" << endl ;
		return 0;
	}
	cout << "              How many do you need." << endl;
	cout << "You         : I need ... " ;
	cin >> want ;
	if(want<0){
		cout << "**Something wrong :P" << endl ;
		return 0;
	}else if(want==0){
		cout << "Salesperson : Don't buy book? Then Get out ! ! !";
		return 0;
	}
	cout << " >> Ruler Calculating << " << endl ;
	for(int i=0;i<want;i++){
	cout << "book " << i+1 << " | weight[grams] " ;
	cin >> wei;
	weight[i] = wei;
	cout << "       | length[inches] ";
	cin >> leng;
	length[i] = leng;
	cout << "       | width[inches] ";
	cin >> wid;
	width[i] = wid;
	cout << "       | stock have over ";
	cin >> day;
	if(day>10){
		discount = day;
	}if(day>30){
		discount = day*2;
	}
	wei = wei / 253.59 ;
	leng = leng * 2.54 ;
	wid = wid * 2.54 ;
	price = wei*leng*wid*10 - discount;
	cout << "  price is " << price << endl;
	prices[i] = price;
	}
	for(int i=0;i<want;i++){
		save = save + prices[i] ;
	}


	cout << "Salesperson : Now you must pay " << save << " bath." << endl;
	cout << "              Are you a member?" << endl;
	cout << "You         : Yes, I am [1]. No, I am not [2]." << endl;
	cin >> stuff;
	if(stuff==1){
		if(want>2){
		cout << "Salesperson : We have discount 20% on the cheapest book for you.\n              Becouse you purchase 3 or more books." << endl;
		cout << "You         : NICE :D" << endl;
	bubblesort( prices, want);
	check = prices[0] * 20 / 100 ;
	save = save - check ;

		cout << "Salesperson : You have discount " << check << " Bath." << endl ;
		save = save - check;
		cout << "              Now you only pay " << save << " bath!" << endl ;
	}

	}else if(stuff==2){
		cout << "Salesperson : We have discount 20% on the cheapest book for you.\n              But you don't purchase 3 or more books.\n              you are don't receive D:" << endl ;
	}else{
		cout << "**Something wrong :P" << endl ;
	}
	cout << "Salesperson : OK pay me." << endl;
	cout << "You : I will ... Pay money [1]. Not pay money [2]." << endl;
	cin >> decide ;
	if(decide==1){
		cout << " >> You paid ! << " << endl ;
		cout << "Salesperson : Thank you ^_^ ! " << endl ;
	}else if(decide==2){
		cout << "Salesperson : SHUT UP!" << endl;
	}else {
		cout << "**Something wrong :P" << endl;
	}

	return 0;
}

void bubblesort(float x[], float y){
	float swap, hold;
	do{
		swap=0;
		for(int i=0; i<y-1; i++){
			if(x[i]>x[i+1]){
				hold = x[i];
				x[i] = x[i+1];
				x[i+1] = hold;
				swap = 1 ; //set swap flag
			}
		}
	}while(swap==1);
}
