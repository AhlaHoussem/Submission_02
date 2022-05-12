#include "map.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

cppp::Map::Map(const std::size_t size) : size(size) {
    // TODO 2.2.a
    arr = new MapBucket [size];
}

cppp::Map::~Map() {
    // TODO 2.2.a
    delete[] arr;
    arr = nullptr; // to avoid dangling pointer
}

void cppp::Map::insert(const std::string& key, const std::vector<Item>& order) {
    // TODO 2.2.c
    size_t index = calcHash(key);
    size_t currentPos = index;

    MapElement mapElement = {};

    do {
        if (arr[currentPos].empty()) {
            mapElement.key =  key;
            mapElement.value =  order;
            arr[currentPos].push_back(mapElement);
            return;
        } else if (arr[currentPos].key == key) { // TODO Hamdi : how to access the key of the MapElement
            arr[currentPos].value = order;
            return;
        }
        currentPos = (currentPos + 1) % size;
    }
    while (currentPos != index);

    throw std::runtime_error("could not insert item. map is full.");
}

std::vector<cppp::Item> cppp::Map::get(const std::string& key) {
    return {}; // TODO
}

void cppp::Map::remove(const std::string& key) {
    // TODO 2.2.d


}

std::size_t cppp::Map::calcHash(const std::string& key) {
    // TODO 2.2.b

    size_t sum = 0;
    for (char i : key) {
        sum += i;
    }
    return sum % size;
}
