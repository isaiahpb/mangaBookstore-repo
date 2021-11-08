#ifndef INVENTORY_H
#define INVENTORY_H
#include "Manga.h"
#include <vector>


class Inventory {
    public:
        void addManga();
        void printList() const;
        void modifyManga();
        void deleteManga();
        void printTotalPrice();

    private:
        int check(string name, int volume);
        vector<Manga> inventory;
};


#endif