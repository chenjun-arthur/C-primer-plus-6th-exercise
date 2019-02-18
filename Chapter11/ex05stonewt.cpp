// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int lbs, Mode form) {
	mode = form;
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn;
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    if (form == STONE) {
	    stone = stn;
	    pds_left = lbs;
	    pounds =  stn * Lbs_per_stn +lbs;
	} else {
		cout << "Incorrect 3rd argument to Stonewt() --";
		cout << "stonewt set to 0\n";
	    stone = pounds = pds_left = 0;
	    mode = DPOUND;
	}
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = DPOUND;
}

Stonewt::~Stonewt()         // destructor
{
}

Stonewt Stonewt::operator-() const {
	return Stonewt(-pounds, mode);
}

Stonewt Stonewt::operator*(double n) const {
	return Stonewt(pounds * n, mode);
}

Stonewt operator+(Stonewt& st1, Stonewt& st2) {
	return Stonewt(st1.pounds + st2.pounds);
}

Stonewt operator-(Stonewt& st1, Stonewt& st2) {
	return Stonewt(st1.pounds - st2.pounds);
}

Stonewt operator*(double n, Stonewt& stonewt) {
	return Stonewt(n * stonewt.pounds, stonewt.mode);
}

std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt) {
	if (stonewt.mode == Stonewt::STONE)
	{
		cout << stonewt.stone << " stone, " << stonewt.pds_left << " pounds\n";
	} else if (stonewt.mode == Stonewt::DPOUND)	{
		cout << stonewt.pounds << " pounds\n";
	} else if (stonewt.mode == Stonewt::IPOUND)	{
		cout << int (stonewt.pounds + 0.5) << " pounds\n";
	} else {
		cout << "Incorrect mode in Stonewt.\n";
	}
}
