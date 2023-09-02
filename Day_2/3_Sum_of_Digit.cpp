// Find out the sum of digits using recurion 

/* Approach 
-> Start with your integer digit.
-> If it's a single digit (0-9), return it.
-> If not, find the last digit, add it to the sum of the rest.
-> Repeat until all digits are added.
 */

//Time complexity = O(d)
//Space complexity = O(d)  where d=  no. of digit


#include<iostream>
using namespace std;

//Function to calculate the sum of digit
int Sum( int digit){
    if(digit>=0 and digit<=9) return digit;//base case
    return (digit%10)+Sum(digit/10);
}

int main(){
    int digit ;
    cout<<"Enter the digit:";
    cin>>digit;
    cout<< "The sum of "<<digit <<" is : " << Sum(digit);
}
