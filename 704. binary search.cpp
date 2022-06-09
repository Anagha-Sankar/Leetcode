#include<vector>
#include<iostream>
using namespace std;

int search(vector<int>& nums, int target) {
        int end = nums.size()-1;
        int start =0;
        while(start<=end){
            int mid= start+((end-start)/2);
            if (nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        return -1;
}

int main(){
    vector<int> v ={-1,0,3,5,9,12};
    int t;
    cin>>t;
    cout<<search(v,t);
    return 0;
}