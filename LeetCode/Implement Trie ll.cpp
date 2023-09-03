// Problem Link => https://www.codingninjas.com/studio/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=0

#include <bits/stdc++.h> 

struct Node{
    Node* links[26];
    int endWith = 0;
    int countPrefix = 0;


    bool containsKey(char ch){
        return (links[ch-'a'] != nullptr);
    }

    void put(char ch, Node* node){
        links[ch - 'a'] = node;
        countPrefix++;
    }

    Node* get(char ch){
        return links[ch - 'a'];
    }

    void setEnd(){
        endWith++;
    }

    void setPrefix(){
        countPrefix++;
    }

    int isEnd(){
        return endWith;
    }

    int getWordCount(){
        return countPrefix;
    }

    void erasePrefixCount(){
        countPrefix--;
    }

    void  eraseWordCount(){
        endWith--;
    }
};
class Trie{

    public:
        Node* root;
    Trie(){
        root = new Node();
    }

    void insert(string &word){
        Node* node = root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i]))
                node->put(word[i], new Node);
            else
                node->setPrefix();
            node = node->get(word[i]);
        }
        node->setPrefix();
        node->setEnd();
    }

    int countWordsEqualTo(string &word){
        Node* node = root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    int countWordsStartingWith(string &word){
        Node* node = root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node= node->get(word[i]);
        }
        return node->getWordCount();
    }

    void erase(string &word){
        Node* node = root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i]))
                return;
            else
                node->erasePrefixCount();
            node = node->get(word[i]);
        }
        node->erasePrefixCount();
        node->eraseWordCount();
    }
};