#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int MyNum,RanNum,i;
	char A,Y = 2,N = 3 ;

	srand(time(NULL));

	RanNum = int(rand() % 10);
	for (i = 1 ; i <=10 ; i++){
	do{
	do{
		cout<<"Input Mynum "<< i++ <<" : ";
		cin >> MyNum;

		if(RanNum == MyNum){
			cout << "RanNum = " << RanNum << endl;
			cout << "Congeratulation" << " in " << (i++)-1 << " Times "<< endl;
		}
		else if(RanNum > MyNum){
			cout << "MyNum incorrect !!" << endl;
			cout << "MyNum is less" << endl;
		}
		else if(RanNum < MyNum){
			cout << "MyNum incorrect !!" << endl;
			cout << "MyNUm is More" << endl;
		}

	}while(MyNum != RanNum);
	cout << "you want to play again Y/N : ";
	cin >> A;
	}while(A==N);
	cout << "End Game" << endl;
		


	//cout<< "RanNum = " <<RanNum << endl;
	/*
	if(RanNum > MyNum){
		cout << "RanNum > MyNum = ";
		cout << RanNum - MyNum << endl;
	}else if (RanNum < MyNum){
		cout << "RanNum < MyNum = ";
		cout << RanNum - MyNum << endl;
	}else{
		cout << "RanNum = MyNum" << endl; 
	}*/
	}
	return 0;
}