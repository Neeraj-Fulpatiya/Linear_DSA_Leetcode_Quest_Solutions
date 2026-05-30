from collections import defaultdict
class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dic={}
        found=0
        for i in range(len(nums)):
            if nums[i] in dic.keys():
                one=dic[nums[i]]
                # scnd=i
                dic[nums[i]]=i
                if(abs(i-one))<=k:
                    found=1
                

            else:
                dic[nums[i]]=i
        if(found==1):
            return True
        return False


        