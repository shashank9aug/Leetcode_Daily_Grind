class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
        
        int n = mat.size();
        
        set<pair<int,int> > s;
            
        for(int i = 0; i<n; ++i)
        {
            // stl function for counting frequency of 1 in current row
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            
            s.insert({cnt,i});
        }
        
        vector<int> ans;
        // first k weakest row is our answer 
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            k-=1;
        }
        
        return ans;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        return Weakest(mat,k);
        
    }
};