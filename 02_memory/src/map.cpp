#include "map.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iostream>


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

    size_t hashPosition = calcHash(key);
    size_t currentPos = 0;

//    std::vector<MapElement> vector{MapElement{}}; // Initialising an empty vector
    MapElement mapElement;

    while (currentPos < arr[hashPosition].size()){

        if (arr[hashPosition].at(currentPos).key == key) {
            arr[hashPosition].at(currentPos).value = order;
            return;
        }
        currentPos ++; // check the next element in the vector
    }
    mapElement.key = key;
    mapElement.value = order;
    arr[hashPosition].push_back(mapElement); // TODO why is not pushing back the element into the vector ?
//            std::cout << &arr[currentPos] ;


}

std::vector<cppp::Item> cppp::Map::get(const std::string &key) {
    // TODO 2.2.e

    size_t hashPosition = calcHash(key);
    size_t currentPos = 0;


    while (currentPos < arr[hashPosition].size()){

        if (arr[hashPosition].at(currentPos).key == key) {
            return arr[hashPosition].at(currentPos).value;
        }
        currentPos ++; // check the next element in the vector
    }

    throw std::invalid_argument("Access of the specific value has failed. The key does not exist in the map.");

}

void cppp::Map::remove(const std::string& key) {
    // TODO 2.2.d

    size_t hashPosition = calcHash(key);

    MapElement empty;
    //arr[hash].erase
    for (const auto& i : arr[hashPosition])
    {
        if (i.key == key){
            arr[hashPosition] = {empty};
        }
    }

}

std::size_t cppp::Map::calcHash(const std::string &key) const {
    // TODO 2.2.b

    size_t sum = 0;
    for (char i : key) {
        sum += i;
    }
    return sum % size;
}


























