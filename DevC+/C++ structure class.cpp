#include <iostream>
using namespace std;

class date
{
public:
	void setday(int newday); // MUTATOR
	void setmonth(int newmonth);
	void setyear(int newyear);
	int getday(); //ACCESSOR
	int getmonth();
	int getyear();

	void output(); //OUTPUTS
	void usoutput();
	void thoutput();
private:
	int day;
	int month;
	int year;
};



int main()
{
	date today;
	today.setday(5);
	today.setmonth(1);
	today.setyear(2021);
	


	today.thoutput();


}

void date::setday(int newday)
{
	day = newday;
}
void date::setmonth(int newmonth)
{
	month = newmonth;
}
void date::setyear(int newyear)
{
	year = newyear;
}
int date::getday()
{
	return day;
}
int date::getmonth()
{
	return month;
}
int date::getyear()
{
	return year;
}

void date::output() 
{ 
	cout << day << "/" << month << "/" << year; 
}
void date::usoutput()
{
	cout << month << "/" << day << "/" << year;
}
void date::thoutput()
{
	cout << day << "/" << month << "/" << year + 543;
}

