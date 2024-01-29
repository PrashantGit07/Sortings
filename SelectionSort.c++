#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        //considerd first element as the minimum 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                //if any further element is smaller than minimum index value
                //update the index
                minIndex = j;
            }
        }
        //till here , we found the minimum index for i=0;
        //now value at minimum inde will be swapped by the value at current index of i

        swap(arr[minIndex], arr[i]);
        //similarly now next iteration will be for i=1 and so on....
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


//use cases of selection sort algorithm
/*
- Selection Sort Algorithm can be used when memory space is limited. It works by repeatedly finding the minimum element from unsorted part and putting it at the beginning. The algorithm maintains two subarrays
1. Selection Sort Algorithm can be used when memory space is limited or we need to sort an unsorted array in which all items are same. It has a time complexity of O(n^2
Use case #1: Selection Sort Algorithm can be used when memory space is limited. It has a time complexity of O(n^2) which makes it inefficient on large lists compared to other
5
4 2 7 1 3
Output: The sorted array is: 1 2 3 4 7
8
9 6 5 1 7 3 8 2
Output: The sorted array is: 1 2 3 5 6 7 8 9
*/


 
