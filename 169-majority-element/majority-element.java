class Solution {
    public int majorityElement(int[] num) {
        
        int count=0;
        int hero=-1;
        for(int i=0;i<num.length;i++)
        {
            if(count==0)hero=num[i];

if(num[i]==hero)count++;
else{
    count--;
}

        }
return hero;
    }
}