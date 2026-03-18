class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x-1;
        int m = s + (e-s)/2;
        int ans = -1;
        if(x==0) return 0;
        if(x==1) return 1;
        while(s<=e){
            long long square = 1LL * m * m;
            if(square == x){
                return m;
            }
            else if(square>x){
                e=m-1;
            }
            else{
                ans = m;
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return ans;
    }
};