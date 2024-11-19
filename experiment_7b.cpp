#include <iostream>
using namespace std;
class Books
{
private:
    static int countBook;
    string bookName;
    string bookId;

public:
    Books()
    {
        countBook = countBook + 1;
    }
    Books(string bookName)
    {
        countBook = countBook + 1;
        this->bookName = bookName;
        bookId = "ReaderBook";
        bookId = bookId + to_string(countBook);
    }
    void display()
    {
        cout << "Book name is : " << bookName << endl;
        cout << "Book id is : " << bookId << endl;
        cout << endl;
    }
    void noOfBooksPresent()
    {
        cout << "No of books entered: " << countBook << endl;
    }
};

int Books::countBook = 0;

int main()
{
    Books b1("Malgudi Days");
    b1.display();
    Books b2("Brave New World");
    b2.display();
    Books b3("Harry Porter");
    b3.display();
    b1.noOfBooksPresent();
    return 0;
}