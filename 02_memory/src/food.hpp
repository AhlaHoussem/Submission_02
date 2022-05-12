#pragma once

#include <string>
#include <vector>

class Food {
    int bestellnr;
    std::string bezeichnung;
    float preis;

public:
    Food() = delete; // it's no possible to init an obj food by an empty constructor
    Food(int bestellnummer, std::string bezeichnung, float preis);
    int getBestellnummer() const;
    std::string getBezeichnung() const;
    float getPreis() const;
};

void speichern(const std::string& dateiname, const std::vector<Food>& speisen);
void laden(const std::string& dateiname, std::vector<Food>& speisen);
