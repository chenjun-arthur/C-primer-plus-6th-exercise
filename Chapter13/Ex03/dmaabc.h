// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMAABC_H_
#define DMAABC_H_
#include <iostream>

// Abstract Base Class
class abcDMA
{
private:
    char * label;
    int rating;
public:
    abcDMA(const char * l = "null", int r = 0);
    abcDMA(const abcDMA & rs);
    virtual ~abcDMA() {}
    virtual abcDMA & operator=(const abcDMA &rs);
    virtual void View() const = 0;
};

//  Base Class Using DMA
class baseDMA : public abcDMA
{
public:
    baseDMA(const char * l = "null", int r = 0) : abcDMA(l, r) {}
    baseDMA(const baseDMA & rs) : abcDMA(rs) {}
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA &rs);
    void View() const;
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public abcDMA
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
              int r = 0);
    lacksDMA(const char * c, const abcDMA & rs);
    void View() const;
};

// derived class with DMA
class hasDMA :public abcDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
              int r = 0);
    hasDMA(const char * s, const abcDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);  
    void View() const;
};

#endif
