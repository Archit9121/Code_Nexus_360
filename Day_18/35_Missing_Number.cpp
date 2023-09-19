//Find the missing number in the array up to N
/* Approach
 * we,know that a^a=0 and 0^a=a
 *xor1=1^2^3^4^5 (xor1 is xoring the number up to n)
 * xor2=1^2^4^5 (xor2 is xoring the array)*/

//Time complexity =O(n)
//Space complexity =O(1)
#include <iostream>
using namespace std;
int missing_number(int arr[],int n){
    int xor1=0;
    int xor2=0;
    int N=n-1;
    for(int i=0;i<N;i++){
        xor2=xor2^arr[i]; //here, 1^2^4^5
        xor1=xor1^i+1;   //here, 1^2^3^4
    }
    xor1=xor1^n; //last element is left so, it is xor with last element i.e n (finally 1^2^3^4^5)
    return xor1^xor2;
}
int main() {
    int n=5;
    int arr[4]={1,2,4, 5};
    cout<<missing_number(arr,n);


    return 0;
}
