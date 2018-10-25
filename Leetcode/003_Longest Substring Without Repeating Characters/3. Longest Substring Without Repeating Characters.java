
// java

class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        if(s.length() == 0) return 0;
        
        HashMap<Character, Integer> map = new HashMap<Character,Integer>();
        int max = 0;
        int j = 0;
        int i = 0;
        for (i=0; i<s.length(); i++){
            
            if(map.containsKey(s.charAt(i))){
                // abba的情况
                j = Math.max(j,map.get(s.charAt(i))+1);

            }
            map.put(s.charAt(i),i);
            max = Math.max(max,i-j+1);
            
        }
        return max;
    }
}