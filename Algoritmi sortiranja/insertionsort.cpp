#include <algorithm>

void InsertionSort(int* array, int n) {
    for(int i=1; i<n; i++) {
        for(int j=i; j>0 && array[j]<array[j-1]; j--) {
            std::swap(array[j], array[j-1]);
        }
    }
}