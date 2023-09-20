// Find the index of target sum in the array
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> target_sum(int arr[],int n, int target){
map<int,int> mpp;
for(int i=0;i<n;i++){
    int num= arr[i];
    int need=target-num;
    if(mpp.find(need)!= mpp.end()){
        return {mpp[need],i};
    }
    mpp[num]=i;
}
return {-1,-1};
}
int main(){
     int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target sum : ";
    cin >> target;
    vector<int> result = target_sum(arr, n, target);
    for(auto i:result){
      cout<< i <<" ";
    }
}