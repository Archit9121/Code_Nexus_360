//Find the incresing sequence from 1 to n without using any loop

#include<iostream>
using namespace std;
 
void inc_seq_num(int n){
    if(n<1) return ;
   
    inc_seq_num(n-1);
    cout<<n<<" ";
}

int main(){
    int number;
    cout<<"Enter the last number up to which number shoud be print :";
    cin>>number;
    inc_seq_num(number);
}