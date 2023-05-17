#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#include "druzyna.h"

template<>
class std::greater<Druzyna> {
public:
    bool operator()(const Druzyna& a, const Druzyna& b) const {
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
};

int main() {
    std::vector<Druzyna> liga = {
        {"Druzyna1", 5, 2, 3, 20, 15}, {"Druzyna2", 4, 5, 1, 15, 10},
        {"Druzyna3", 8, 0, 2, 30, 14}, {"Druzyna4", 3, 3, 4, 12, 18},
        {"Druzyna5", 6, 1, 3, 25, 16}, {"Druzyna6", 2, 4, 4, 10, 13},
        {"Druzyna7", 7, 0, 3, 28, 17}, {"Druzyna8", 1, 6, 3, 9, 12},
        {"Druzyna9", 6, 2, 2, 22, 11}, {"Druzyna10", 4, 4, 2, 19, 15}
    };

    std::sort(liga.begin(), liga.end(), std::greater<Druzyna>());
    for (const auto& team : liga)
        std::cout << team << " ";

    return 0;
}
