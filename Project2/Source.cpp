#include "list.h"
#include <iostream>
using namespace std;
int main() {
    List list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

   cout << "Original List: ";
    list.display();

    cout << "Reversed List: ";
    list.reverse();
    list.display();

    cout << "Alternate Nodes: ";
    list.displayAlternate();

    return 0;
}
