#include <iostream>
#include <fstream>
using namespace std;

class Notepad {
    private:
        string user_text,file_name,user_CHOISE;
    public:
        void IOfunc(){
            cout << "please enter the opertion:-\nwrite a file\nopen a file to read\n";
            getline(cin,user_CHOISE);
            if(user_CHOISE == "write a file"){
                fileOpen();
            }
            else if(user_CHOISE == "open a file to read"){
                fileRead();
            }
            else{
                cout << "SORRY! an error occured\n";
            }
        }
        void fileOpen(){
            cout << "please enter file name(with .txt at last)" << endl;
            getline(cin,file_name);
            ofstream userFILE(file_name);
            cout << "please enter your text\n";
            getline(cin,user_text);
            userFILE << user_text;
            userFILE.close();
            for(int i=1;i<=70;i++){
                cout << "-";
            }
            cout << endl;
            IOfunc();
            cout << endl;
        }

        void fileRead(){
            cout << "Please enter the file you want to open(with .txt at last)\n";
            getline(cin,file_name);
            ifstream readFile(file_name);
            while (getline(readFile, user_text)){
                cout << user_text;
            }
            cout << endl;
            readFile.close();
            for(int i=1;i<=70;i++){
                cout << "-";
            }
            cout << endl;
            IOfunc();
            cout << endl;
        }
};

int main(){
    Notepad CallFunc;
    string CHOISE;
    
    CallFunc.IOfunc();
    
    return 0;
}