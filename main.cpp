#include "Manga.h"
#include "Inventory.h"

void prompt();
void choice(char count, Inventory& inventory);

int main() {
    cout << "____________________________" << endl;
    cout << "|==========================|" << endl;
    cout << "|======Welcome to the======|" << endl;
    cout << "|======Manga Bookstore=====|" << endl;
    cout << "|==========================|" << endl;
    cout << "----------------------------" << endl;
    cout << endl;

    prompt();
    cout << endl;
    cout << "Thank you for your patronage" << endl;
    return 0;
}

void prompt() {
    Inventory inventory;
    char count = 'a';
    while(count != 'q') {
        cout << "What would you like to do? (type the letter that corresponds with the action)" << endl;
        cout << "Add manga to the inventory (a)" << endl;
        cout << "Modify manga in the inventory (b)" << endl;
        cout << "Delete manga in the inventory (c)" << endl;
        cout << "List the manga of the inventory (d)" << endl;
        cout << "Sort inventory by a specific data (e)" << endl;
        cout << "Purchase manga (f)" << endl;
        cout << "Quit program (q)" << endl;
        cout << endl;
        cin >> count;
        choice(count, inventory);
    }
}

void choice(char count, Inventory& inventory) {
    char con;
    if(count == 'a') {
        inventory.addManga();
        cout << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> con;
        cout << endl;
    }
    else if(count == 'b') {
        inventory.modifyManga();
        cout << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> con;
        cout << endl;
    } 
    else if(count == 'c') {
        inventory.deleteManga();
        cout << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> con;
        cout << endl;
    }
    else if(count == 'd') {
        inventory.printList();
        cout << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> con;
        cout << endl;
    }
    else if(count == 'e') {
        inventory.sortManga();
        cout << endl;
        cout << "Press any key, followed by return, to continue ... ";
        cin >> con;
        cout << endl;
    }
}