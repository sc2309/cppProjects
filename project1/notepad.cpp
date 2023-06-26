#include <iostream>
#include <fstream>
using namespace std;

class Notepad {
    private:
        string user_text,file_name,user_CHOISE,efilen,etext,OLD_TEXT[1000];
    public:
        void IOfunc(){
            cout << "please enter the opertion:-\nwrite a file\nopen a file to read\nedit a file(note:can only add a sentence)\n";
            getline(cin,user_CHOISE);
            if(user_CHOISE == "write a file"){
                fileOpen();
            }
            else if(user_CHOISE == "open a file to read"){
                fileRead();
            }
            else if(user_CHOISE == "edit a file"){
                cout << "please enter the file name with .extention\n";
                getline(cin,efilen);
                fileEdit();
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
        void fileEdit(){
            cout << "please enter the text to be added\n";
            getline(cin,etext);
            ofstream UserFile(efilen);
            oldText();
            string newtext = OLD_TEXT[1000] + etext;
            UserFile << newtext;
            UserFile.close();
        }
        string oldText(){
            ifstream uSERfILE(efilen);
            string t;
            while(getline(uSERfILE,t)){
                t = OLD_TEXT[1000];
            }
            uSERfILE.close();
        }
};

int main(){
    Notepad CallFunc;
    string CHOISE;
    
    CallFunc.IOfunc();
    
    return 0;
}