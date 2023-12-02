#include<iostream>
using namespace std;
int main(){
	Point cat;
	
}
public class Point{
	private int x;
	private int y;
	public Point(){
    this.x = this.y = 0;
  }
  
  public Point(int x, int y){
    // TODO: Lab03_1
    this.x = x;
    this.y = y;
  }
  
  public int getX() {
    // FIXME: Lab03_
    return x; 
  }
  
  public int getY() {
    // FIXME: Lab03_1
    return y;
  }

  public String toString(){
    // FIXME: Lab03_3
    
    return "(" + this.x + ", " + this.y + ")";
  }
}
