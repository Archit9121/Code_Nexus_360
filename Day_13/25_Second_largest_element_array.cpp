// Find the second largerst number in the array
/*Approach 
To solve this problem consider the largest and second-largest elements in an array of integers. 
It does this by iterating through the array and updating the variables accordingly. 
If the current element is greater than the "largest" element, update the "second_largest" to the "largest" and "largest" to the current element.
If the current element is between "largest" and "second_largest" elements, update "second_largest" to the current element.
*/
// Time complexity =O(n)
// Space complexity=O(1)

#include<iostream>
using namespace std;

int SECOND_LARGEST(int *a,int n){
    int largest=a[0];
    int second_largest=INT16_MIN;
    for(int i=1 ;i<n;i++){
        if(a[i]>largest){
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>second_largest){
            second_largest=a[i];

        }
    }
        
        return second_largest;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];

    }

    int s_largest=SECOND_LARGEST(array,n);
    cout<<s_largest;
}