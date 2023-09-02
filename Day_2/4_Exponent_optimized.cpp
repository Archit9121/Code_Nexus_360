 // Find the value of p^q using recursion

 /* Approach 
->Start with base and exponent.
->If the exponent is even, divide by 2 and square the result.
->If it's odd, subtract 1, divide by 2, and multiply by the base.
-> Repeat until the exponent becomes 0.*/  

 //Time complexity = O(logn)   where n value of exponent
 //space complexity = O(logn) 

/*In the code p=base and q= exponent*/

#include<iostream> 
using namespace std;

// Function to calculate the result 
int power(int base , int exponent){
    if(exponent==0) return 1;//base case
    if(exponent%2==0)// check exponent is even
    {
     int result=power(base,exponent/2);
     return result*result;} 
    else {
    int result=power(base,(exponent-1)/2);
    return base*result*result;
    }

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
