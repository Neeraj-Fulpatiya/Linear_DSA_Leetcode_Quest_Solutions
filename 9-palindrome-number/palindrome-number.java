class Solution {
    public boolean isPalindrome(int x) {
        int n=x;

        if(x<0)return false;

String s=String.valueOf(x);

String temp="";

for(int i=s.length()-1;i>=0;i--){
  temp= temp + s.charAt(i);
}

if(temp.equals(s))return true;

return false;

    }
}