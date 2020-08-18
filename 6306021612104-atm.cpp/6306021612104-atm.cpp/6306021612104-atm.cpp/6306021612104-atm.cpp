#include <iostream>
#include <string>
using namespace std;
int main(){
	int menu,money,moneyPlus,moneyMinus,sum;
	do{
		cout << " menu ATM" << endl;
		cout << "1.Register " << endl;
		cout << "2.Deposite " << endl;
		cout << "3.Withdraw " << endl;;
		cout << "0.Exit " << endl;;
		cout <<"Enter Meun : " ;
		cin>>menu;
	switch(menu){
		case 1 :
			cout << "Enter Register : ";
			cin >> money;
			cout << (sum = money) << " Bath" << endl;
			cout << "***********"<<endl;
			break;

		case 2 :
			cout << "Enter Deposite : ";
			cin >> moneyPlus;
			cout << (sum =  sum + moneyPlus) << " Bath" << endl;
			cout << "***********"<<endl;
			break;
		
		case 3 :
			cout << "Enter Withdraw : ";
			cin >> moneyMinus;
			cout << ((sum > moneyMinus)?"":"eror!!!!!!");
			cout << (sum = sum - moneyMinus) << " Bath" << endl;
			cout << "***********"<<endl;
			break;
		
		case 0 :
			cout << "Exit Program" << endl;
			break;
		
		default :
			cout << "Pls 1,2,3,0"<< endl;
			cout << "***********"<<endl;
	      }
	}while (menu !=0);
}