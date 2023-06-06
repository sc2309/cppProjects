#include <iostream>
using namespace std;

class library {
    public:
        string book_name,user_name,email;
        long book_no,credits,credit_card_num,amount,price=5,money,c,k;
        long a = price;
        void choise(){
            string user_choise,user,user_choise2;
            cout << "Please enter your name:- ";
            getline(cin,user);
            cout << "Please enter your operation\nbuy lib tokens\nreturn book\nborrow book\n";
            getline(cin,user_choise);
            if(user_choise == "buy lib tokens"){
                libToken();
            }
            else if(user_choise == "return book"){
                addition();
            }
            else if(user_choise == "borrow book"){
                subtraction();
            }
            else{
                cout << "not an option\n";
            }
        }
        void libToken(){
            cout << "1 token may cost " << a << " rupees.\n";
            cout << "Please enter the amount of token you want:- ";
            cin >> amount;
            c = amount*a;
            cout << "This may cost you " << c << " rupees.";
            cout << "please enter your credit card number\n";
            cin >> credit_card_num;
            cout << "Please enter the money:- ";
            cin >> money;
            if(money < c){
                k = c - money;
                cout << "the amount is less by " << k << " please play the left\n";
                cin >> money;
                if(money < k){
                    cout << "the money is less by " << k - money << "please pay correctly your we will call police\n";
                }
                else{
                    cout << "you have been successfully transfered " << amount << " libTokens\n";
                    for(int i=1;i<=amount;i++){
                        amount++;
                    }
                }
            }
            else{
                    cout << "you have been successfully transfered " << amount << " libTokens\n";
                    for(int i=1;i<=amount;i++){
                        amount++;
                    }
                }
                choise();
        }


        void addition(){
            cout << "Please enter the book name" << endl;
            getline(cin,book_name);
            cout << "Please enter 3 digit book number\n";
            cin >> book_no;
            cout << "Thank you\n";
            }


        void subtraction(){
            cout << "Please enter the book name" << endl;
            getline(cin,book_name);
            cout << "Please enter 3 digit book number(001 - 999)\n";
            cin >> book_no;
            if(book_no < 100){
                cout << "50 lib tokens will be deducted from this account\n";
                if(amount > 49){
                    for(int i=1;i<=50;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n"; 
                }
                else{
                    cout << "sorry you can't afford it now\nWe suggest you to buy lib tokens\n";
                }
            }
            else if(book_no < 200 && book_no > 99){
                cout << "75 lib tokens will be duducted from this account\n";
                if(amount > 74){
                    for(int i=1;i<=75;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 300 && book_no > 199){
                cout << "75 lib tokens will be duducted from this account\n";
                if(amount > 74){
                    for(int i=1;i<=75;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 400 && book_no > 299){
                cout << "100 lib tokens will be deducted from this account\n";
                if(amount > 99){
                    for(int i=1;i<=100;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
            }
            else if(book_no < 500 && book_no > 399){
                cout << "125 lib tokens will be deducted from this account\n";
                if(amount > 124){
                    for(int i=1;i<125;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 600 && book_no > 499){
                cout << "150 lib tokens will be deducted from this account\n";
                if(amount > 149){
                    for(int i=1;i<150;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 700 && book_no > 599){
                cout << "175 lib tokens will be deducted from this account\n";
                if(amount > 174){
                    for(int i=1;i<175;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 800 && book_no > 699){
                cout << "200 lib tokens will be deducted from this account\n";
                if(amount > 199){
                    for(int i=1;i<200;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 900 && book_no > 799){
                cout << "225 lib tokens will be deducted from this account\n";
                if(amount > 224){
                    for(int i=1;i<225;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
            else if(book_no < 1000 && book_no > 899){
                cout << "250 lib tokens will be deducted from this account\n";
                if(amount > 250){
                    for(int i=1;i<250;i++){
                        amount--;
                    }
                    cout << "you were successful in buying this\n";
                }
                else{
                    cout << "Present you can't afford it please buy some lib tokens\n";
                }
            }
        }
};  

int main(){
    library Obj1;
    Obj1.choise();

    return 0;
}