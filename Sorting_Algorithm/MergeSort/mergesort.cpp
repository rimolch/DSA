// C++ program for Merge Sort
// time complexity nlogn
#include <iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int ar[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = ar[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = ar[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ar[k] = L[i];
            i++;
        }
        else {
            ar[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        ar[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        ar[k] = R[j];
        j++;
        k++;
    }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int ar[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m = (l+r-1)/2;
    mergeSort(ar,l,m);
    mergeSort(ar,m+1,r);
    merge(ar,l,m,r);
}

// Function to print an array
void printArray(int ar[], int sz)
{
    for (int i = 0; i < sz; i++)
        cout << ar[i] << " ";
}
// Driver code
int main()
{
     int n;
     cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout << "Given array is \n";
    printArray(ar, n);
    mergeSort(ar, 0, n-1);
    cout << "\nSorted array is \n";
    printArray(ar, n);
    return 0;
}
