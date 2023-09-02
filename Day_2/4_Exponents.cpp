// Find the value of p^q using recursion
/* Approach 
->Start with base and exponent.
->Multiply the base number recursively by itself while successively reducing the exponent.
->Repeat this process until the exponent becomes 0.*/  

//Time complexity=O(q) where q value of exponent
//Space Complexity=O(q)

/*In the code p=base and q= exponent*/

#include<iostream> 
using namespace std;

// Function to calculate the power
int power(int base , int exponent){
    if(exponent==0) return 1; //base case
    return base* power(base,exponent-1);
}
int main(){
    int base ;
    int exponent ;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>exponent;
    cout<<base << " raise to the power of "<< exponent << " is : " << power(base,exponent);
}
