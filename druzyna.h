#ifndef DRUZYNA_H
#define DRUZYNA_H

#include <iostream>
#include <string>
using namespace std;

class Druzyna {
public:

string nazwa;
int wygrane;
int remisy;
int przegrane;
int gole;
int stracone_gole;

int licz_punkty() const;
};

ostream &operator<<(ostream &os, const Druzyna &d);

#endif