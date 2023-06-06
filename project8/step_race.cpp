#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Drunk_man{
    private:
        string diff,enter;                  //   here 'diff' is difficulty
        int randSteps,target,rand_Obs,obsCount = 1,age,Obs_choise,obsTime;   // here 't' is the target and rand_Obs is a random obstacle  
        string ins = "Please press a\n";
        string help = "\n\n\nWe will generate a random number which will be your steps >=6\nWe will give you a target and you have to achieve this\nAnd there will be some obstacles \nEg. go left or right in one of these there are bombs\nIf you go in that path you will lose if you go in correct you will be safe and have to complete\nthe target\n\n";
    public:
        int start(){
            cout << help;
            cout << ins;
            cin >> enter;
            cout << "Please enter your age:-\n\n";
            cin >> age;
            if(age >= 5){
                DifficultySelector();
            }
            else{
                cout << "Not for your age\n";
            }
            return 0;
        }
        int DifficultySelector(){
            cout << "Hello user please select the difficulty:-\neasy\nmedium\nhard\n\n";
            cin >> diff;
            showTarget();
            cout << ins;
            cin >> enter;
            stepGenerater();
            return 0;
        }
        int showTarget(){
            srand(time(NULL));
            if(diff == "easy"){
                target = (rand() % ( 50 - 25 + 1) + 25);
                cout << target << " is your step target\n\n";
            }
            else if(diff == "medium"){
                target = (rand() % ( 75 - 50 + 1) + 50);
                cout << target << " is your step target\n\n";
            }
            else if(diff == "hard"){
                target = (rand() % ( 100 - 75 + 1) + 75);
                cout << target << " is your step target\n\n";
            }
            else{
                cout << " " << endl;
            }
        return 0;
        }
        int ObsTimeGene(){
            srand(time(NULL));
            obsTime = rand() % target;
            return obsTime;
        }
        int stepGenerater(){
            srand(time(NULL));
            int obsTime2 = ObsTimeGene();
            for(int i=1;i<=1000;i++){
                randSteps = (rand() % (3 - 1 + 1) + 1);
                cout << randSteps << " steps\n\n";
                target = target - randSteps;
                cout << "current target is "<< target << "\n\nplease press a\n";
                cin >> enter;
                if(target == obsTime2 || target == obsTime2 + 2 || target == obsTime2 - 2){
                    obstacle1();
                }
                if(target == 0 || target < 0){
                    cout << "\n\n--- YOU WIN ---\n\n";
                    DifficultySelector();
                }
            }
            return 0;
        }
        int obstacle1(){
            srand(time(NULL));
            rand_Obs = rand() % 2;
            cout << "\n\nplease choose 0 for left and 1 for right\n\n";
            for(int i=1;i<=3;i++){
                cin >> Obs_choise;
                if(Obs_choise == rand_Obs){
                    cout << "YOUR SAFE!\n";
                    stepGenerater();
                }
                else{
                    cout << "--- BOOOM! --- \nyou lose\n";
                    DifficultySelector();
                }
            }
            return 0;
        }
};
int main(){
    Drunk_man Race;
    Race.start();
    return 0;
}