#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
	int uch,cch = rand()%2;
	cout << "Welcome to rock paper scissor." << endl;
	cout << "type" << endl << "0 for rock \n" << "1 for paper \n" << "2 for scissor \n";
	cin >> uch;
	srand(time(NULL));
	if(uch == cch){
		cout << "Computer choosed " << uch << " . it is a draw." << endl;
	}
	else if(uch < cch){
		
	}
	
}
