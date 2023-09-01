#include<iostream>
using namespace std;

int fact( int Number){
    if(Number==1)   //Base case 
    return 1;
    int result= Number*fact(Number-1);
    return result;
}
int main(){
    int Number ;
    cout<<"Enter the Number:";
    cin>>Number;
    cout<< "The factorial of "<<Number <<"is " << fact( Number);
    }