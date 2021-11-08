#ifndef MANGA_H
#define MANGA_H
#include <iostream>
#include <string>

using namespace std;

class Manga {
    public:
        Manga(string userTitle = "None", string userAuthor = "None", string userPublisher = "None", int userQuantity = 0, double userPrice = 0.0, int userVolume = 0);
        //Accessor Functions
        const string getTitle() const { return title; }
        const string getAuthor() const { return author; }
        const string getPublisher() const {return publisher; }
        const int getQuantity() const { return quantity; }
        const double getPrice() const { return price; }
        const int getVolume() const { return volume; }

        //Mutator Functions
        void setTitle(int title) { this->title = title; }
        void setAuthor(int author) { this->author = author; }
        void setPublisher(int publisher) { this->publisher = publisher; }
        void setPrice(double price) { this->price = price; }
        void setQuantity(int quantity) { this->quantity = quantity; } 
        void setVolume(int volume) { this->volume = volume; }


    private:
        string title, author, publisher;
        int quantity, volume;
        double price; 
};



#endif