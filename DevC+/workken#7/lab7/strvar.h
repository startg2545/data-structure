#ifndef STRVAR_H
#define STRVAR_H
#include <iostream>
using namespace std;
namespace strvarken
{
	class StringVar
	{
	public:
		StringVar(int size);
		
		StringVar();
		
		StringVar(const char a[]);
		
		StringVar(const StringVar& string_object);
		
		~StringVar();
		
		int length() const;
		
		void input_line(istream& ins);
		
		friend ostream& operator <<(ostream& outs, const StringVar& the_string);
		
		friend istream& operator >>(istream& ins, const StringVar& the_string);
		
		char one_char(int location);
		void set_char(int location, char change);
		void copy_piece(int location, int amount);
		friend void operator+(StringVar your_name, StringVar cin);
		friend bool operator==(StringVar your_name, StringVar cin);

	private:
		char* value; 
		int max_length; 
	};
}
#endif
cout << "Enter the number = ";
cin >> number;
cout << "Letter is: " << your_name.one_char(number) << endl;

cout << "Enter thte location = ";
cin >> number;
cout << "Letter you want to change : ";
cin >> change;
your_name.set_char(number, change);
cout << your_name << endl;

cout << "Enter location you want to start : ";
cin >> number;
cout << "Amount of characters : ";
cin >> amount;
your_name.copy_piece(number, amount);
cout << endl;



cout << "Enter to test cin : ";
cin >> testcin;
cout << "Test cin : " << testcin << endl;

your_name + testcin;
if (your_name == testcin) {
	cout << "Equal" << endl;
}
else {
	cout << "Not equal" << endl;
}