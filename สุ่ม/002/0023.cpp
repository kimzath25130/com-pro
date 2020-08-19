#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int main(void){
	srand (time(NULL));
	for(int i = 1 ; i <= 10; i++){
		cout << "Time"<<i<<".="<<rand() <<endl;
	}
}