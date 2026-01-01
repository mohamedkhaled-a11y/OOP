



#include<"../include/Library.hpp">
#include<vector>
#include<iostream>

Library::Library(std::string s){}
void Library::addBook(Book book)
{ 
  Lbooks.push_back(book); 
}                                //Adds a book to the library
void Library::registerMember(Member member)
{
    Lmembers.push_back(member); 
}                       // Registers a new member
void Library::lendBook(Member m, string ISBN) //Allows a member to borrow a book by ISBN
{

  for(auto i:Lbooks)
  {
    if(i.isbn==ISBN){
          m.borrowedBooks.push_back(i);
          Lbooks.erase(i);
          i.borrow();

    }
  }



}               
void Library::receiveBook(Member m, std::ISBN) 
{
   for(auto i:m.borrowedBooks)
   {
    if(i.isbn==ISBN){
          i.returnBook();
          Lbooks.push_back(i);
          m.borrowedBooks.erase(i);

    } 
   }
    
}           // Processes a book return
void Library::displayAvailableBooks() 
{
      for(auto i:LBooks)
      {
        std::cout<<i.title<<"\n";
      }
}           