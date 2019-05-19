// dma.cpp --dma class methods

#include "dmaabc.h"
#include <cstring>

// abcDMA methods
abcDMA::abcDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strncpy(label, l, std::strlen(l) + 1);
    rating = r;
}

abcDMA::abcDMA(const abcDMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strncpy(label, rs.label, std::strlen(rs.label) + 1);
    rating = rs.rating;
}

abcDMA::~abcDMA()
{
    delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strncpy(label, rs.label, std::strlen(rs.label) + 1);
    rating = rs.rating;
    return *this;
}

void abcDMA::View() const {
    std::cout << "Label: " << label << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

// baseDMA methods
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
        return *this;
    abcDMA::operator=(rs);
    return *this;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : abcDMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const abcDMA & rs)
    : abcDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const {
    abcDMA::View();
    std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
         : abcDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strncpy(style, s, std::strlen(s) + 1);
}

hasDMA::hasDMA(const char * s, const abcDMA & rs)
         : abcDMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strncpy(style, s, std::strlen(s) + 1);
}

hasDMA::hasDMA(const hasDMA & hs)
         : abcDMA(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strncpy(style, hs.style, std::strlen(hs.style) + 1);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    abcDMA::operator=(hs);  // copy base portion
    delete [] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strncpy(style, hs.style, std::strlen(hs.style) + 1);
    return *this;
}

void hasDMA::View() const {
    abcDMA::View();
    std::cout << "Style: " << style << std::endl;
}
