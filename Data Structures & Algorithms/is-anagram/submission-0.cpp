class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int char_counts[26]={0};

        for(int i =0; i<s.size() ; i++){
           char_counts[s[i]-'a']++;
           char_counts[t[i]-'a']--;
        }

        for(int i =0; i<26; i++){
            if(char_counts[i] != 0){
                return false;
            }
        }
        return true;
    

       

    }
};
