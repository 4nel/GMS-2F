#include <algorithm>

void BubbleSort(int* array, int n) {
    for(int i=0; i<n; i++) 
        for(int j=i+1; j<n; j++) 
            if(array[i]>array[j]) std::swap(array[i], array[j]);
}
