#include <iostream>
#include <cmath>
using namespace std;

char oper;
double c,d;

void operation(){
	cout << "Please enter the operation which you want to perform in this calculator between two numbers." << endl;
	cout << "+" << endl << "-" << endl << "/" << endl << "@ for square root" << endl  << "*" << endl << "Enter the operator for the operation you want to perform" << endl;
	cin >> oper;
	switch(oper){
		
		
		case '+':
			cout << "Please enter two numbers for addition." << endl;
			cin >> c;
			cout << endl;                                                                                     //   ADDITION
			cin >> d;
			cout << "The sum of " << c << " and " << d << " is " <<  c + d << endl << "Thank You For Using.";
			break;
			
			
		case '-':
			cout << "Please enter two numbers for subtraction." << endl;
			cin >> c;
			cout << endl;                                                                                     //   SUBTRACTION
			cin >> d;
			cout << "The difference of " << c << " and " << d << " is " <<  c - d << endl << "Thank You For Using.";
			break;
			
			
		case '/':
			cout << "Please enter two numbers for division." << endl;
			cin >> c;
			cout << endl;                                                                                     //   DIVISION
			cin >> d;
			cout << "The quotient of " << c << " and " << d << " is " <<  c/d << endl << "Thank You For Using.";
			break;
			
			
		case '*':
			cout << "Please enter two numbers for multiplication." << endl;
			cin >> c;
			cout << endl;                                                                                     //   MULTIPLICATION
			cin >> d;
			cout << "The product of " << c << " and " << d << " is " <<  c*d << endl << "Thank You For Using.";
			break;
			
		
		case '@':
			cout << "Please enter number to find square root." << endl;
			cin >> c;
			cout << endl;                                                                                     //   SQUARE ROOT
			cout << "The square root of " << c << " is " <<  sqrt(c) << endl << "Thank You For Using.";
			break;
			
		default:
			cout << "Unknown operation.";
			
	}
	
	int main();
}

int main(){
	cout << endl;
	operation();
	
	return 0;
}
