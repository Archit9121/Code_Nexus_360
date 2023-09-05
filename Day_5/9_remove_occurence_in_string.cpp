// Remove occurence of 'a'  from string 'abcax'

/*Approch 
The function takes in the original string, an index and length for the substring to remove. It then recursively builds a new string by skipping over the substring and concatenating the remaining characters together.
*/
#include<iostream>
using namespace std;


string remove_string(string &s,int idx,int n ){
    if(idx==n) return "";
    string current_string = "";
    current_string +=s[idx];
    return ((s[idx] =='a')?"":current_string)+remove_string(s,idx+1,n);
}
int main(){
 string s="abcax";
 int n=5;

 cout<<remove_string(s,0,n);
}