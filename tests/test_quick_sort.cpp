#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "quick_sort.cpp"
#include <vector>

TEST_CASE("Quick Sort - Positive cases", "[quick_sort]") {
    std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };
    quickSort(arr, 0, arr.size() - 1);
    REQUIRE(arr == std::vector<int>({ 1, 2, 5, 5, 6, 9 }));

    std::vector<double> arrD = { 3.2, 1.5, 4.8, 2.9 };
    quickSort(arrD, 0, arrD.size() - 1);
    REQUIRE(arrD == std::vector<double>({ 1.5, 2.9, 3.2, 4.8 }));
}

TEST_CASE("Quick Sort - Boundary cases", "[quick_sort]") {
    std::vector<int> emptyArr = {};
    quickSort(emptyArr, 0, emptyArr.size() - 1);
    REQUIRE(emptyArr.empty());

    std::vector<int> oneElement = { 42 };
    quickSort(oneElement, 0, oneElement.size() - 1);
    REQUIRE(oneElement == std::vector<int>({ 42 }));

    std::vector<int> reversed = { 9, 8, 7, 6, 5 };
    quickSort(reversed, 0, reversed.size() - 1);
    REQUIRE(reversed == std::vector<int>({ 5, 6, 7, 8, 9 }));
}