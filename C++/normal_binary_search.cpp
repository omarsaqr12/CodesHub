// Binary search in an ascendingly sorted array. Caller supplies valid inclusive
// indices into the array; for an empty array, use low=0 and high=-1.
// If values repeat, any matching index may be returned.
#include <iostream>

int normal_binary_search(const int arr[], int low, int high, int target) {
    while (low <= high) {
        const int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

#ifndef CODESHUB_BINARY_SEARCH_NO_MAIN
int main() {
    const int sorted_values[] = {1, 3, 5, 7, 9};
    const int target = 7;
    std::cout << "Target " << target << " found at index "
              << normal_binary_search(sorted_values, 0, 4, target) << '\n';
}
#endif
