//不能用low+hight，因為會over flow
//比較粗暴的解決方法是直接改成 long long int
//low =1 n=2126753390, mid =1063376695, mid < bad ,low = mid+1
//low-1063376696, hight=2126753390 算mid = (low +hight)/2時就會溢位
class Solution {
public:
    int firstBadVersion(int n) {
       int hight = n,low = 1;
       int mid = 0;
       while(low < hight)
       {
           mid = low+(hight - low )/2;
           if(isBadVersion(mid))
           {
               hight = mid;
           }
           else
           {
               low = mid +1;
           }
       }
       return hight;
    }
};
