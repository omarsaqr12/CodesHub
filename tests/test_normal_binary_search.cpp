#define CODESHUB_BINARY_SEARCH_NO_MAIN
#include "../C++/normal_binary_search.cpp"

#include <iostream>

int main() {
    const int values[] = {1, 3, 5, 7, 9};
    for (int i = 0; i < 5; ++i) {
        if (normal_binary_search(values, 0, 4, values[i]) != i) return 1;
    }
    if (normal_binary_search(values, 0, 4, -1) != -1) return 2;
    if (normal_binary_search(values, 0, 4, 6) != -1) return 3;
    if (normal_binary_search(values, 0, 4, 10) != -1) return 4;
    if (normal_binary_search(values, 0, -1, 1) != -1) return 5;
    const int repeats[] = {2, 2, 2, 2};
    const int index = normal_binary_search(repeats, 0, 3, 2);
    if (index < 0 || index > 3 || repeats[index] != 2) return 6;
    if (normal_binary_search(values, 2, 4, 1) != -1) return 7;
    std::cout << "PASS: present, absent, empty, duplicates, subrange\n";
}
