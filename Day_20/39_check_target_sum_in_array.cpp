// check the target sum is present in the array or not
/*Approach
Two pointer approach*/

#include <iostream>
#include <algorithm>
using namespace std;
bool target_sum(int arr[], int n, int target)
{
    sort(arr, arr+ n);
    int left = 0;
    int right = n - 1;
 
    while (left < right)
    {
            int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return 1;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target sum : ";
    cin >> target;
    bool result = target_sum(arr, n, target);
    if (result == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
