#include <iostream>
#include <fstream>
using namespace std;

class Form {
    private:
        string name,username,pass,password,nametext,passtext,their_choise;
    public:
        void inoutf(){
            cout << "Please enter if you want to login or sign up" << endl;
            getline(cin,their_choise);
            if(their_choise == "sign up"){
                signUP();
            }
            else if(their_choise == "login"){                                    //  done
                login();
            }
            else{
                cout << "error with the choise\n";
            }
        }


        void signUP(){
            ofstream userFilename("userFilename.xlsx");
            ofstream userFilepassword("userFilepassword.xlsx");
            cout << "please enter a name \n";
            getline(cin,name);
            userFilename << name;
            cout << "please enter a strong password\n";
            getline(cin,pass);                                             //   done
            userFilepassword << " " << pass;
            
            cout << "sign up succesfull\n";
            userFilename.close();
            userFilepassword.close();
            inoutf();
        }


        void login(){
            cout << "hello user please enter your username:- ";
            getline(cin,username);
            cout << username << " please enter your password:- ";
            getline(cin,password);
            ifstream userFilename("userFilename.xlsx");
            ifstream userFilepassword("userFilepassword.xlsx");
            while (getline(userFilename, nametext)){
            }
            while (getline(userFilepassword, passtext)){
            }
            if(username == name && password == pass){
                cout << "login successful\n";
            }
            else{
                cout << "incorrect username or password\n";
            }
            userFilename.close();
            userFilepassword.close();
            inoutf();
        }
};

int main(){
    Form Obj;
    Obj.inoutf();

    return 0;
}