#include "Inventory.h"
#include <iostream>

void Inventory::addManga() {
    string userName, userAuthor, userPublisher;
    int userQuantity, userVolume;
    double userPrice;

    cout << endl;
    cout << "Name of manga: ";
    cin.ignore();
    getline(cin, userName);
    cout << "Author of manga: ";
    getline(cin, userAuthor);
    cout << "Publisher of manga: ";
    getline(cin, userPublisher);
    cout << "Volume: ";
    cin >> userVolume;
    cout << "Quantity of manga: ";
    cin >> userQuantity;
    cout << "Price of manga: ";
    cin >> userPrice;

    Manga manga(userName, userAuthor, userPublisher, userQuantity, userPrice, userVolume);
    inventory.push_back(manga);
}

void Inventory::modifyManga() {
    char choice = 'a';
    string name;

    cout << "Which manga would you like to modify? " << endl;
    cin.ignore();
    getline(cin, name);

}

bool Inventory::checkName() {
    for(unsigned i = 0; i < inventory.size(); ++i) {
        
    }
}

void Inventory::printList() const {
    cout << endl;
    for(unsigned i = 0; i < inventory.size(); ++i) {
        cout << "Title: " << inventory.at(i).getTitle() << endl;
        cout << "Volume: " << inventory.at(i).getVolume() << endl;
        cout << "Author: " << inventory.at(i).getAuthor() << endl;
        cout << "Publisher: " << inventory.at(i).getPublisher() << endl;
        cout << "Quantity: " << inventory.at(i).getQuantity() << endl;
        cout << "Price: $" << inventory.at(i).getPrice() << endl;
        cout << endl;
    }
}