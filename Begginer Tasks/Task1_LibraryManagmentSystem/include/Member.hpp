

#include<iostream>
#include<vector>
#include "Book.hpp"
class Member{

private:
     std::string name{};
     int memberID{};
     std::vector<Book>borrowedBooks{};

public:
      Member(std::string& Name,int Id,std::vector<Book>B);

      std::string getInfo():                                    // Returns member information
      void borrowBook(Book B):                                    //Adds a book to borrowedBooks list
      void returnBook(Book B):                                   //Removes a book from borrowedBooks list

};
