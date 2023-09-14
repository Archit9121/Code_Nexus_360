#include<iostream>
using namespace std ;
bool check_sorted(int *a,int n){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else {
            return false;
        }
    }
        return true;
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
    cout<< check_sorted(array,n);

}