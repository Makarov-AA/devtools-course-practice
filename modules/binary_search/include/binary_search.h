// Copyright 2021 Makarov Alexander

#ifndef MODULES_BINARY_SEARCH_INCLUDE_BINARY_SEARCH_H_
#define MODULES_BINARY_SEARCH_INCLUDE_BINARY_SEARCH_H_

#include <vector>

namespace binary_search {

    template <typename T>
    int BinSearch(T key, std::vector<T> array, int left, int right) {
        if (left < 0 || left >= static_cast<int>(array.size()))
            throw "Left border out of range";
        if (right < 0 || right >= static_cast<int>(array.size()))
            throw "Right border out of range";
        if (right < left)
            throw "Right border must be greater than left border";
        int middle;
        bool flag = false;
        while (left <= right && !flag) {
            middle = (left + right) / 2;
            if (array[middle] == key)
                flag = true;
            else if (array[middle] > key)
                right = middle - 1;
            else
                left = middle + 1;
        }
        return flag ? middle : -1;
    }

}  // namespace binary_search

#endif  // MODULES_BINARY_SEARCH_INCLUDE_BINARY_SEARCH_H_
