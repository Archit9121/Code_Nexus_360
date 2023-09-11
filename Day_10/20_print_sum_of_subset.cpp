// Print the sum of all subsets of an array.

/* Approach 
To solve the problem iterating through each element in the set, and two recursive calls  is madee  at each position: one to include the current element in the subset being generated, and another to exclude it. The base case of the recursion occurs when the current index reaches the size of the input set, at which point the current sum is added to a vector of final sums.*/

#include<iostream>
#include<vector>
using namespace std;

void sum_subset(int *set,int n, int i,int sum, vector<int> &subset){
    if(i==n){
        subset.push_back(sum);
        return;
    }
    sum_subset(set,n,i+1,sum +set[i],subset);
    sum_subset(set,n,i+1,sum ,subset);
   }
 
int main(){
    int n;
    cout<<"Enter no. of element in set:";
    cin>>n;
    int set[n];
    cout<<"NOw , Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    vector<int> subset;
    sum_subset(set,n,0,0,subset);
    for(int i=0;i<subset.size();i++){
        cout<<subset[i]<<" ";

    }
} 
