#include "classic.h"

Classic::Classic(const char* s3, const char* s1, const char* s2,
   int n, double x) : Cd(s1, s2, n, x)
{
    int len3 = std::strlen(s3) + 1;
    works = new char[len3];
    std::strncpy(works, s3, len3);
}

Classic::Classic(const Classic &c) : Cd(c) {
    int len3 = std::strlen(c.works) + 1;
    works = new char[len3];
    std::strncpy(works, c.works, len3);
}

Classic::Classic() : Cd() {
    works = new char[1];
    works[0] = '\0';
}

Classic::~Classic() {
    delete [] works;
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Works: " << works << '\n';
}

Classic& Classic::operator=(const Classic &c) {
    if (this == &c) {
        return *this;
    }
    Cd::operator=(c);
    delete [] works;
    works = new char[std::strlen(c.works) + 1];
    std::strncpy(works, c.works, std::strlen(c.works) + 1);
}