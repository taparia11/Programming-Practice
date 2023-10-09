// Problem Link => https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/

struct Node{
    Node* link[2];

// To check wheather key is available or not.
    bool containsKey(int bit){
        return (link[bit] != NULL);
    }

// to add new tire with value
    void put(int bit, Node* node){
        link[bit] = node;
    }

// Getting node address connected to this value.
    Node* get(int bit){
        return link[bit];
    }
};

// hadling all XOR operations.
class XOR{
public:
private:
    Node* root;

public:

    XOR(){
        root = new Node();
    }

// Inserting value  in trie in bitwise format.
    void insert(int num){
        Node* node = root;
        for(int i=31; i>=0; i--){
            int bit = (num>>i) & 1;
            if(!node->containsKey(bit)){
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }

// Getting maximum value related  to current value.
    int getMax(int num){
        Node* node = root;
        int maxNum = 0;
        for(int i=31; i>=0; i--){
            int bit = (num>>i) & 1;
            if(node->containsKey(1 - bit)){
                maxNum = maxNum | (1<<i);
                node = node->get(1 - bit);
            }
            else{
                node = node->get(bit);
            }
        }
        return maxNum;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
    // created the Object
        XOR trie;
    // Adding values in trie.
        for(auto it:nums){
            trie.insert(it);
        }
        int maxi = 0; // Contains maximum value after XOR operation.
    // Getting Value comparing with entire nums.
        for(auto it:nums)
            maxi = max(maxi, trie.getMax(it));
        return maxi;
    }
};