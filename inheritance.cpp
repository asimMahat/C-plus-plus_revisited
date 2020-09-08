#include <iostream>

using namespace std;

class Chef {

    public :

        void makeChicken(){
        cout << "The chef makes chicken "<<endl; 
        }

        void makesalad(){
        cout<<"The chef makes salad"<<endl;
        }

        void makeSpecialDish(){
        cout<<"The chef makes bbq "<<endl;
         }


};

class ItalianChef: public Chef{
 
 public:
   void makePasta(){
  cout<< "The ItalianChef also make pasta"<<endl;
  }

   void makeSpecialDish(){
   
   cout<< "The chef makes chicken parm";
   }

};




int main(){

 Chef chef;
 chef.makeChicken();

 ItalianChef italianChef;
 italianChef.makeChicken();
 italianChef.makePasta();
 italianChef.makeSpecialDish();


return 0;
}
