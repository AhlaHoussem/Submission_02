#include "food.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>

Food::Food(int bestellnummer, std::string bezeichnung, float preis) : bestellnr(bestellnummer), bezeichnung(bezeichnung), preis(preis) {}

std::string Food::getBezeichnung() const {
    return bezeichnung;
}

float Food::getPreis() const {
    return preis;
}

int Food::getBestellnummer() const {
    return bestellnr;
}

void speichern(const std::string& dateiname, const std::vector<Food>& speisen) {
    // TODO
}

void laden(const std::string& dateiname, std::vector<Food>& speisen) {
    // TODO
}
