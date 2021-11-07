#include "Manga.h"

void prompt();

int main() {
    cout << "____________________________" << endl;
    cout << "|==========================|" << endl;
    cout << "|======Welcome to the======|" << endl;
    cout << "|======Manga Bookstore=====|" << endl;
    cout << "|==========================|" << endl;
    cout << "----------------------------" << endl;
    cout << endl;

    prompt();

    return 0;
}

void prompt() {
    char count = 'a';
    while(count != 'q') {
        cout << "What would you like to do? (type the letter that corresponds with the action)" << endl;
        cout << "   Add manga to the inventory (a)" << endl;
        cout << "   Modify manga in the inventory (b)" << endl;
        cout << "   Delete manga in the inventory (c)" << endl;
        cout << "   List the manga of the inventory (d)" << endl;
        cout << "   Purchase manga (e)" << endl;
        cout << "   Quit program (q)" << endl;
        cin >> count;
    }
}