#pragma once

#include <string>
#include <vector>

namespace cppp {
    struct Item {
        int anzahl;
        std::string bezeichnung;
    };

    class Map {
    public:
        Map(const std::size_t size);
        Map(const Map& other) = delete; // copy constructor is deleted : no passing by value is possible
        ~Map();

        void insert(const std::string& key, const std::vector<Item>& order);
        std::vector<Item> get(const std::string& key);
        void remove(const std::string& key);

    private:
        const std::size_t size;
        std::size_t calcHash(const std::string& key) const;

        struct MapElement {
            std::string key;
            std::vector<Item> value;
        };
        using MapBucket = std::vector<MapElement>;

        MapBucket* arr;
    };
}
