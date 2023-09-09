/* There are N stone number 1,2,3....N. For each i (1<i<=N), the height of stone i is hi(read as h of ith).There is a frog who id initially on  stone 1. He will repeat the follwing action. some number of times to reach stone N .
If the frog is currently on stone i , jump to stone i+1 or stone i+2. Here, a cost of |hi - hj| is incurred, where j is the stone to land on . Find the minimum possible total codt incurred before the frog reaches stone N.*/ 

/* Approach 
In the code  i  uses the  recursion to calculate the minimum cost required  by frog to reach the end , starting from the first element. It recursively calculates the cost of moving either one or two steps from the current position 'i', by adding the absolute difference between the current element and the element at the new position. If the current index 'i' is equal to 'n-1', the cost is zero, and the function returns. If it is equal to 'n-2', then it is only possible to skip one element and move to the last element. The function makes a recursive call with 'i+1' to calculate the cost of moving one step. Then the function returns the minimum cost value out of two recursive calls – one that moves one step and one that moves two steps – with updated indices of 'i+1' and 'i+2', and the absolute differences between the current element and the respective chosen elements.*/

#include<iostream>
using namespace std;

int min_cost(int *h,int i,int n){
 if(i==n-1) return 0;
 if(i==n-2)return min_cost(h,i+1,n)+ abs(h[i]-h[i+1]);
 return min(min_cost(h,i+1,n)+abs(h[i]-h[i+1]),min_cost(h,i+2,n)+abs(h[i]-h[i+2]));
}
int main(){
    int n;
    cout<<"Enter the number of stone :";
    cin>>n;
    int height_of_stone[n];
    for(int i=0;i<=n;i++){
        cin>>height_of_stone[i];
    }
    cout<<  min_cost (height_of_stone,0,n);
}