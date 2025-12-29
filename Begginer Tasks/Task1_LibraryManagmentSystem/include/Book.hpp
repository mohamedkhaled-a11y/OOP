

class Book {
    private:
        std::string title{}
        std::string author{};
        std::string isbn{};
        int publicationYear{};
        bool isAvailable{};
    public:
        Book(const std::string& title, const std::string& author, int publicationYear);
        std::string getinfo() const;
        void borrow();
        void returnBook();

        
};
