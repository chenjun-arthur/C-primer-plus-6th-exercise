#include <iostream>
#include "sales.h"
// using namespace SALES;

namespace SALES
{
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
	void setSales(Sales & s, const double ar[], int n)
	{
		for (int i = 0; i < QUARTERS; ++i)
			s.sales[i] = 0;

		s.sales[0] = ar[0];
		s.max = ar[0];
		s.min = ar[0];
		for (int i = 1; i < n; ++i)
		{
			s.sales[i] = ar[i];
			if (ar[i] > s.max)
			{
				s.max = ar[i];
			}
			if (ar[i] < s.min)
			{
				s.min = ar[i];
			}
		}

		double total = 0.0;
		for (int i = 0; i < QUARTERS; ++i)
		{
			total += s.sales[i];
		}
		s.average = total / 4;
	}
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
	void setSales(Sales & s) {
		using std::cout;
		using std::cin;
		double ar[10];
		int i = 0;

		cout << "Enter sales items:\n";
		for (i = 0; i < 10 && (cin >> ar[i]); ++i)
		{
			cout << "Next item\n";
		}
		setSales(s, ar, i);
	}
	// display all information in structure s
	void showSales(const Sales & s) {
		using std::cout;
		cout << "sales[QUARTERS]:\n";
		for (int i = 0; i < QUARTERS; ++i)
		{
			cout << s.sales[i] << " ";
		}
		cout << "\n average: " << s.average << "\n";
		cout << "\n max: " << s.max << "\n";
		cout << "\n min: " << s.min << "\n";
	}
}