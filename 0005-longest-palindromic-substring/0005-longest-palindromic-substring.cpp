class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            int left=i;
            int right=i;
            while(left>=0&&right<n&&s[left]==s[right]){
                if(maxLen<right-left+1){
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
            left=i;
            right=i+1;
            while(left>=0&&right<n&&s[left]==s[right]){
                if(maxLen<right-left+1){
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxLen);
    }
};