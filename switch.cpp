#include <iostream>

using namespace std;

string getDay(int dayNum){

   string dayname;

   switch ( dayNum){
   
       case 0:
           dayname="Sunday";
           break;
       case 1:
           dayname="MOnday";
           break;
       case 2 :
           dayname="Tuesday";
           break;
       case 3 :
           dayname ="Wednesday";
           break;
       case 4 :
           dayname ="Thrusday";
           break;
       case 5:
           dayname="Friday";
           break;
       case 6 :
           dayname= "Saturday";
           break;
       
       default:
           cout<<"Invalid day number";
   }
   return dayname;
}

int main(){

 
  cout <<getDay(10)<<endl;



return 0;

}
