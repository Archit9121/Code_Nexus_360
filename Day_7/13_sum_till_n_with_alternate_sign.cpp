// Find the sum of natural number till n but with alternate sign
//constraint : 0<n<1e6


#include<iostream>
using namespace std;

//Approach 1:
/*void sum_n_alter_sign(int n){
    if(n<1) return;
    static int   sum_even=0;// by using static variable the value of sum_even is not reinitialized
    static int   sum_odd=0;
    if(n%2==0){
        sum_even=sum_even+n;
    }
    else{
        sum_odd=sum_odd+n;
    }
    sum_n_alter_sign(n-1);
    if(n==1){
        cout<<sum_odd-sum_even;
    }
   
    
}*/

//Approach 2:
int sum_n_alter_sign(int n){
    if(n==0) return 0;
    return sum_n_alter_sign(n-1)+((n%2==0)?-n:n);
}


int main (){
    int number;
    cout<<"Enter the number till sum is calculated with alternate sign :";
    cin>>number;
    cout<<sum_n_alter_sign(number);

}