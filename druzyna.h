#ifndef DRUZYNA_H
#define DRUZYNA_H

#include <iostream>
#include <string>

class Druzyna {
public:
  std::string nazwa;
  int wygrane;
  int remisy;
  int przegrane;
  int gole;
  int stracone_gole;

  int licz_punkty() const;
};

bool operator>(const Druzyna &a, const Druzyna &b);

std::ostream &operator<<(std::ostream &os, const Druzyna &d);

#endif