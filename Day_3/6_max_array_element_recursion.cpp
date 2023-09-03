// Find Maximum Element of array using recursion.
/*Approach
-> Start with array, index, and size.
->Recursively find the maximum element with a function.
    ->Recursive function compares the current maximum with the result of the next recursive call.
->Conclude the recursion when the last index is reached.
*/
// Time and space complexity =O(n) where n is the size of the array

#include <iostream>
using namespace std;

// Apprach 1
/*int display(int *arr,int idx,int n){
   int max=arr[idx];
   if(idx==n-1) return max;
   int nextMax = display(arr, idx + 1, n);
    if (nextMax > max) {
        max = nextMax;
    }*/

//     return max;
// }

// Apprach 2
int display(int *arr, int idx, int n)
{
    if (idx == n - 1) // base case
    {
        return arr[idx]; // only one element is left, so it is maximum
    }
    return max(arr[idx], display(arr, idx + 1, n));
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
    int result = display(arr, index, n);
    cout << "ans Is" << result;
}