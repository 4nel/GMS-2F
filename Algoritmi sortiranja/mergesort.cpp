
void MergeSort(int* array, int n) {
    if(n<=1) return;

    int new_array[n], half=n/2, k=0, pointerLeft=0, pointerRight=half;

    MergeSort(array, half);
    MergeSort(array+half, n-half);

    while(pointerLeft<half && pointerRight<n) {
        if(array[pointerLeft]<=array[pointerRight]) {
            new_array[k++]=array[pointerLeft++];
        }else {
            new_array[k++]=array[pointerRight++];
        }
    }

    while(pointerLeft<half) new_array[k++]=array[pointerLeft++];
    while(pointerRight<n) new_array[k++]=array[pointerRight++];
    
    for(int i=0; i<n; i++) array[i]=new_array[i];
}