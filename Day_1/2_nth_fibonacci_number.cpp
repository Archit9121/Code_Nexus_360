
#include<iostream>
using namespace std;
int fib(int Nth_Number){
    if(Nth_Number==0 || Nth_Number==1) return Nth_Number; //Base case
  
    return fib(Nth_Number-1)+fib(Nth_Number-2);

}
int main (){
    int Number;
    cout<<"Enter the nth number of  fibonacci number:";
    cin>>Number;
    cout<<"Nth fibonacci number of "<< Number << " is: "<<fib(Number);
}