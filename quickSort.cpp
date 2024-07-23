#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j=low; j<=high-1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
    return;
}

void printArray(int arr[], int size) {
    cout << "Sorted array: ";
    for (int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return ;
}

int main() {
    int arr[] = {15,12,17,56,91};
    int n = 5;
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}

//average time complexity: O(n log n)
//worst case scenario: O(n^2)
//space complexity: O(log n)

//Divide and conquer algorithm that is based on the divide-and-conquer strategy.
//here we repeatedly divide the problem into smaller subproblems until it reaches the base case. Then we solve each subproblem and combine them to
//form the final solution.

