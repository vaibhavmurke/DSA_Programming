#include<iostream>
using namespace std;
void PrintAllPermutation(string &s,int i){
    //base case
    if(i >= s.length()){
        cout<<s<<endl;
        return;
    }
    //1 case slove karege 
    for(int j = i;j<s.length();j++ ){
        swap(s[i],s[j]);
        PrintAllPermutation(s,i+1);
         swap(s[i],s[j]);
    }
    //note : jar call by refereance ahe ta time la backtracing use karach due to same copy madhe modified
}
int main(){
    string  s = "abc";
    int i =0 ;
    PrintAllPermutation(s,i);
    return 0;
}
