#include "cd.h"

class Classic : public Cd
{
private:
    char * works;
public:
    Classic(const char* s3, const char* s1, const char* s2, int n, double x);
    Classic(const Classic &c);
    Classic();
    ~Classic();
    void Report() const;
    Classic& operator=(const Classic &c);
};