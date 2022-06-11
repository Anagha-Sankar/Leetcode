#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int ans = 0;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid!=0){
                //return peak element
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    ans = mid;
                    break;
                }
                // Upward slope
                if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                    start = mid+1;
                }
                // Downward slope
                if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
                    end = mid-1;
                }
            }
            if(mid==0){
                if(arr[mid]<arr[mid+1]){
                    return mid+1;
                }
                else{
                    return mid;
                }
            }
        }
        return ans;
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout << peakIndexInMountainArray(v);
    return 0;
}