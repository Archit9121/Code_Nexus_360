//union of two sorted arrays
//Time complexity = O(n1+n2)
//Space complexity = O(n1+n2)

#include<iostream>
#include<vector>
using namespace std;
vector <int> sorted_array(int arr1[],int arr2[],int n1,int n2){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(ans.size() ==0 || ans.back()!=arr1[i]){

            ans.push_back(arr1[i]);
            }
            i++;

        }
        else{
             if(ans.size() == 0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
             }
            j++;
        }
    }
    //if arr1 get over  
    while(j<n2){
         if(ans.size() == 0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
             }
            j++;
    }
    //if arr2 get over 
    while(i<n1){
         if(ans.size() == 0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
             }
            i++;
    }

    return ans;
}
int main(){
  int n1,n2;
  cout<<"Enter the size of array 1 and array 2 :";
  cin>>n1>>n2;
  int arr1[n1],arr2[n2];
  cout<<"Enter the element of array 1 in sorted order : ";
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  cout<<"Enter the element of array 2 in sorted order : ";
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }
  
  vector<int> union_arr;
 union_arr= sorted_array(arr1,arr2,n1,n2);
  
  for(int i=0;i<union_arr.size();i++){
    cout<<union_arr[i]<<" ";
  }
}