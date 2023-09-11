//Given a number n, check whether it's a prime number or not using recursion.

#include <iostream>
using namespace std;
bool isPrime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    // Check for next divisor
    return isPrime(n, i + 1);
}
 
int main()
{
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   if(isPrime(n,2))
   {
       cout<<"Yes";
   }else{
       cout<<"No";
   }
}