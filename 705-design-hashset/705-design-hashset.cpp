class MyHashSet {
public:
    vector<bool>hst;
    MyHashSet() {
        hst.resize(1000001,false);
    }
    
    void add(int key) {
        hst[key] = true;
    }
    
    void remove(int key) {
        hst[key] = false;
    }
    
    bool contains(int key) {
        return hst[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */