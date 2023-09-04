#include<iostream>
using namespace std;

int sum(int *array,int idx, int n ){
    if(idx==n-1) //base case
     {  
         return array[n-1]; //last element of array
     } 
    return array[idx]+sum(array,idx+1,n);   
}
int main(){
 int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   cout<<"The sum of  element of array is : " << sum(arr,0,n); 
}