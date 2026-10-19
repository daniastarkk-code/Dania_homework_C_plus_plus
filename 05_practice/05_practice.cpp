#include <iostream>

using namespace std;

class Book {
private:
    const char* author;
    const char* title;
    const char* publisher;
    int year;
    int pages;

public:
    Book()
        : author("Unknown"), title("Untitled"), publisher("Unknown"), year(0), pages(0) {
    }

    explicit Book(const char* author)
        : author(author), title("Untitled"), publisher("Unknown"), year(0), pages(0) {
    }

    Book(const char* author, const char* title, const char* publisher, int year, int pages)
        : author(author), title(title), publisher(publisher), year(year), pages(pages) {
    }

    Book(const Book& other)
        : author(other.author), title(other.title), publisher(other.publisher), year(other.year), pages(other.pages) {
    }

    void display() const {
        cout << "Author: " << author << " | Title: \"" << title << "\" | Publisher: " << publisher << " | Year: " << year << " | Pages: " << pages << endl;
    }

    const char* getAuthor() const {
        return author;
    }

    const char* getPublisher() const {
        return publisher;
    }

    int getYear() const {
        return year;
    }
};

class Library {
private:
    Book books[5];

public:
    Library() {
        books[0] = Book();
        books[1] = Book("George Orwell");
        books[2] = Book("Harper Lee", "To Kill a Mockingbird", "J. B. Lippincott & Co.", 1960, 281);
        books[3] = Book("F. Scott Fitzgerald", "The Great Gatsby", "Charles Scribner's Sons", 1925, 208);
        books[4] = Book("Ray Bradbury", "Fahrenheit 451", "Ballantine Books", 1953, 256);
    }

    explicit Library(const Book b[5]) {
        for (int i = 0; i < 5; ++i) {
            books[i] = b[i];
        }
    }

    Library(const Library& other) {
        for (int i = 0; i < 5; ++i) {
            books[i] = other.books[i];
        }
    }

    void printByAuthor(const char* author) const {
        cout << "=== Books by author: " << author << " ===" << endl;
        for (int i = 0; i < 5; ++i) {
            if (books[i].getAuthor() == author) {
                books[i].display();
            }
        }
        cout << endl;
    }

    void printByPublisher(const char* publisher) const {
        cout << "=== Books published by: " << publisher << " ===" << endl;
        for (int i = 0; i < 5; ++i) {
            if (books[i].getPublisher() == publisher) {
                books[i].display();
            }
        }
        cout << endl;
    }

    void printAfterYear(int year) const {
        cout << "=== Books published after " << year << " ===" << endl;
        for (int i = 0; i < 5; ++i) {
            if (books[i].getYear() > year) {
                books[i].display();
            }
        }
        cout << endl;
    }
};

int main() {
    const char* authorOrwell = "George Orwell";
    const char* publisherSecker = "Secker & Warburg";

    Book bookList[5] = {
        Book(authorOrwell, "1984", publisherSecker, 1949, 328),
        Book("Harper Lee", "To Kill a Mockingbird", "J. B. Lippincott & Co.", 1960, 281),
        Book("F. Scott Fitzgerald", "The Great Gatsby", "Charles Scribner's Sons", 1925, 208),
        Book(authorOrwell, "Animal Farm", publisherSecker, 1945, 112),
        Book("Ray Bradbury", "Fahrenheit 451", "Ballantine Books", 1953, 256)
    };

    Library lib(bookList);

    lib.printByAuthor(authorOrwell);
    lib.printByPublisher(publisherSecker);
    lib.printAfterYear(1950);

}