#include <algorithm>

void QuickSort(int* array, int n) {
    if(n<=1) return;

    int pivot=array[n/2], left=0, right=n-1;

    while (left<=right) {
        while (array[left]<pivot) left++;
        while (array[right]>pivot) right--;

        if (left<=right) {
            std::swap(array[left++], array[right--]);
        }
    }

    QuickSort(array, right+1);
    QuickSort(array+left, n-left);
}