// The API isBadVersion is defined for you.
 // bool isBadVersion(int version);

int firstBadVersion(int n) {
        int ans = n;
        int first =1;
        int last = n;
        while(first<=last){
            int mid = first+((last-first)/2);
            if(isBadVersion(mid)){
                ans = mid;
                last = mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return ans;
}
