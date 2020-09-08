#include <iostream>

using namespace std;

// class is generally a new data type

class Book {

    public :
        string title;
        string author;
        int pages;

      //constructor
        Book(string aTitle, string aAuthor, int aPages){
           title = aTitle;
           author = aAuthor;
           pages = aPages;
        }
};


int main()
{

    Book book1("Harry Potter","JK Rowling",500);
    
     Book book2("Lord of the rings","Tolkein",700);
    


    cout << book1.title<<endl;
    cout << book2.author<<endl;

 return 0;

}
