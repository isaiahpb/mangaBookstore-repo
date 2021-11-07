#ifndef MANGA_H
#define MANGA_h
#include <iostream>
#include <string>

using namespace std;

class Manga {
    public:
        Manga(string userTitle = "None", string userAuthor = "None", string userPublisher = "None", int quantity = 0, int price = 0.0);
        //Accessor Functions
        const string getTitle() const { return title; }
        const string getAuthor() const { return author; }
        const string getPublisher() const {return publisher; }
        const int getQuantity() const { return quantity; }
        const double getPrice() const { return price; }

        //Mutator Functions
        void setTitle(int title) { this->title = title; }
        void setAuthor(int author) { this->author = author; }
        void setPublisher(int publisher) { this->publisher = publisher; }
        void setPrice(double price) { this->price = price; } 
        void setQuantity(int quantity) {this->quantity = quantity;}


    private:
        string title, author, publisher;
        int quantity;
        double price;
};



#endif