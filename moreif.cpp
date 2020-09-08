#include <iostream>

using namespace std;


int getMax(int num1, int num2, int num3){
    int result;

    if (num1 >= num2 && num1 >= num3){
    result=num1;
      //  cout<"num1 is greater than num2"<<endl;
     }
    else if(num2>= num1 && num2 >=num3) {
    result =num2; 
    //cout<<"num2 is greater than num1"<<endl;
    }
    else {
    result = num3 ;

    }

    return result ;

}

int main(){

cout<< getMax(20,200,120);


return 0;

}
