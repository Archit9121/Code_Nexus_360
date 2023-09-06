// print the k multiple of the Number
// contraint k>0


#include<iostream>
using namespace std;

void k_multiple(int num, int k ){
    if(num<1 || k<=0) return;
    k_multiple(num,k-1);
    cout<<num*k<<" ";
}

int main() {
    int number , k ;
    cout<<"Enter the number for which multiple is done  :";
    cin>>number;
    cout<<"Enter the  k value :";
    cin>>k;
    k_multiple(number,k);
}