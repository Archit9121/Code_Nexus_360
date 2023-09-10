// Print the sum of all subsets of an array .

#include<iostream>
#include<vector>
using namespace std;

void sum_substring(int *set,int n, int i,int sum, vector<int> &substring){
    if(i==n){
        substring.push_back(sum);
        return;
    }
    sum_substring(set,n,i+1,sum +set[i],substring);
    sum_substring(set,n,i+1,sum ,substring);
    

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
    vector<int> substring;
    sum_substring(set,n,0,0,substring);
    for(int i=0;i<substring.size();i++){
        cout<<substring[i]<<" ";

    }
} 
