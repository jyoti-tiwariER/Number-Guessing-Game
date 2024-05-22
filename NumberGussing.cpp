#include<iostream>
using namespace std;

int main()
{
    cout<<"Guess between 0 to 10"<<endl;
    int answer =5;
    int Guess;
    int health=0;
    int chances=3;
    bool gameover= false;
    // while(answer !=Guess){
    //     cout<<"ENTER YOUR NUMBER:-";
    //     cin>>Guess;
    // }
    while(answer !=Guess && !gameover)
    if(health<chances){
cout<<"ENTER YOUR NUMBER-";
cin>>Guess;
health++;
    }
    else{
        gameover = true;
    }
    if(gameover){
        cout<<"YOU LOST"<<endl;
}
else{
    cout<<"YOU WIN"<<endl;
}
  return 0;
}