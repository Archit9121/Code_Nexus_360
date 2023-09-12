#include<iostream>
#include<algorithm>
using namespace std ;
void min_max(int *array,int n){
   sort(array,array+n);
   cout<<"Min element :"<< array[0]<<endl;
   cout<<"Max element :"<<array[n-1];
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
    min_max(array,n);
}