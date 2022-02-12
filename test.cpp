#include <string>
#include <iostream>
using namespace std;

#include "ArrayBag.h"

int main(){
    ArrayBag<string> newBag;

    newBag.add("Erin");
    newBag.add("Keith");

    vector<string> bagVector = newBag.toVector();
    
    for (int i = 0; i < (int)bagVector.size(); i++){
        cout << bagVector.at(i) <<endl;
    }

    return 0;
}