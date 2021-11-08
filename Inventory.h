#ifndef INVENTORY_H
#define INVENTORY_H
#include "Manga.h"
#include <vector>


class Inventory {
    public:
        void addManga();
        void printList() const;
        void printTotalPrice();


    private:
        vector<Manga> inventory;
};


#endif