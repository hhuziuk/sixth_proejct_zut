#include "druzyna.h"

int Druzyna::licz_punkty() const { return (wygrane * 3) + remisy; }

std::ostream &operator<<(std::ostream &os, const Druzyna &d) {
  os << d.nazwa << "\t"
     << "\033[1;32m" << d.wygrane << "\033[0m\t" << d.remisy << "\t"
     << "\033[1;31m" << d.przegrane << "\033[0m\t"
     << "\033[1;32m" << d.gole << "\033[0m\t"
     << "\033[1;31m" << d.stracone_gole << "\033[0m\n";
  return os;
}
