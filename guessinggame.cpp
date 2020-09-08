#include <iostream>

using namespace std;

int main(){

    int secretnum =7;
    int guessnum;
    int guesscount=0;
    int guesslimit=3;
    
    bool outofGuesses = false;
   
   //using do while loop
   
    do {

        if (guesscount < guesslimit){
        cout<< "Guess a number : ";
        cin >> guessnum;
        guesscount ++;

       }
        else {
        outofGuesses=true;
        
        }

     }while( secretnum != guessnum && !outofGuesses );


    if (outofGuesses){
      cout<<"You lost"<<endl;
    }
    else {
        
    cout<<"You WON "<<endl;

    }



return 0;
}
