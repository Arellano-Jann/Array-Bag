
#ifndef ARRAY_BAG
#define ARRAY_BAG

#include <vector>
using namespace std;

#include "BagInterface.h"

template<class ItemType> 
class ArrayBag: public BagInterface<ItemType> { 
private:
    static const int DEFAULT_CAPACITY = 5; 
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
public: 
    ArrayBag();

    int getCurrentSize() const; 
    bool isEmpty() const; 
    bool add(const ItemType& newEntry); 
    bool remove(const ItemType& newEntry); 
    void clear(); 
    int getFrequencyOf(const ItemType& newEntry) const; 
    bool contains(const ItemType& newEntry) const;
    vector<ItemType> toVector() const;

    ~ArrayBag() { }
};  
#include "ArrayBag.cpp"
#endif