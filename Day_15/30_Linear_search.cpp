//Linear Search
//Time complexity O(n)
//Space complexity O(1)
#include<iostream>
using namespace std;
void linear_search(int a[],int s,int n){
for(int i=0;i<n;i++){
    if(a[i]==s){
        cout<<"Element found  ";
        break;
    }
else{
cout<<"Not found ";
}
}

}
int main(){
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int s;
    cout<<"Enter the search element : ";
    cin>>s;
    int array[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    linear_search(array,s,n);
}