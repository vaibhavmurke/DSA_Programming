#include<iostream>
#include<vector>
using namespace std;
void mergesort(int arr1[] ,int size1,int arr2[] ,int size2,vector<int>&output){
    int i =0 ;
    int j =0;
    while(i < size1 && j<size2)
    {
        if(arr1[i] < arr2[j]){
           output.push_back(arr1[i]);
            i++;
        }else {
           output.push_back(arr2[j]);
            j++;
        }
    }

    while(i < size1){
         output.push_back(arr1[i]);
         i++;
    }
    while(j <size2){
        output.push_back(arr2[i]);
        j++;
    }
}
int main(){
    int arr1[] = {10,20,30,40};
    int size1 = 4;
    int arr2[] = { 15,25};
    int size2 = 2;
    vector<int>output;
    mergesort(arr1,size1,arr2,size2,output);
    for(int k =0 ;k<output.size();k++){
        
        cout<<output[k]<<" ";
    }
    
    return 0;
    
}

// class Solution {
// public:
//     void solve (vector<int>&nums1,int m,vector<int>&nums2,int n,vector<int>&ans){
//         int i = 0;
//         int j =0;
//         while(i < m && j <n){
//             if(nums1[i] < nums2[j]){
//                 ans.push_back(nums1[i]);
//                 i++;
//             }else if(nums2[j] < nums1[i]){
//                 ans.push_back(nums2[j]);
//                 j++;
//             }
//         }
//     }
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int>ans;
//         solve(nums1,m,nums2,n,ans);
        
//     }
// };
