#include "cd.h"

Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';

    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
    delete [] performers;
    delete [] label;
}

Cd::Cd(const char* s1, const char* s2, int n, double x) {
    int len1 = std::strlen(s1) + 1;
    performers = new char[len1];
    std::strncpy(performers, s1, len1);
    int len2 = std::strlen(s2) + 1;
    label = new char[len2];
    std::strncpy(label, s2, len2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    int len1 = std::strlen(d.performers) + 1;
    performers = new char[len1];
    std::strncpy(performers, d.performers, len1);
    int len2 = std::strlen(d.label) + 1;
    label = new char[len2];
    std::strncpy(label, d.label, len2);
    selections = d.selections;
    playtime = d.playtime;
}

Cd& Cd::operator=(const Cd &d) {
    if (this == &d) {
        return *this;
    }
    delete [] performers;
    delete [] label;
    int len1 = std::strlen(d.performers) + 1;
    performers = new char[len1];
    std::strncpy(performers, d.performers, len1);
    int len2 = std::strlen(d.label) + 1;
    label = new char[len2];
    std::strncpy(label, d.label, len2);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

void Cd::Report() const {
    std::cout << "Performers " << performers << '\n';
    std::cout << "Label " << label << '\n';
    std::cout << "Selections " << selections << '\n';
    std::cout << "Playtime " << playtime << '\n';
}