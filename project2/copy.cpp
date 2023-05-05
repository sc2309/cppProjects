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
            ofstream userFilename("userFilename.txt");
            ofstream userFilepassword("userFilepassword.txt");
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
            ifstream userFilename("userFilename");
            ifstream userFilepassword("userFilepassword.txt");
            while (getline(userFilename, nametext)){
                if(username == nametext){
                    cout << "correct username\n";                                        //   error
                }
                else{
                    cout << "Incorrect username\n";
                    break;
                }
            }
            while (getline(userFilepassword, passtext)){
                if(password == passtext){
                    cout << "correct password\n";
                }
                else{
                    cout << "Incorrect password\n";
                    break;
                }
            }

            cout << "Login Successfull" << endl;
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