#include <iostream>

using namespace std;

int power(int baseNum, int powNum){

    int result =1 ;

    

    for (int i =0; i< powNum; i++){
    
    result = result * baseNum;
    }
 
    return result;

 

}



int main ()
{
 int i =  power(2,3);
 cout << "The answe is "<<i<<endl;

return 0;
}
