class Solution {
public:
   // Aapka banaya hua isAnagram function (Bilkul Sahi)
   bool isAnagram(string s1 , string s2){
     int n1 = s1.size();
     int n2 = s2.size();
     if(n1 != n2) return false;

     int charCount[26] = {0};
     for(int i = 0; i < n1; i++ ){
        charCount[s1[i]-'a']++;
        charCount[s2[i]-'a']--;
     }
     for(int i = 0; i < 26 ; i++){
        if(charCount[i] != 0) return false;
     }
     return true;
   }

   vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        
        // Yeh track rakhega ki kaunsa word group ho chuka hai
        vector<bool> visited(n, false); 
        
        // Nested Loops (Brute Force)
        for(int i = 0; i < n; i++) {
            // Agar strs[i] pehle hi kisi group me ja chuka hai, toh skip karo
            if(visited[i]) continue; 
            
            vector<string> temp;
            temp.push_back(strs[i]); // Pehla word group me daala
            visited[i] = true;       // Use visited mark kiya
            
            // Ab i ke aage ke saare words check karo
            for(int j = i + 1; j < n; j++) {
                if(!visited[j] && isAnagram(strs[i], strs[j])) {
                    temp.push_back(strs[j]); // Anagram mil gaya toh group me daalo
                    visited[j] = true;       // Use bhi visited mark karo
                }
            }
            
            // Poora group banne ke baad final answer me daal do
            ans.push_back(temp);
        }
        
        return ans;
   }
};