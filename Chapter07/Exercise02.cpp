/*
Chapter 7 Programming Exercises
2. Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.
*/
#include <iostream>
using namespace std;

int arrayInput(double [], int limit);
void arrayDisplay(const double [], int size);
void arrayAverage(const double [], int size);

int main()
{
	const int limit = 10;
	double golfScore[limit] = {0};
	int n = 0;

	n = arrayInput(golfScore, limit);
	arrayDisplay(golfScore, n);
	arrayAverage(golfScore, n);
}

int arrayInput(double score[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; ++i)
	{
		cout << "Enter score # " << (i + 1) << ": ";
		cin >> temp;
	
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input, input process terminated. \n";
			break;
		}
		else if (temp < 0)
			break;

		score[i] = temp;
	}
	return i;
}


void arrayDisplay(const double score[], int size)
{
	cout << "Scores: ";
	for (int i = 0; i < size; ++i)
	{
		cout << score[i] << ' ';
	}
	cout << endl;
}

void arrayAverage(const double score[], int size)
{
	double total = 0;
	for (int i = 0; i < size; ++i)
	{
		total += score[i];
	}
	cout << "Average = " << total / size << endl;
}