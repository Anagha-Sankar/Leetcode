#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int ans = 0;
        while(start<=end){
            int mid = (start+end)/2;
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
        return ans;
    }
int main() {
    // Write C++ code here
    vector<int> v =  {3,5,3,2,0};
    std::cout << peakIndexInMountainArray(v);
    return 0;
}