/*Chapter 9 Programming Exercises
3. Begin with the following structure declaration:
struct chaff
{
char dross[20];
int slag;
};
Write a program that uses placement new to place an array of two such structures in
a buffer.Then assign values to the structure members (remembering to use
strcpy() for the char array) and use a loop to display the contents. Option 1 is to
use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
new to allocate the buffer.
*/
#include <iostream>
#include <new> // for placement new
#include <cstring>
const int BUF = 512;
const int N = 2;
char buffer[BUF];      // chunk of memory

struct chaff
{
	char dross[20];
	int slag;
};

void display(chaff pd) {
	using std::cout;

	cout << "dorss: " << pd.dross << "\n";
	cout << "slag: " << pd.slag << "\n";
}

int main()
{
	chaff * pd1, *pd2;

	pd1 = new chaff[N];
	pd2 = new (buffer) chaff[N];

	const char * name[2] = {"aaaaa", "bbbbbbb"};
	for (int i = 0; i < N; ++i)
	{
		strncpy(pd1[i].dross, name[i], 20);
		strncpy(pd2[i].dross, name[i], 20);
		pd1[i].slag = 1;
		pd2[i].slag =2;
	}

	for (int i = 0; i < N; ++i)
	{
		display(pd1[i]);
		display(pd2[i]);
	}

	return 0;
}