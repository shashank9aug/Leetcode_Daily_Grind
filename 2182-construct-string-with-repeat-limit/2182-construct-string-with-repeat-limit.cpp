// class Solution {
// public:
//     string repeatLimitedString(string s, int k) {
//         int i = 0;
//         while(i<s.length()){
//             char ch = s[i];
//             int count = 0;
//             while(s[i]==ch){
//                 // if(s[i]==ch){
//                     count+=1;
//                 // }
//                 if(count>k){
//                     s.erase(i);
//                 }
//                 i++;
//             }
//         }
//         sort(s.begin(),s.end(),greater<char>());
//         while(i<s.length()){
//             char ch = s[i];
//             int count = 0;
//             while(s[i]==ch){
//                 // if(s[i]==ch){
//                     count+=1;
//                 // }
                
//                 if(count>k){
//                     repeatLimitedString(s,k);
//                 }
//                 i++;
//             }
//         }
        
//         return s;
//     }
// };

class Solution {
public:
    string repeatLimitedString(string s, int limit) {
        int cnt[26] = {};
        string ans;
        for (char c : s) cnt[c - 'a']++;
        while (true) {
            int i = 25;
            bool onlyOne = false;
            for (; i >= 0; --i) {
                if (ans.size() && i == ans.back() - 'a' && cnt[i]) 
                { 
                    // the character of our last batch still has some count left, so we only insert a single character in this batch
                    onlyOne = true;
                    continue;
                }
                if (cnt[i]) 
                    break; 
                // found a character with positive count, fill with this character
            }
            if (i == -1) 
                break; 
            // no more characters to fill, break;
            int fill = onlyOne ? 1 : min(cnt[i], limit);
            cnt[i] -= fill;
            while (fill--) 
                ans += 'a' + i;
        }
        return ans;
    }
};