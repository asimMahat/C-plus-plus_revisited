#include <iostream>

using namespace std;

void sayHI(string name, int age);


int main ()
{
 sayHI("tom",20);   
 sayHI("mike",21);
 sayHI("david",30);



return 0;

}
void sayHI(string name, int age)
{
 cout<<" Hello "<<name<<" you are "<<age<<endl;
}
           


