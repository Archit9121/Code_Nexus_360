// Find the second smallest number in the array
/*Approach 
To solve this problem consider the smallest and second-smallest elements in an array of integers. 
It does this by iterating through the array and updating the variables accordingly. 
If the current element is smallesr than the "smallest" element, update the "second_smallest" to the "smallest" and "smallest" to the current element.
If the current element is not equal to  "smallest" and  smaller than "second_smallest" elements, update "second_smallest" to the current element.*/

//Time complexity =O(n)
//Space complexity=O(1)
#include<iostream>
using namespace std;

int SECOND_SMALLEST(int *a,int n){
    int smallest=a[0];
    int second_smallest=INT16_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<second_smallest){
            second_smallest=a[i];
        }
    }
    return second_smallest;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int s_smallest=SECOND_SMALLEST(array,n);
    cout<<s_smallest;
}
