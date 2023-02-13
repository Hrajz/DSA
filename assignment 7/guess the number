class Solution {
public:
    int guessNumber(int n) {
         int lo = 0, hi = n;
        while (lo <= hi)
        {
            int mid = lo+(hi-lo)/ 2;
            int r = guess (mid);

            if (r == 0) return mid;
			
            else if (r== 1) lo = mid + 1;
			
            else hi = mid - 1;
        }
        
        return -1;
    }

};
