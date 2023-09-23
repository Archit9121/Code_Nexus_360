#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange_array(int arr[],int n){
    vector<int> ans(n,0);
    int odd_idx=1;int even_idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[even_idx]=arr[i];
            even_idx+=2;
        }
        else{
            ans[odd_idx]=arr[i];
            odd_idx+=2;
        }
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the size of array (Even number only) : ";
    cin>>n;
    if(n%2!=0){
        cout<<"Please enter the even number!";
    }
    int arr[n];
        cout<<"Enter"<<n/2<< " +ve and -ve number in the array : ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

     vector<int> result=rearrange_array(arr,n);
     cout<<"Final, rearrage array  is : ";
     for(auto i:result){
        cout<<i<<" ";
     }   
}
