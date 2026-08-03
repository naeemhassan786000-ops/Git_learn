#include<iostream>
using namespace std;
int main(){
   cout<<"I will made following changes\n";
   cout << "\t - Collision -\n"
           "\t - Multiplayer -\n"
           "\t - Health pipeline -\n"
           "\t - Strikes & Attacks -\n";
           "\t - FPS Movement -\n";
           "\t - Combo Attacks -\n";
           int boost=30;
           int num;
           cout<<"Enter * count lines to make: ";
           cin>>num;
           for(int i=0;i<5;i++){
                for(int j=i;j<5;j++){
                        cout<<"* ";
                }
                cout<<"\n";
           }
           return 0;
}