class Solution {
    public boolean isPalindrome(int x) {
        int n=x;

        if(x<0)return false;
int ans=0;
int pro=1;
while(n>0){
    int rem=n%10;
    ans=10*ans+rem;
    // pro*=10;
    n/=10;

}
if(ans==x)return true;
return false;
    }
}