/*Chapter 10 Programming Exercises
8. You can describe a simple list as follows:
n The simple list can hold zero or more items of some particular type.
n You can create an empty list.
n You can add items to the list.
n You can determine whether the list is empty.
n You can determine whether the list is full.
n You can visit each item in the list and perform some action on it.
As you can see, this list really is simple; it doesn’t allow insertion or deletion, for example.
Design a List class to represent this abstract type.You should provide a list.h
header file with the class declaration and a list.cpp file with the class method
implementations.You should also create a short program that utilizes your design.
The main reason for keeping the list specification simple is to simplify this programming
exercise.You can implement the list as an array or, if you’re familiar with
the data type, as a linked list. But the public interface should not depend on your
choice.That is, the public interface should not have array indices, pointers to nodes,
and so on. It should be expressed in the general concepts of creating a list, adding
an item to the list, and so on.The usual way to handle visiting each item and performing
an action is to use a function that takes a function pointer as an argument:
void visit(void (*pf)(Item &));
Here pf points to a function (not a member function) that takes a reference to Item
argument, where Item is the type for items in the list.The visit() function applies
this function to each item in the list.You can use the Stack class as a general guide.
*/
#include <iostream>

typedef int Item;

class List
{
private:
	enum {MAX = 10};
	Item items[MAX];
	int top;
public:
	List();
	~List() {};
	bool isempty() const;
	bool isfull() const;
	bool add(const Item &item);
	void visit(void (*pf)(Item &item));
};

List::List() { top = 0; }

bool List::isempty() const { return top == 0; }

bool List::isfull() const { return top == MAX; }

bool List::add(const Item &item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else 
		return false;
}

void List::visit(void (*pf)(Item &item)) {
	if (isempty())
	{
		std::cout << "List is empty!\n";
		return;
	}

	for (int i = 0; i < top; ++i)
	{
		pf(items[i]);
	}
}

void show(Item &item) {
	using std::cout;
	cout << item << "\n";
}

int main() {
	List list;
	// list.add(1);
	// list.add(2);
	list.visit(show);
	return 0;
}