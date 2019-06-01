#include <iostream>
#include <cstring>
#include "port.h"

using std::cout;
using std::endl;
using std::strlen;
using std::strncpy;

Port::Port (const char * br, const char * st, int b)
{
    brand = new char[strlen(br) + 1];
    strncpy(brand, br, strlen(br) + 1);
    strncpy(style, st, 20);
    bottles = b;
}

Port::Port(const Port & p) {
    brand = new char[strlen(p.brand) + 1];
    strncpy(brand, p.brand, strlen(p.brand) + 1);
    strncpy(style, p.style, 20);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
    if (this == &p) {
        return *this;
    }
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strncpy(brand, p.brand, strlen(p.brand) + 1);
    strncpy(style, p.style, 20);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

std::ostream &operator<<(std::ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort() : Port("none", "vintage", 0)
{
    nickname = new char[5];
    strncpy(nickname, "none", 5);
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) :
    Port(br, "vintage", b)
{
    nickname = new char[strlen(nn) + 1];
    strncpy(nickname, nn, strlen(nn) + 1);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strncpy(nickname, vp.nickname, strlen(vp.nickname) + 1);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if (this == &vp) {
        return *this;
    }
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strncpy(nickname, vp.nickname, strlen(vp.nickname) + 1);
    year = vp.year;    
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nick Name: " << nickname << endl;
    cout << "Vintage Year: " << year << endl;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
    os << (Port) vp <<", " << vp.nickname << ", " << vp.year;
    return os;
}