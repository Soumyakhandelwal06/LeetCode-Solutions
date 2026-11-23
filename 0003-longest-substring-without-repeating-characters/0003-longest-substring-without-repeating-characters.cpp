class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt=0;
        int n=s.size();
        unordered_map<char,int>freq;
        int left=0;
        for(int right=0;right<n;right++){
            freq[s[right]]++;
                while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            cnt=max(cnt,right-left+1);
        }
        return cnt;
    }
};