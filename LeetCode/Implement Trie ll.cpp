// Problem Link => https://www.codingninjas.com/studio/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=0

#include <bits/stdc++.h> 

struct Node{
    Node* links[26];
    int endWith = 0;    // when a word will end at that moment it will incremented.
    int countPrefix = 0;    // It will contains how many words are going from current flow.

// To check whether that character is having Node or not.
    bool containsKey(char ch){
        return (links[ch-'a'] != nullptr);
    }

// Adding the node and increase countPrefix by 1.
    void put(char ch, Node* node){
        links[ch - 'a'] = node;
        countPrefix++;
    }

// Return the Node address.
    Node* get(char ch){
        return links[ch - 'a'];
    }

// when word will end it will increase EndWith count.
    void setEnd(){
        endWith++;
    }

// When containsKey return true during insert and same char not added that time it will increase countPrefix.
    void setPrefix(){
        countPrefix++;
    }

// Reture how many words ending at that trie.
    int isEnd(){
        return endWith;
    }

// At perticular trie it will tell No. of words going through.
    int getWordCount(){
        return countPrefix;
    }

// When we erase word it will decrease countPrefix count.
    void erasePrefixCount(){
        countPrefix--;
    }

// When entire word got deleted that time it will decrease endWith.
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

// inserting word in Trie.
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

// Counting entire word till end and return EndWith value.
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

// Count word till given and return countPrefix value.
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

// Erase the word by dcrementing prefixCount in every trie node and at end decrease endWith value.
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