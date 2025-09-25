#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void slove(vector<vector<int>>&mat,int &target,int sum,int row,int &mini){
    if(row == mat.size()){
        mini = min (mini,abs(target-sum));
        return;
    }
    for(int col =0 ;col < mat[row].size();col++){
        slove(mat,target,sum + mat[row][col],row + 1 ,mini);
    }
}
int main(){
     vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    int sum =0 , row =0 ,mini = INT_MAX;
    int target = 13;
    slove(mat,target,sum,row,mini);
    cout<<mini<<endl;
    return 0;
    }
