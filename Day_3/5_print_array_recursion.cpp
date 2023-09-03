// Find Maximum Element of array using recursion.
/* Approach
-> Initialize with array, index, and size.
->Recursively print elements using a function.
    -> The function prints the element at the current index and moves to the next.
->Terminate when the index is to equals size. */

// Time and space complexity =O(n) where n is the size of the array

#include <iostream>
using namespace std;

// Printing element of array using recursion
void display(int *arr, int idx, int n)
{
    if (idx == n)
        return;               // base case
    cout << arr[idx];         // print the element of array
    display(arr, idx + 1, n); // recursive fucntion
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    display(arr, index, n);
}