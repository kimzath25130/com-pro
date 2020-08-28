#include <iostream>

#include <time.h>

using namespace std;

int main(){
	int MyNum,RanNum;
	int Score = 100;
	int i = 1;
	char A;

	do{
		srand(time(NULL));
		RanNum = int(100 + rand() % 401);
		int Score = 100;
		i = 1;
		cout << "___Game Start___" << endl;

	do{
		cout<<"Input Mynum "<< i++ <<" : ";
		cin >> MyNum;

		if(RanNum == MyNum){
			cout << "RanNum = " << RanNum << endl;
			cout << "Congeratulation" << " in " << (i++)-1 << " Times "<< endl;
			cout << "Score + 20 = " << Score + 20 << endl;
			Score = Score + 20;
			cout << "____________________________" << endl;
		}
		else if(RanNum > MyNum){
			cout << "MyNum incorrect !!" << endl;
			cout << "MyNum is less" << endl;
			cout << "MyNum is less : Score - 5 = " << Score - 5 << endl;
			Score = Score - 5;
			cout << "____________________________" << endl;
		}
		else if(RanNum < MyNum){
			cout << "MyNum incorrect !!" << endl;
			cout << "MyNUm is More" << endl;
			cout << "MyNum is More : Score - 5 = " << Score - 5 << endl;
			Score = Score - 5;
			cout << "____________________________" << endl;
		}
		if (Score <= 0){
			cout << "  answer : " << RanNum << endl;
			cout << "!! Game Over !!!" << endl;
			cout << "____________________________" << endl;
			MyNum = RanNum;
		}
	}
	while (MyNum != RanNum);
	do {
		cout << "you want to play again Enter Y/N : ";
		cin >> A;
		if (A ==*"Y"&&A ==*"N"){
			cout << "____________________________" << endl;
		}
			else if (A !=*"Y"&&A !=*"N"){
			cout << "Enter Y/N !!!" << endl;
			cout << "____________________________" << endl;
		}
	}
	while(A !=*"Y"&&A !=*"N");
	}
	while (A!=*"N",A==*"Y");
	cout << "___End Game___" << endl;
	return (0);
}