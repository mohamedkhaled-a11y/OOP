

#include<../include/Member.hpp>


Member::Member(std::string& Name,int Id,std::vector<Book>B):
  name(Name),memberID(Id),borrowedBooks(B)
  {

  }

  std::string Member:: getInfo()
  {
    return "MemberName: " + name +"\n" + "memberID: "+ memberID+"\n";
  }

                              
   void Member::borrowBook(Book B){

    B.borrow();
    borrowedBooks.push_back(B)

   }                                    //Adds a book to borrowedBooks list
   void returnBook(Book B)
   {
    borrowedBooks.erase(find(borrowedBooks.begin(), borrowedBooks.end(), B));
    B.returnBook();
   }                                  //Removes a book from borrowedBooks list
