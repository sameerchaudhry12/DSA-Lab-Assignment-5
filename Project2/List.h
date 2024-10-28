#pragma
#include "node.h"
using namespace std;
class List {
private:
    Node* head;
    Node* tail;

public:
    List(); 

    void append(int val);
    void reverse();
    void displayAlternate();
    void display();
};


