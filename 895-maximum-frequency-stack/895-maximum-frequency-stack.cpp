class FreqStack {
public:
    unordered_map<int,stack<int>>freqGroup;
    unordered_map<int,int>freq;
    int maxfreq;
    
    FreqStack() {
        //reset all the values : 
        freqGroup.clear();
        freq.clear();
        maxfreq = 0;
    }
    
    void push(int val) {
        freq[val]++;
        freqGroup[freq[val]].push(val);
        maxfreq = max(maxfreq,freq[val]);
    }
    
    int pop() {
        int ans = freqGroup[maxfreq].top();
        freq[ans]--;
        freqGroup[maxfreq].pop();
        if(freqGroup[maxfreq].size()==0){
            maxfreq--;
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */