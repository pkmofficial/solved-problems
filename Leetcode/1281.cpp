class Solution {
public:
    int subtractProductAndSum(int n) {
        
       // cin >> n;
        int digit=0,sum=0,product=1;
        
        while ( n != 0 ) {
            digit=n%10;
            
            sum = sum + digit;
            product = product * digit;
            
            n=n/10;
        }
        int ans= product-sum;
        return ans;
    }
};