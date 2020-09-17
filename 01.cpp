#include <iostream>
using namespace std;
void multi(int x , int y);
void plus(int x , int y);
void minus(int x , int y);
void divide(int x , int y);

void display(int x , int y){
	plus(x,y);
	minus(x,y);
	multi(x,y);
	divide(x,y);
	
}

int main(){
	int result,x = 100 , y = 20;
	display(x,y);
	return (0);
}

void multi(int x, int y){
	int sum = x * y ;
	cout << " multi = " << sum << endl;
}

void plus(int x, int y){
	int sum = x + y ;
	cout << " Plus = " << sum << endl;
}

void minus(int x , int y){
	int sum = x - y ;
	cout << " Minus = " << sum << endl;
}

void divide(int x , int y){
	int sum = x / y ;
	cout << " divide = " << sum << endl;
}