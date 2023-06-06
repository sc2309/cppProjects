#include <iostream>
using namespace std;

int company_packs(){
	
	
	return 0;
}

int main(){
    int pack[4] = {1000,5000,10000,50000};
    int money;
    string choise;
    
    
	using names = string;
	names c1 = "Wipro";
	names c2 = "TATA";
	names c3 = "Bitcoin";
	names c4 = "Gold";
	names c5 = "Platinum";
	names c6 = "Diamond";
	cout << "This is the app for investing money." << endl << "Please tell us about which company or material would you like to invest" << endl;
	cout << "The places to invest are " << c1 << endl << c2 << endl << c3 << endl << c4 << endl << c5 << endl << c6 << endl;  
	cin >> choise;
	
	
	
	if(choise==c1){
    cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;                                         //  WIPRO
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 shares. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 shares. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 shares. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 250 shares. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
    }
    
    
    
    else if(choise==c2){
    	cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                                 // TATA
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 1 shares. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 5 shares. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 10 shares. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 50 shares. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c3){
		cout << "The packages made by company are " << endl;                          // Bitcoin
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 bitcoins. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 bitcoins. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 bitcoins. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 250 bitcoins. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c4){
		cout << "The packages made by company are " << endl;                               // Gold
	for(int i=0;i<4;i++){
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5.6g gold. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 26.2g gold. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 52.4g gold. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 254.8g gold. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c5){
		cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                                     // Platinum
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 5 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 25 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 50 nuggets of platinum. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 100 nuggets of platinum. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else if(choise==c6){
		cout << "The packages made by company are " << endl;
	for(int i=0;i<4;i++){                                                              // DIAMOND
		cout << pack[i] << endl;
	}
	cin >> money;
	if(money==1000){
		cout << "You have successfully buyed 1 piece of diamond. THANK YOU. " << endl;
	}
	else if(money==5000){
		cout << "You have successfully buyed 5 pieces of diamond. THANK YOU. " << endl;
	}
	else if(money==10000){
		cout << "You have successfully buyed 10 pieces of diamond. THANK YOU. " << endl;
	}
	else if(money==50000){
		cout << "You have successfully buyed 15 pieces of diamond. THANK YOU. " << endl;
	}
	else{
		cout << "Please buy according to the company packages. inappropriate amount. " << endl;
	}
	}
	
	
	
	else{
		cout << "Error with you choise.";
	}
	
	
	
	
	return 0;
}


