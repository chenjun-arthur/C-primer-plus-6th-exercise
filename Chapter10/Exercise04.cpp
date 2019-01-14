/*Chapter 10 Programming Exercises
4. Do Programming Exercise 4 from Chapter 9 but convert the Sales structure and
its associated functions to a class and its methods. Replace the setSales(Sales &,
double [], int) function with a constructor. Implement the interactive
setSales(Sales &) method by using the constructor. Keep the class within the
namespace SALES.
*/
#include <iostream>

namespace SALES {
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales() { 
			average = 0.0;
			max = 0.0;
			min = 0.0;
		};
		Sales(const double ar[], int n = 0);
		void setSales();
		void showSales() const;	
	};
}

namespace SALES
{
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
	Sales::Sales(const double ar[], int n) {
		for (int i = 0; i < QUARTERS; ++i)
			sales[i] = 0;

		sales[0] = ar[0];
		max = ar[0];
		min = ar[0];
		n = n > QUARTERS ? QUARTERS : n;
		for (int i = 1; i < n; ++i)	{
			sales[i] = ar[i];
			if (ar[i] > max)
				max = ar[i];
			
			if (ar[i] < min)
				min = ar[i];
		}

		double total = 0.0;
		for (int i = 0; i < QUARTERS; ++i) {
			total += sales[i];
		}
		average = total / 4;
	}
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
	void Sales::setSales() {
		using std::cout;
		using std::cin;
		double ar[10];
		int i = 0;

		cout << "Enter sales items:\n";
		for (i = 0; i < 10 && (cin >> ar[i]); ++i) {
			cout << "Next item\n";
		}

		*this = Sales(ar, i);
	}
	// display all information in structure s
	void Sales::showSales() const {
		using std::cout;
		cout << "sales[QUARTERS]:\n";
		for (int i = 0; i < QUARTERS; ++i) {
			cout << sales[i] << " ";
		}
		cout << "\n average: " << average << "\n";
		cout << "\n max: " << max << "\n";
		cout << "\n min: " << min << "\n";
	}
}

int main() {
	using namespace SALES;
	double ar[4] = {1, 2, 3, 4};
	Sales s1 = Sales(ar, 4);
	Sales s2;

	s1.showSales();

	s2.setSales();
	s2.showSales();
	return 0;
}
