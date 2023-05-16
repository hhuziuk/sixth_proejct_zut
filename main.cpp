#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Druzyna {
public:
  string nazwa;
  int wygrane;
  int remisy;
  int przegrane;
  int gole;
  int stracone_gole;

  int licz_punkty() const { return (wygrane * 3) + remisy; }
};

bool sort_team(Druzyna &a, Druzyna &b) {
  if (a.licz_punkty() != b.licz_punkty()) {
    return a.licz_punkty() > b.licz_punkty();
  }
  if (a.wygrane != b.wygrane) {
    return a.wygrane > b.wygrane;
  }
  if (a.przegrane != b.przegrane) {
    return a.przegrane < b.przegrane;
  }
  if (a.gole != b.gole) {
    return a.gole > b.gole;
  }
  return a.stracone_gole < b.stracone_gole;
}

ostream &operator<<(ostream &os, const Druzyna &d) {
  os << d.nazwa << "\t"
     << "\033[1;32m" << d.wygrane << "\033[0m\t" << d.remisy << "\t"
     << "\033[1;31m" << d.przegrane << "\033[0m\t"
     << "\033[1;32m" << d.gole << "\033[0m\t"
     << "\033[1;31m" << d.stracone_gole << "\033[0m\n";
  return os;
}

int main() {

  vector<Druzyna> liga = {
      {"Druzyna1", 5, 2, 3, 20, 15}, {"Druzyna2", 4, 5, 1, 15, 10},
      {"Druzyna3", 8, 0, 2, 30, 14}, {"Druzyna4", 3, 3, 4, 12, 18},
      {"Druzyna5", 6, 1, 3, 25, 16}, {"Druzyna6", 2, 4, 4, 10, 13},
      {"Druzyna7", 7, 0, 3, 28, 17}, {"Druzyna8", 1, 6, 3, 9, 12},
      {"Druzyna9", 6, 2, 2, 22, 11}, {"Druzyna10", 4, 4, 2, 19, 15}};

  sort(liga.begin(), liga.end(), sort_team);
  for (auto team : liga)
    cout << team << " ";
}