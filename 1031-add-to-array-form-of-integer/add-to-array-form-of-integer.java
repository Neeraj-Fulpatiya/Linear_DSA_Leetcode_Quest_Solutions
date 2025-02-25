class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer>ans=new ArrayList<>();

        int carry=0;
int n =num.length;
int i=n-1;
// int num=0;

        while(i>=0 ){
            int rem=k%10;
            k/=10;
            int last=num[i];
            i--;
           int sum=rem+last+carry;
carry=sum/10;
        //    int val=sum+carry;
           ans.add(sum%10);
           carry=sum/10;


        }
        while(k>0){
            int val=k%10+carry;
            carry=val/10;
            ans.add(val%10);
            k/=10;
        }
        while(carry>0){
            ans.add(carry);
            carry/=10;
           }
Collections.reverse(ans);
    return ans;
    }
}