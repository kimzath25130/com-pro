#include <iostream>
#include <string>
using namespace std;
std::string Stadlnfo(string &MN,string &Name);
int Register();
int calGrade();
int report();

int main(){
	int menu;
	string s1,s2;
	do{
		cout << " Program Calgrade " << endl;
		cout << " Enter Menu [0 - 4] : ";
		cin >> menu;
	switch(menu){
	case 1:
		Stadlnfo(s1,s2);
		break;
	case 2:
		Register();
		break;
	case 3:
		calGrade();
		break;
	case 4:
		report();
		break;
	case 0:
		cout << " End of Program " << endl;
		break;
	default:
		cout << " pls select Menu [0 - 4] !! " << endl;
		break;
	}
	}
	while(menu != 0);
	return(0);
}

std::string Stadlnfo(string &MN,string &Name){
	cout << " Member number : ";
	cin >> MN;
	cout << " Name : ";
	cin >> Name;
	return (MN,Name);
}

int Register(){
	int NS,i;
	cout << " Number of subjects : ";
	cin >> NS;
	int C['NS'],NumS['NS'];
	string NameS['NS'];
	for(i = 0 ; i < NS ; i++){
		cout << "=======================" << endl;
		cout << "Course code : ";
		cin >> NumS[i];
		cout << "Name of subjeck : ";
		cin >> NameS[i];
		cout << "Credit of subjeck : ";
		cin >> C[i];
	}
	return (0);
}

int calGrade(){
	return (0);
}

int report(){
	return (0);
}