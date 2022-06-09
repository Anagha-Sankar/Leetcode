#include<vector>
#include<iostream>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
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
        return start;
}

int main(){
    vector<int> v = {1,3,5,6};
    int t;
    cin>>t;
    cout<<searchInsert(v,t);
    return 0;
}