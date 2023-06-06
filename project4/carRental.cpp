#include <iostream>
using namespace std;


int main(){
    string uc,nam,country,state;
	using cars = string;
	cars a1 = "BMW";
	cars a2 = "mahindra";
	cars a3 = "maruti_suzuki";
	cars a4 = "mercedes";
	cars a5 = "renault";
	cars a6 = "TATA";
	cars a7 = "toyota";
	cout << "please enter your name." << endl;
	cin >> name;
	cout << "welcome " << name << " we can help you by renting a vechile. Please select your country" << endl;
	cin >> country;
	cout << "OK your'e of " << country << endl << "Please tell us state." << endl;
	cin >> state;
	cout << "Now you can choose the company of which you want veichile." << endl << "the companies are " << a1 << " on an average for Rs 80,040 for a day" << endl;
	cout << a2 << " on an average Rs 60,000 for a day" << endl;
	cout << a3 << " on an  average Rs 65,000 for a day" << endl;
	

     return 0;
}