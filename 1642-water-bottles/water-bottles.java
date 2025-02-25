class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            int formed=numBottles/numExchange;
            int left=numBottles%numExchange;
            ans+=formed;

            numBottles=formed+left;
        }
        return ans;
    }
}