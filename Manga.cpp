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
}