/*
Chapter 7 Programming Exercises
8. Redo Listing 7.15 without using the array class. Do two versions:
a. Use an ordinary array of const char * for the strings representing the season
names, and use an ordinary array of double for the expenses.
b. Use an ordinary array of const char * for the strings representing the season
names, and use a structure whose sole member is an ordinary array of
double for the expenses. (This design is similar to the basic design of the
array class.)
*/
//arrobj.cpp -- functions with array objects
#include <iostream>
const int Seasons = 4;
const char * Snames[4][7] = {{"Spring"}, {"Summer"}, {"Fall"}, {"Winter"}};
struct expSeason
{
	double expenses[Seasons];
};
    
void fill_a(double pa[]);
void show_a(const double da[]);
void fill_b(expSeason * pb);
void show_b(expSeason db);

int main()
{
    double expensesA[4] = {0};
    expSeason expensesB;

    fill_a(expensesA);
    show_a(expensesA);
    fill_b(&expensesB);
    show_b(expensesB);
    return 0;
}

void fill_a(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i][0] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show_a(const double da[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i][0] << ":\t$" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total:\t$" << total << '\n';
}

void fill_b(expSeason * pb)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i][0] << " expenses: ";
        std::cin >> pb->expenses[i];
    }
}

void show_b(expSeason db)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i][0] << ":\t$" << db.expenses[i] << '\n';
        total += db.expenses[i];
    }
    std::cout << "Total:\t$" << total << '\n';
}
