//Intersecetion of two  array 
//Time complexity=O(n1+n2)

#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection_array(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> ans;
    int i=0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
     
    return ans;
}
int main()
{
    int n1, n2;
    cout << "Enter the size of array 1 and array 2 :";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    cout << "Enter the element of array 1 in sorted order : ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the element of array 2 in sorted order : ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> intersec_array;
    intersec_array = intersection_array(arr1, arr2, n1, n2);

    for (int i = 0; i < intersec_array.size(); i++)
    {
        cout << intersec_array[i] << " ";
    }
}