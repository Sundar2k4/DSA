class Solution {
    public int subarraySum(int[] nums, int k) {
        int sum = 0;
        int count = 0;
        HashMap<Integer, Integer> hashh = new HashMap<>();
        
       
        hashh.put(0, 1);
        
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            
            if (hashh.containsKey(sum - k)) {
                count += hashh.get(sum - k);
            }
            hashh.put(sum, hashh.getOrDefault(sum, 0) + 1);
        }
        
        return count;
    }
}
