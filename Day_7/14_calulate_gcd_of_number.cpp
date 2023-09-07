// Find the greatest common divisor (gcd) of two number using recursion
// constraint : 0<=x , y<1e6

#include <iostream>
using namespace std;
//Appraoch 1:
/*int gcd(int num_1,int num_2){
    if(num_2>num_1) return gcd(num_2,num_1);
    if(num_2==0) return num_1;
    return gcd(num_2,num_1%num_2);
}*/

//Appraoch 2:
int gcd(int num_1,int num_2){
    if(num_1>num_2) return gcd(num_2,num_1);
    if(num_1==0) return num_2;
    return gcd(num_1,num_2-num_1);
}

int main(){
    int num_1,num_2;
    cout<<"Enter the number 1 : ";
    cin>>num_1;
    cout<<"Enter the number 2 :";
    cin>>num_2;
    cout<<"Gcd of " << num_1 <<" and "<< num_2 << " is :" <<gcd(num_1,num_2);
    }