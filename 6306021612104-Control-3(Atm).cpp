#include<iostream>
using namespace std;
int sum1,sum2;
int ID1,ID2,ID_1;
int add,dec;
float Transfer();
float regis();
float depo();
float withd();
float show();
int main(){
	int Menu;
	do{
		cout<<"Net Banking / ATM"<<endl;
	    cout<<"1.Register"<<endl;
	    cout<<"2.Deposite"<<endl;
		cout<<"3.Withdraw"<<endl;
		cout<<"4.ShowBalance"<<endl;
		cout<<"5.Transfer"<<endl;
	    cout<<"0.Exit"<<endl;
	    cout<<"Enter Menu : ";
	    cin>>Menu;

	switch(Menu){
	case 1 :
		cout<<"Register"<<endl;
		regis();
		break;
	case 2 :
		cout<<"Deposite"<<endl;
		depo();
		break;
	case 3 :
		cout<<"Withdraw"<<endl;
		withd();
		break;
	case 4 :
		show();
		break;
	case 5 :
		Transfer();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input 1,2,3,4,5,0"<<endl;
		break;}
	}
	while(Menu!=0);
	return(0);
}

float regis(){
	cout<<"Enter Your Account 1 ID : ";
	cin>>ID1;
	cout<<"Enter Your Account 1 Opening Balance : ";
	cin>>sum1;
	cout<<"Enter Your Account 2 ID : ";
	cin>>ID2;
	cout<<"Enter Your Account 2 Opening Balance : ";
	cin>>sum2;
	cout<<"Your account 1 Total Balance : "<<sum1<<endl;
	cout<<"Your account 2 Total Balance : "<<sum2<<endl;
	return(sum1,sum2);
}

float depo(){
	int add;
	cout<<"Enter your ID number : ";
	cin>>ID_1;
	if(ID_1==ID1){
		cout<<"Enter Your Deposite Money : ";
		cin>>add;
		cout<<"Your Total Balance : "<<sum1+add<<endl;
		sum1=sum1+add;
	}
	else if(ID_1==ID2){
		cout<<"Enter Your Deposite Money : ";
		cin>>add;
		cout<<"Your Total Balance : "<<sum2+add<<endl;
		sum2=sum2+add;
	}
	else
		cout<<"ID not found "<<endl;
	return(0);
}

float withd(){
	int dec;
	cout<<"Enter your ID number : ";
	cin>>ID_1;
	if(ID_1==ID1){
		cout<<"Enter Your Withdraw Money : ";
		cin>>dec;
	if(sum1>=dec){
		cout<<"Your Total Balance : "<<sum1-dec<<endl;
		sum1=sum1-dec;
	}
	else{
		cout<<"Your don't have enough balance to withdraw"<<endl;
	}
	}
	else if(ID_1==ID2){
		cout<<"Enter Your Withdraw Money : ";
		cin>>dec;
	if(sum2>=dec){
		cout<<"Your Total Balance : "<<sum2-dec<<endl;
		sum2=sum2-dec;
	}
	else{
		cout<<"Your don't have enough balance to withdraw"<<endl;
	}
	}
	else
		cout<<"ID not found"<<endl;
	return(0);
}

float show(){
	cout<<"Show Balance All Account"<<endl;
	cout<<"Your account 1 total balance : "<<sum1<<endl;
	cout<<"Your account 2 total balance : "<<sum2<<endl;
	return(sum1,sum2);
}

float Transfer(){
	int Transfer;
	cout << "Enter your ID : ";
	cin >> ID_1;
	if (ID_1 == ID1){
		cout << "Enter Transfer : ";
		cin >> Transfer;
	if (sum1 >= Transfer){
		cout << "Your account 1 total balance : " << sum1-Transfer << endl;
		sum1 = sum1-Transfer;
		cout << "Your account 2 total balance : " << sum2+Transfer << endl;
		sum2 = sum2+Transfer;
	}
	else {
		cout<<"Your don't have enough balance to withdraw"<<endl;
	}
	}
	else if(ID_1 == ID2){
		cout << "Enter Transfer : ";
		cin >> Transfer;
	if (sum2 >= Transfer){
		cout << "Your account 1 total balance : " << sum1+Transfer << endl;
		cout << "Your account 2 total balance : " << sum2-Transfer << endl;
		sum1 = sum1+Transfer;
		sum2 = sum2-Transfer;
	}
	else {
		cout<<"Your don't have enough balance to withdraw"<<endl;
	}
	}
	else cout << "ID not found" << endl;
	return(0);
}