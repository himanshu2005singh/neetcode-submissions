#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map banayenge jahan Key: sorted string hogi, Value: anagrams ka vector
        unordered_map<string, vector<string>> anagramMap;
        
        // 1. Har string ko loop karke map me daalein
        for (string s : strs) {
            string sorted_s = s; 
            sort(sorted_s.begin(), sorted_s.end()); // Word ko sort kiya (e.g., "tea" -> "aet")
            
            // Sorted word ko key banakar original word ko list me push kiya
            anagramMap[sorted_s].push_back(s); 
        }
        
        // 2. Map se saare groups nikal kar answer vector me daalein
        vector<vector<string>> ans;
        for (auto pair : anagramMap) {
            ans.push_back(pair.second); // pair.second ka matlab hai anagrams ka vector
        }
        
        return ans;
    }
};