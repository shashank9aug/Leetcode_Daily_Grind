class Solution{
public:
vector<int> findAnagrams(string s, string p) 
{
    map<char,int>mpp;
    
    for(auto c:p){
        mpp[c]++;        
    }
    
    int count=mpp.size();
    
    vector<int>ans;
    
    int i=0,j=0;
    
    int n=s.length()-1;
    
    int k=p.length(); //window size
    
    while(j<=n)
    {
        if(mpp.find(s[j])!=mpp.end()) //if any character in s matches with the p string character
        {
            mpp[s[j]]--;
            if(mpp[s[j]]==0){
                count--;                
            }
        }
        if(j-i+1==k) //we might get an ans
        {
            if(count==0){
                ans.push_back(i);                
            }
            if(mpp.find(s[i])!=mpp.end())
            {
                mpp[s[i]]++;
                if(mpp[s[i]]==1){
                   count++;                    
                }
            }
            i++;
        }
        j++;
    }
    return ans;
  }
};    