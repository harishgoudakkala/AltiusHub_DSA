#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) left = mid + 1;
        else right = mid -1;
    }
    return -1;
}

int main() {
    int arr[] = {10,12,15,80,46};
    int n = 5;
    int x = 20;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) {cout << x << " is not present in array" ;}
    else {cout << x << " is present at index " << result;}
    return 0;
}

//time Complexity: O(log n)
//worst case scenario: O(log n)
//Space Complexity: O(1)

//First we sort the array to make it easier to search.
//then we find the middle element of the array.
//If the middle element is the required element, we return the index.
//If the middle element is less than the required element, we search in the right half of the
//array.
