class Solution {
    public int numRescueBoats(int[] p, int limit) {
        
        int end=p.length-1;
        int str=0;
        Arrays.sort(p);
int boats=0;
        while(str<=end){
boats++;

if(p[str]+p[end]<=limit){
    str++;
    end--;
}else
end--;
        }
        return boats;
    }
}