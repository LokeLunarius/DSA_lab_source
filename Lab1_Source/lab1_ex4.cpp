#include <iostream>
using namespace std;

class Book
{
private:
    char* title;
    char* authors;
    int publishingYear;

public:
    Book()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero publishingYear and null pointer
         */
        this->title = NULL;
        this->authors = NULL;
        this->publishingYear = 0;
    }

    Book(const char* title, const char* authors, int publishingYear)
    {
        /*
         * STUDENT ANSWER
         */;
        this->title = (char*)title;
        this->authors = (char*)authors;
        this->publishingYear = publishingYear;
    }

    Book(const Book& book)
    {
        /*
         * STUDENT ANSWER
         * TODO: deep copy constructor
         */
        //if (this->title == NULL)
        //{
        //    this->title = new char();
        //}
        //if (this->authors == NULL)
        //{
        //    this->authors = new char();
        //}
        this->title = book.title;
        this->authors = book.authors;
        this->publishingYear = book.publishingYear;
    }

    void setTitle(const char* title)
    {
        /*
         * STUDENT ANSWER
         */
        //if (this->title == NULL)
        //{
        //    this->title = new char();
        //}
        this->title = (char*)title;
    }

    void setAuthors(const char* authors)
    {
        /*
         * STUDENT ANSWER
         */
        //if (this->authors == NULL)
        //{
        //    this->authors = new char();
        //}
        this->authors = (char*)authors;
    }

    void setPublishingYear(int publishingYear)
    {
        /*
         * STUDENT ANSWER
         */
        this->publishingYear = publishingYear;
    }

    char* getTitle() const
    {
        /*
         * STUDENT ANSWER
         */
        return this->title;
    }

    char* getAuthors() const
    {
        /*
         * STUDENT ANSWER
         */
        return this->authors;
    }

    int getPublishingYear() const
    {
        /*
         * STUDENT ANSWER
         */
        return this->publishingYear;
    }

    ~Book()
    {
        /*
         * STUDENT ANSWER
         */
        //free(this->title);
        //free(this->authors);
    }

    void printBook() {
        printf("%s\n%s\n%d\n", this->title, this->authors, this->publishingYear);
    }
};

int main()
{
    Book book1("Giai tich 1", "Nguyen Dinh Huy", 2000);
    book1.printBook();

    Book book2 = book1;
    book2.printBook();

    book1.setAuthors("Nguyen Thi Xuan Anh");
    book2.printBook();

    book1.setTitle("Giai tich 2");
    book1.setAuthors("Nguyen Thi Xuan Anh");
    book1.printBook();
}

