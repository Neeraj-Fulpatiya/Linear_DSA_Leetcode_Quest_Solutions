class Solution {
    public double average(int[] salary) {
        int n=salary.length;
        int sum=0;
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
min=Math.min(min,salary[i]);
max=Math.max(max,salary[i]);
sum=sum+salary[i];
        }
        
        return (double)(sum-min-max)/(n-2);
    }
}