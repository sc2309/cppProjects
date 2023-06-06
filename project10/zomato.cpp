#include <iostream>
using namespace std;


int main(){
	string order,address,vn,veg = "veg",non_veg = "non_veg";
	
	
	
	
	using vfood = string;
    vfood f1 = "panner_biryani";
    vfood f2 = "dosa";
    vfood f3 = "salad";
    vfood f4 = "chole_bhature";
    vfood f5 = "shahi_panner";
    vfood f6 = "jerra_rice";
    vfood f7 = "tandoori_roti";
    vfood f8 = "dal_makhani";
    vfood f9 = "choclate_ice_cream";
    vfood f10 = "cheese_panner_sandwhiches";
    
    
    
    
    using nfood = string;
    nfood nf1 = "chicken_birayani";
    nfood nf2 = "barito";
    nfood nf3 = "fried_chicken";
    nfood nf4 = "tandoori_chicken";
    nfood nf5 = "butter_chicken";
    nfood nf6 = "egg_cake";
    nfood nf7 = "egg_roll";
    nfood nf8 = "omlet";
    nfood nf9 = "chicken_momos";
    nfood nf10 = "chicken_tikka";
    
    
    
	cout << "Please tell the type of food you want." << endl << "veg" << endl << "non_Veg" << endl;
	cin >> vn;
	
	
	if(vn == veg){
		cout << "You have successfully choosen veg. Please give us your order." << endl;
		cout << "Your choises are " << endl << f1 << endl << f2 << endl << f3 << endl << f4 << endl << f5 << endl << f6 << endl << f7 << endl << f8 << endl << f9 << endl << f10 << endl; 
		cin >> order;
		if(order == f1){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your panner_biryani will be delivered." << endl;
		}
		else if(order == f2){
		    cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your dosa will be delivered." << endl;
		}
		else if(order == f3){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your salad will be delivered." << endl;
		}
		else if(order == f4){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chole_bhature will be delivered." << endl;
		}
		else if(order == f5){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your shahi_panner will be delivered." << endl;
		}
		else if(order == f6){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your jerra_rice will be delivered." << endl;
		}
		else if(order == f7){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your tandoori_roti will be delivered." << endl;
		}
		else if(order == f8){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your dal_makhani will be delivered." << endl;
		}
		else if(order == f9){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your choclate_ice_cream will be delivered." << endl;
		}
		else if(order == f10){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your cheese_panner_sandwhiches will be delivered." << endl;
		}
		else{
			cout << "Invalid order." << endl ;
		}
	}
	
	
	
	
	
	
	
	
	
	else if(vn == non_veg){
		cout << "You have successfully choosen veg. Please give us your order." << endl;
		cout << "Your choises are " << endl << nf1 << endl << nf2 << endl << nf3 << endl << nf4 << endl << nf5 << endl << nf6 << endl << nf7 << endl << nf8 << endl << nf9 << endl << nf10 << endl; 
		cin >> order;
		if(order == nf1){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken_biryani will be delivered." << endl;
		}
		else if(order == nf2){
		    cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your barito will be delivered." << endl;
		}
		else if(order == nf3){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your fried_chicken will be delivered." << endl;
		}
		else if(order == nf4){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your tandoori_chicken will be delivered." << endl;
		}
		else if(order == nf5){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your butter_chicken will be delivered." << endl;
		}
		else if(order == nf6){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your egg_cake will be delivered." << endl;
		}
		else if(order == nf7){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your egg_roll will be delivered." << endl;
		}
		else if(order == nf8){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your omlet will be delivered." << endl;
		}
		else if(order == nf9){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken_momos will be delivered." << endl;
		}
		else if(order == nf10){
			cout << "Please enter address." << endl;
			cin >> address;
			cout << "Your chicken_tikka will be delivered." << endl;
		}
		else{
			cout << "Invalid order." << endl ;
		}
	}
	
	
	else{
		cout <<"inappropriate type of food." << endl;
	}
	
	
	return 0;
}

