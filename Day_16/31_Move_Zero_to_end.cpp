//Move all zero to the end of the array
#include<iostream>
#include<algorithm>
using namespace std;
int Move_zero(int *a,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int Zero=Move_zero(array,n);
    cout<<"Printing the final solution : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}