class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];

        HashMap<Integer, Integer> index = new HashMap<Integer, Integer>();
        
        for (int i = 0; i < nums.length; i ++) 
        {
            if (index.containsKey(target - nums[i])) 
            {
                result[0] = index.get(target - nums[i]);
                result[1] = i;
                return result;
            }
            index.put(nums[i], i);
        }
        return result;
        
    }
}
