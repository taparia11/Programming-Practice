// Problem Link => https://leetcode.com/problems/design-hashset/

class MyHashSet {
public:
    vector<bool> net;
    MyHashSet() {
        net.resize(10000001,NULL);
    }
    
    void add(int key) {
      net[key] = true;  
    }
    
    void remove(int key) {
      net[key] = false;  
        
    }
    
    bool contains(int key) {
      return net[key];  
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */