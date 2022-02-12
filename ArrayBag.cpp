#include "ArrayBag.h"

template<class ItemType> 
ArrayBag<ItemType>::ArrayBag(){
    itemCount = 0;
    maxItems = DEFAULT_CAPACITY;
}

template<class ItemType> 
int ArrayBag<ItemType>::getCurrentSize() const{
    return itemCount;
}
    
template<class ItemType> 
bool ArrayBag<ItemType>::isEmpty() const{
    return itemCount == 0;
}
    
template<class ItemType> 
bool ArrayBag<ItemType>::add(const ItemType& newEntry){
    bool hasRoom = itemCount < maxItems;

    if(hasRoom){
        items[itemCount] = newEntry;
        itemCount++;
    }

    return hasRoom;
}
    
template<class ItemType> 
bool ArrayBag<ItemType>::remove(const ItemType& anEntry){
    bool found = false; 
    int searchIndex = 0;

    //find object
    while (!found && (searchIndex < itemCount))
    {
        if (items[searchIndex] == anEntry)
        {
            found = true;
        }
        else
        {
            searchIndex++;
        }
    } 

    //swap with last item
    if (found)
    {
        items[searchIndex] = items[itemCount-1];
        itemCount--;
    } 
    return found;
}
    
template<class ItemType> 
void ArrayBag<ItemType>::clear(){
    itemCount = 0;
}
    
template<class ItemType> 
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& newEntry) const{
    int frequency = 0;

    for(int currentIndex = 0; currentIndex < itemCount; currentIndex++){
        if(items[currentIndex] == newEntry){
            frequency++;
        }
    }

    return frequency;
}
    
template<class ItemType> 
bool ArrayBag<ItemType>::contains(const ItemType& newEntry) const{
    return getFrequencyOf(newEntry) > 0;
}

template<class ItemType> 
vector<ItemType> ArrayBag<ItemType>::toVector() const{
    vector<ItemType> bagContents;

    for (int i = 0; i < itemCount; i++){
        bagContents.push_back(items[i]);
    }

    return bagContents;
}