#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int *array,int n){
    reverse(array,array+n);
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int array[n];
    cout<<"Enter the element in the array :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    reverse(array,n);

}