#include<iostream>
using namespace std;
int fac(int n){
    if(n==1){
        return 1;
    }
    int recans = fac(n-1);
    int ans = n*recans;
    return ans ;
}
int main(){
    int n =5;
    int re =fac(n);
    cout<<re<<endl;
    return 0 ;

}
