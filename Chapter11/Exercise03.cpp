/*Chapter 11 Programming Exercises
3. Modify Listing 11.15 so that instead of reporting the results of a single trial for a
particular target/step combination, it reports the highest, lowest, and average number
of steps for N trials, where N is an integer entered by the user.
*/
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long maxSteps = 0, minSteps = 0;
    double aveSteps = 0.0;
    double target;
    double dstep;
    int N;
    cout << "Enter target distance (q to quit): ";
    if (!(cin >> target)) return 0;
    cout << "Enter step length: ";
    if (!(cin >> dstep))  return 0;
    cout << "Enter trials N: ";
    if (!(cin >> N)) return 0;
	unsigned long stepTrials[N];

    for (int i = 0; i < N; i++)
    {
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        aveSteps += steps;
        if (i == 0)
        {
        	maxSteps = steps;
        	minSteps = steps;
        }
        else
        {
        	maxSteps = steps > maxSteps ? steps : maxSteps;
        	minSteps = steps < minSteps ? steps : minSteps;
        }

        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
    }
    aveSteps /= N;
    cout << "Average number of steps after " << N << " trials: " << aveSteps;
    cout << "\nBye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
