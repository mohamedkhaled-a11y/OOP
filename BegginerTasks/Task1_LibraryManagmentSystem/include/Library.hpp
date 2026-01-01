

#include<iostream>
#include<vector>
#include "Member.hpp"


class Library{

private:
std::string Lname{};
std::vector<Book>Lbooks{};
std::vector<Mmeber>Lmembers{};



public:
Library(string s);
void addBook(Book book);                                //Adds a book to the library
void registerMember(Member member);                       // Registers a new member
void lendBook(Member m, std::string ISBN) ;               //Allows a member to borrow a book by ISBN
void receiveBook(Member m, std::string ISBN) ;           // Processes a book return
void displayAvailableBooks() ;                       // Shows all available books

}