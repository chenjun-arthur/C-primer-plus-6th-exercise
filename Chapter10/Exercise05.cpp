/*Chapter 10 Programming Exercises
5. Consider the following structure declaration:
struct customer {
char fullname[35];
double payment;
};
Write a program that adds and removes customer structures from a stack, represented
by a Stack class declaration. Each time a customer is removed, his or her
payment should be added to a running total, and the running total should be
reported. Note: You should be able to use the Stack class unaltered; just change the
typedef declaration so that Item is type customer instead of unsigned long.
*/
// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};    // constant specific to class
    Item items[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
};

Stack::Stack()    // create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item) 
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    Item po;
    double total = 0.0;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << "Enter a PO customer fullname to add: ";
                       cin.getline(po.fullname, 35);
                       cout << "Enter a PO customer payment to add: ";
                       cin >> po.payment;
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(po);
                       break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                           st.pop(po);
                           cout << "PO #" << po.fullname << " popped\n";
                           total += po.
                       }
                       break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}
