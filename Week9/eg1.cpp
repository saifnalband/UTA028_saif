/*
geneeric bubble Sort
*/
#include <iostream>
using namespace std;
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
template <class T>
void bubbleSort(T a[], int n) { 
    for (int i = 0; i < n - 1; i++) 
        for (int j = n - 1; i < j; j--) 
            if (a[j] < a[j - 1]) 
                swap(a[j], a[j - 1]); 
}
/* Function to print an array */
template <class H>
void printArray(H arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main(){
    //int arr[] = { 15, 10, 54, 21, 80 };
    char arr[] ={'e', 'f', 'a', 'z', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
