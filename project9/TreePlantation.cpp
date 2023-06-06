#include <iostream>
using namespace std;


int main(){
	int count,amou,ACNo;
	string treeChoise,adInfo,name;
	
	
	
	using tree = string;
	tree t1 = "mango_tree";
	tree t2 = "banana_tree";
	tree t3 = "olive_tree";
	tree t4 = "apple_tree";
	tree t5 = "grapes_tree";
	tree t6 = "banyan_tree";
	tree t7 = "bamboo_tree";
	tree t8 = "neem_tree";
	tree t9 = "amla_tree";
	tree t10 = "jamun_tree";
	
	cout  << "Welcome user please enter user name" << endl;
	cin >> name;
	cout << name << " please enter the type of tree you want" << endl << "us to plant.After the plant will grow 40 cm it will" << endl << " be handed over to you" << endl;
	cout << "Your choises are" << endl << t1 << endl << t2 << endl << t3 << endl << t4 << endl << t5 << endl << t6 << endl << t7 << endl << t8 << endl << t9 << endl << t10 << endl;
	cin >> treeChoise;
	if(treeChoise == t1){
		cout << "You have successfully choosen " << t1 << endl << "Amount to be paied for planting and taking care is Rs 95" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t1 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t2){
		cout << "You have successfully choosen " << t2 << endl << "Amount to be paied for planting and taking care is Rs 80" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t2 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t3){
		cout << "You have successfully choosen " << t3 << endl << "Amount to be paied for planting and taking care is Rs 100" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t3 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t4){
		cout << "You have successfully choosen " << t4 << endl << "Amount to be paied for planting and taking care is Rs 95" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t4 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t5){
		cout << "You have successfully choosen " << t5 << endl << "Amount to be paied for planting and taking care is Rs 85" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t5 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t6){
		cout << "You have successfully choosen " << t6 << endl << "Amount to be paied for planting and taking care is Rs 105" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t6 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t7){
		cout << "You have successfully choosen " << t7 << endl << "Amount to be paied for planting and taking care is Rs 60" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t7 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t8){
		cout << "You have successfully choosen " << t8 << endl << "Amount to be paied for planting and taking care is Rs 80" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t8 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t9){
		cout << "You have successfully choosen " << t9 << endl << "Amount to be paied for planting and taking care is Rs 85" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t9 << " will be handed to you when it is 40cm long." << endl;
	}
	else if(treeChoise == t10){
		cout << "You have successfully choosen " << t10 << endl << "Amount to be paied for planting and taking care is Rs 60" << endl << "Please enter the amount." << endl;
		cin >> amou;
		cout << "Please enter the account number." << endl;
		cin >> ACNo;
		cout << "If want please give additional information." << endl;
		cin >> adInfo;
		cout << "Thanks for using us your " << t10 << " will be handed to you when it is 40cm long." << endl;
	}
	else{
		cout << "ERROR! we don't have the plant you want." << endl;
	}
	}
	
	
	return 0;
}
