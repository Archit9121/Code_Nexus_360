//Check whether the number is Armstrong number or not.
/* Approach 
 In the code implementation, i  first count the number of digits in the input "number" using a while loop function. The count is then used as the exponent when calculating the power of each digit in the number.
The power of each digit is calculated using the modulo operator (%) to get the last digit and the integer division operator (/) to remove the digit from the number. This process is repeated for all the digits in the number and the sum of the powers of each digit is returned.
 */
#include<iostream>
#include<math.h>
using namespace std;



int  armstrong(int number,int count){
    if(number==0) return 0;
    return pow(number%10,count)+armstrong(number/10,count);
}
int main (){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    int count=0;
    int temp=number;
    while(temp>0){
        temp/=10;
       count++;
    }
  
 int result=armstrong(number,count);
 if(result==number) {
    cout<<"Yes,it is armstrong number";
 }
 else {
    cout<<"No ,it is not armstrong number";
 }
}