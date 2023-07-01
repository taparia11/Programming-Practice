// Problem Link => https://leetcode.com/problems/design-hashmap/

class MyHashMap {
public:
    map<int,int> hmap;
    MyHashMap() {
        // hmap.resize(10000001);
    }
    
    void put(int key, int value) {
        hmap[key]=value;
    }
    
    int get(int key) {
        auto ans = hmap.find(key);
        if(ans== hmap.end())
            return -1;
        return ans->second;
    }
    
    void remove(int key) {
        hmap.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */