class WordDictionary {
    unordered_map<int, vector<string>> mp;
public:
    
    WordDictionary() {
    }
    
    void addWord(string word) {
        mp[word.length()].push_back(word);
    }
    bool isSame(string a, string b){
        
        for(int i = 0; i < a.length(); i++){
            if(b[i] == '.')    
                continue;
            if(b[i] != a[i])
                return false;
        }
        return true;
    }
    bool search(string word) {
        int n = word.length();
        
        for(int i = 0; i < mp[n].size(); i++){
            string s = mp[n][i];
            
            if(isSame(s, word))            
                return true;
        }
        
        return false;
    }
};
/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */