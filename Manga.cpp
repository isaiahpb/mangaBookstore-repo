#include "Manga.h"

Manga::Manga(string userTitle, string userAuthor, string userPublisher, int userQuantity, double userPrice, int userVolume) {
    title = userTitle;
    author = userAuthor;
    publisher = userPublisher;
    quantity = userQuantity;
    price = userPrice * 1.0;
    volume = userVolume;
}

void Manga::modify(char choice) {
    if(choice == 't') {
        cout << "New title: ";
        cin.ignore();
        getline(cin, title);
    }
    else if(choice == 'a') {
        cout << "New author: ";
        cin.ignore();
        getline(cin, author);
    }
    else if(choice == 'p') {
        cout << "New publisher: ";
        cin.ignore();
        getline(cin, publisher);
    }
    else if(choice == 'v') {
        cout << "New volume: ";
        cin.ignore();
        cin >> volume;
    }
    else if(choice == 'd') {
        cout << "New price: ";
        cin.ignore();
        cin >> price;
    }
    else if(choice == 'n') {
        cout << "New quantity: ";
        cin.ignore();
        cin >> quantity;
    }
    else if(choice != 'q'){
        cout << "You entered an invalid value. Please type the letter the corresponds with the action.";
    }
}