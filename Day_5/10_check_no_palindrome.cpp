
// check whether the no. is palindrome or Not

/*
Approch
1. The function checks if a given number matches the last digit of another integer using recursion.
2. If the number is a single digit, it compares it to the last digit of the other integer.
3. If not, it divides the number by 10 and recursively calls the function, then checks the last digits of both numbers.*/


#include<iostream>
using namespace std;

bool f(int num,int *temp){
    //base case
    if(num >=0 && num <=9){
        int last_digit_of_temp=(*temp)%10;
         *temp /= 10;
        return (num ==last_digit_of_temp);
    }
    bool result=(f(num/10,temp) and (num%10)==((*temp) %10));
     *temp /= 10;
     return result;
}

int main(){
    int num=1881;
    int anothernum = num;
    int *temp =& anothernum;
    cout<<f(num,temp);
    return 0; 
}