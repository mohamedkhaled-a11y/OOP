
#include<iostream>
#include "../include/Library.hpp"

int main()
{

    // Create a library
library Lib = new Library("City Central Library");

Book B1=new Book("Design Patterns","Gang of FOUR","978-0201633610");
Book B2=new Book("The C++ Programming Language","Bjarne Stroustrup","978-0321563842");
Book B3=new Book("The C++ Programming Language","Bjarne Stroustrup","978-0321563842");
Lib.addBook(B1);
Lib.addBook(B2);
Lib.addBook(B3);

Member M1=new Member("John Doe","1234567890");
Member M2=new Member("Jane Doe","1234567890");
Member M3=new Member("Jim Doe","1234567890");
Lib.registerMember(M1);
Lib.registerMember(M2);
Lib.registerMember(M3);

Lib.displayAvailableBooks();
Lib.lendBook(M1, "978-0201633610");
Lib.displayAvailableBooks();



}