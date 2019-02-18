// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
    enum Mode {STONE, IPOUND, DPOUND};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Mode mode;
public:
    Stonewt(double lbs, Mode form = DPOUND);          // constructor for double pounds
    Stonewt(int lbs, Mode form = IPOUND); 
    Stonewt(int stn, double lbs, Mode form = STONE); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void stoneMode() { mode = STONE;}
    void dpoundMode() { mode = DPOUND;}
    void ipoundMode() { mode = IPOUND;}

    Stonewt operator-() const;
    Stonewt operator*(double n) const;

    friend Stonewt operator+(Stonewt& st1, Stonewt& st2);
    friend Stonewt operator-(Stonewt& st1, Stonewt& st2);
    friend Stonewt operator*(double n, Stonewt& stonewt);
    friend std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt);
};
#endif
