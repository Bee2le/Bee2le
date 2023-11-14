#include <iostream>
#include <algorithm>
#include <ctime>

 using namespace std;

int main()
{
    cout<<"B E E"<<endl;
    cout<<"welcome, Player."<<endl;
    cout<<"You are to start this game immediately"<<endl;
    cout<<"Your time starts now!"<<endl;
   string real_word[5] = {"ant","ball", "coffee", "demon", "elephant"};
   string shuffle [5] = {"ant","ball", "coffee", "demon", "elephant"};
      int level= 1;
      int lives = 5;
      int Tlevel = 5;
      srand(1234);
      for (string&word:shuffle){
        random_shuffle(word.begin(), word.end());
      }
      while (level <5&&lives>0) {
        string input;

        cout << "shuffle the word:"<<shuffle[level-1]<<endl;
        cout<< "choose your guess:";
        cin>>input;
        if(input==real_word[level-1])
        {
            cout<<"correct! Next Level."<<endl;
++level;
        }
        else{
            cout << "Wrong! You just lost a life, lives remaining:"<< (--lives)<<endl;

        }

        }
        if (lives==0)
            cout<<"Your lives have finished"<<endl;
        else{

            cout<<"Good Job, you completed the level"<<endl;
        }

       return 0;
}
