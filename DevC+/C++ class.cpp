#include <iostream>
using namespace std;

class rectangle
{
public:
	rectangle();//Constructors
	rectangle(int newwidth);
	rectangle(int newwidth, int newheight);
	int getwidth(); //Accessors
	int getheight();
	void setwidth(int newwidth);//Mutators
	void setheight(int newheight);
	void display();
	bool equal(rectangle r2);
	friend bool operator ==(rectangle r1, rectangle r2);
	friend rectangle operator +(rectangle r1, rectangle r2);
private:
	int width;
	int height;
};

bool compare(rectangle r1, rectangle r2);


int main()
{
	rectangle r1(7,3);
	rectangle r2(7,3);

	rectangle r3 = r1 + 5;
	r3.display();


	

}
rectangle::rectangle()
{
	width = 1;
	height = 1;
}
rectangle::rectangle(int newwidth)
{
	width = newwidth;
	height = 1;
}
rectangle::rectangle(int newwidth, int newheight)
{
	width = newwidth;
	height = newheight;
}
int rectangle::getwidth()
{
	return width;
}
int rectangle::getheight()
{
	return height;
}
void rectangle::setwidth(int newwidth)
{
	width = newwidth;
}
void rectangle::setheight(int new

