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
    int volume;
    int index;

    cout << "Name of manga to modify: ";
    cin.ignore();
    getline(cin, name);
    cout << "Volume of manga: ";
    cin >> volume;
    index = check(name, volume);
    if (index > -1) {
        while(choice != 'q') {
            cout << endl;
            cout << "What would like to modify? (q to quit)" << endl;
            cout << "Title(t), Author(a), Publisher(p), Volume(v), Price(d), Quantity(n): ";
            cin.clear();
            cin >> choice;
            inventory.at(index).modify(choice);
            cout << endl;
        }
    }
    else {
        cout << "The name and volume you entered does not correspond with the content of the inventory" << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> choice;
        cout << endl;
    }

    

}

void Inventory::deleteManga() {
    char choice = 'a';
    string name;
    int volume;
    int index;

    cout << "Name of manga to modify: ";
    cin.ignore();
    getline(cin, name);
    cout << "Volume of manga: ";
    cin >> volume;
    index = check(name, volume);

    if(index > -1) {
        inventory.erase(inventory.begin() + index);
        cout << "The manga and its volume has been deleted from the inventory." << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> choice;
        cout << endl;
    }
    else {
        cout << "The name and volume you entered does not correspond with the content of the inventory" << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> choice;
        cout << endl;
    }
}

int Inventory::check(string name, int volume) {
    for(unsigned i = 0; i < inventory.size(); ++i) {
        if(inventory.at(i).getTitle() == name && inventory.at(i).getVolume() == volume) {
            return i;
        }
    }
    return -1;
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