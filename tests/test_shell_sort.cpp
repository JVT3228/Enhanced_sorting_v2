#include "catch.hpp"
#include "shell_sort.cpp"
#include <vector>

TEST_CASE("Shell Sort - Positive cases", "[shell_sort]") {
    std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };
    shellSort(arr);
    REQUIRE(arr == std::vector<int>({ 1, 2, 5, 5, 6, 9 }));

    std::vector<double> arrD = { 3.2, 1.5, 4.8, 2.9 };
    shellSort(arrD);
    REQUIRE(arrD == std::vector<double>({ 1.5, 2.9, 3.2, 4.8 }));
}

TEST_CASE("Shell Sort - Boundary cases", "[shell_sort]") {
    std::vector<int> emptyArr = {};
    shellSort(emptyArr);
    REQUIRE(emptyArr.empty());

    std::vector<int> oneElement = { 42 };
    shellSort(oneElement);
    REQUIRE(oneElement == std::vector<int>({ 42 }));

    std::vector<int> reversed = { 9, 8, 7, 6, 5 };
    shellSort(reversed);
    REQUIRE(reversed == std::vector<int>({ 5, 6, 7, 8, 9 }));
}