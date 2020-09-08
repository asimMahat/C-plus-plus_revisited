#include <iostream>

using namespace std;

int main()
{

  int age = 19;

  //create a variable to store the pointer
  int *page = &age;

  double gpa = 2.7;
  double *pgpa=&gpa;

  string name ="Mike";
  string *pname = &name;


  cout <<"Age :"<< &age<<endl; //this gives the physical memory address
  cout <<"GPA : "<<&gpa<<endl;
  cout <<"Name: "<<&name<<endl;


  /* printing out the pointers gives the memory location
     which is in hexadecimal.
     derefrencing the pointer by putting * will get you the
     actual data stored in the memory location
  */
  cout<<*page<<"--> This is the pointer of page"<<endl;


 return 0;
}
