#include <iostream>
#include <string>
using namespace std;
float areaRect(int width,int length);
float areaCircle(int radius);
int main (void){
	int menu,width,length,radius;
	do{
		cout << "1.Rectangle\n";
		cout << "2.Circle\n";
		cout << "0.Exit Program\n";
		cout << "Enter Menu : ";
		cin >> menu;
	
	switch(menu){
	case 1 :
		cout << "Area of Rectagle " <<endl;
		cout << "Enter width : ";
		cin >> width;
		cout << "Enter length : ";
		cin >> length;
		cout << "Area : " <<areaRect(width,length)<<endl;
		break;
	case 2 :
		cout << "Area of Circle" << endl;
		cout << "Enter Radius : ";
		cin >> radius;
		cout << "Area : " <<areaCircle(radius)<<endl;
		break;
	case 0 :
		cout << "Exit Programe" << endl;
		break;
	default :
		cout << "PLs Input 0,1,2"<< endl;
		break;
	}
	}while (menu !=0); 
}
float areaRect(int f_width,int f_length){
	int f_area = f_width * f_length;
	return(f_area);
}
float areaCircle(int f_radius,int r_area){
	float Pi = 3.14,f_radius,r_area;
	int r_area = Pi * f_radius * f_radius;
	return(r_area);
}