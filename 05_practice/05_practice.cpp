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
    explicit Book(const char* auth = "", const char* tit = "", const char* pub = "", int y = 0, int p = 0)
        : author(auth), title(tit), publisher(pub), year(y), pages(p) {
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
    explicit Library(const Book b[5]) {
        for (int i = 0; i < 5; ++i) {
            books[i] = b[i];
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