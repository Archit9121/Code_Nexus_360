//Find the target value x in the array of n 
/* Approach
 In the code implementation, i first count the number of digits in the input "number" using a while loop function. The count is then used as the exponent when calculating the power of each digit in the number.
The power of each digit is calculated using the modulo operator (%) to get the last digit and the integer division operator (/) to remove the digit from the number. This process is repeated for all the digits in the number and the sum of the powers of each digit is returned.
 */

#include<iostream>
using namespace std;
bool check_X(int *array,int x,int idx,int n ){
    if(idx==n) return 0;
    return array[idx]==x || check_X(array,x,idx+1,n);
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int array[n];

    for(int i=0;i<=n;i++){
        cin>>array[i];
    }
    int x;
    cout<<"Enter the value of X to seach in array :";
    cin>>x;
   bool result=check_X(array,x,0,n);
    if (result ==1){
        cout<<"X is present in array";
    }
    else{
        cout<<"X is not present in array";
    }
}