#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>
#include "strvar.h"

using namespace std;

namespace strvarken
{
	StringVar::StringVar(int size) : max_length(size)
	{
		value = new char[max_length + 1];
		value[0] = '\0';
	}

	StringVar::StringVar() : max_length(100)
	{
		value = new char[max_length + 1];
		value[0] = '\0';
	}
	StringVar::StringVar(const char a[]) : max_length(strlen(a))
	{
		value = new char[max_length + 1];

		for (int i = 0; i < strlen(a); i++)
		{
			value[i] = a[i];
		}
		value[strlen(a)] = '\0';
	}

	StringVar::StringVar(const StringVar& string_object) : max_length(string_object.length())
	{
		value = new char[max_length + 1];
		for (int i = 0; i < strlen(string_object.value); i++)
		{
			value[i] = string_object.value[i];
		}
		value[strlen(string_object.value)] = '\0';
	}

	StringVar::~StringVar()
	{
		delete[] value;
	}

	int StringVar::length() const
	{
		return strlen(value);
	}

	void StringVar::input_line(istream& ins)
	{
		ins.getline(value, max_length + 1);
	}

	ostream& operator << (ostream& outs, const StringVar& the_string)
	{
		outs << the_string.value;
		return outs;
	}

	istream& operator >> (istream& ins, const StringVar& the_string)
	{
		ins >> the_string.value;
		return ins;
	}

	char StringVar::one_char(int location)
	{
		return value[location - 1];
	}

	void StringVar::set_char(int location, char change)
	{
		value[location - 1] = change;
	}

	void StringVar::copy_piece(int location, int amount)
	{
		for (int i = location - 1; i < amount + location - 1; i++) {
			cout << value[i];
		}
	}

	void operator+(StringVar your_name, StringVar cin)
	{
		cout << "Your name + cin = " << your_name << cin << endl;
	}


	bool operator==(StringVar your_name, StringVar cin)
	{
		if (your_name.max_length == cin.max_length) {
			for (int i = 0; i < your_name.max_length; i++) {
				if (your_name.value[i] != cin.value[i]) {
					return false;
				}
			}
			return true;
		}
		else {
			return false;
		}
	}


}