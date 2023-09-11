// Given a number n, print the following pattern without using any loop.
//a, a-5, a-10, ..., 0, 5, 10, ..., a-5, n

#include<iostream>
using namespace std;
void pattern_print(int n,int m,bool flag)
{
               cout<<m<<" ";
                // If we are moving back towards n and we have reached there, then we are done
                if (flag == false && n == m)
                        return;
 
                // If we are moving towards 0 or negative.
                if (flag) {
                        // If m is greater, then 5, recur with true flag
                        if (m - 5 > 0)
                                pattern_print(n, m - 5, true);
 
                        else // recur with false flag
                                pattern_print(n, m - 5, false);
                }
 
                else // If flag is false.
                        pattern_print(n, m + 5, false);
}
int main (){
    int n;
    cout<<"Enter the number for to see pattern :";
    cin>>n;

    pattern_print(n,n,true);
}