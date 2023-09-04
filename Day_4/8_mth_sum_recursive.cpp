// Find m-th summation of first n natural numbers

/*
Appraoch used
If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
Else :SUM(n, 1) = Sum of first n natural numbers.

Step 1️⃣: I created a function that takes in the values of m and n as parameters, and implemented the recursive logic to compute the summation.
 By repeatedly finding the summation of the previous summation, my function calculates the desired mth summation.*/

//Time complexity =O()


#include<iostream>
using namespace std;


int mth_summation(int n, int m){
    if(m==1) return (n*(n+1))/2;
    int sum=mth_summation(n,m-1);
    return sum*(sum+1)/2;

}

int main (){
    int m,n;
    cout<<"Enter the mth value for summation :";
    cin>>m;
    cout<<"Enter the first n natural number to  get sum : ";
    cin>>n;
    int result= mth_summation(n,m);
    cout<<result;
}