#include <iostream>
#include <cstring>

class Cd
{
private:
    char* performers;
    char* label;
    int selections;
    double playtime;
public:
    Cd(const char* s1, const char* s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd& operator=(const Cd &d);
};