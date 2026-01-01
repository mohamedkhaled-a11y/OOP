#include "../include/Book.hpp"
#include <iostream>
#include <string>


Book::Book(const std::string& title, const std::string& author, int publicationYear) : title(title), author(author), publicationYear(publicationYear), isAvailable(true) {    
}

std::string Book::getinfo() const {
    return "Title: " + title + "\nAuthor: " + author + "\nPublication Year: " + std::to_string(publicationYear) + "\nISBN: " + isbn + "\nAvailability: " + (isAvailable ? "Available" : "Not Available");
}

void Book::borrow()
{
    isAvailable=false;
}

void Book:: returnBook()
{
    isAvailable=true;
}


