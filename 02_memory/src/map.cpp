#include "map.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

cppp::Map::Map(const std::size_t size) : size(size) {
    // TODO 2.2.a
    arr = new MapBucket[size];
}

cppp::Map::~Map() {
    // TODO 2.2.a
    delete[] arr;
    arr = nullptr; // to avoid dangling pointer
}

void cppp::Map::insert(const std::string &key, const std::vector<Item> &order) {
    // TODO 2.2.c
    size_t position = calcHash(key);
    size_t currentPos = position;

//    std::vector<MapElement> vector{MapElement{}}; // Initialising an empty vector
    MapElement mapElement{};

    do {
        if (arr[currentPos].empty() || arr[currentPos].at(currentPos).key != key) {

//            vector.at(currentPos).key = key; // positin 0 or size - 1, or currentPos
//            vector.at(currentPos).value = order;
//            arr[currentPos] = vector;

            mapElement.key = key;
            mapElement.value = order;
            this->arr[currentPos].push_back(mapElement); // TODO why is not pushing back the element into the vector ?
            return;

        } else if (arr[currentPos].at(currentPos).key == key) {
            arr[currentPos].at(currentPos).value = order;
            return;
        }
        currentPos = (currentPos + 1) % size; // check the next element in the vector

    } while (currentPos != position);

    throw std::runtime_error("Insertion has failed. Map is already full");
}

std::vector<cppp::Item> cppp::Map::get(const std::string &key) {
    // TODO 2.2.e

    size_t position = calcHash(key);
    size_t currentPos = position;

    do {

        if (arr[currentPos].empty() || arr[currentPos].at(currentPos).key != key) {
            throw std::invalid_argument("Access of the specific value has failed. The key does not exist in the map.");
        } else if (arr[currentPos].at(currentPos).key == key) {
            return arr[currentPos].at(currentPos).value;
        }

    } while (currentPos != position);

    return std::vector<cppp::Item>();
}

void cppp::Map::remove(const std::string &key) {
    // TODO 2.2.d

    size_t position = calcHash(key);
    size_t currentPos = position;


    do {

        if (arr[currentPos].at(currentPos).key == key) {
            arr[currentPos].erase(arr[currentPos].begin() + currentPos); // TODO check this line
        }
        currentPos = (currentPos + 1) % size; // check the next element in the vector

    } while (currentPos != position);

}

std::size_t cppp::Map::calcHash(const std::string &key) {
    // TODO 2.2.b

    size_t sum = 0;
    for (char i : key) {
        sum += i;
    }
    return sum % size;
}
