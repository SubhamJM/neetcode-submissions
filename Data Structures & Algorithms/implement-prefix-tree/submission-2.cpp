#include <string>

struct trnode {
    trnode* ptr[26];
    bool eow = false;
    trnode() {
        for (int i = 0; i < 26; ++i) ptr[i] = nullptr;
    }
};

class PrefixTree {
public:
    trnode* root;

    PrefixTree() {
        root = new trnode();
    }

    void insert(const std::string& word) {
        trnode* curr = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!curr->ptr[index]) {
                curr->ptr[index] = new trnode();
            }
            curr = curr->ptr[index];
        }
        curr->eow = true;
    }

    bool search(const std::string& word) {
        trnode* curr = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!curr->ptr[index]) return false;
            curr = curr->ptr[index];
        }
        return curr->eow;
    }

    bool startsWith(const std::string& prefix) {
        trnode* curr = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (!curr->ptr[index]) return false;
            curr = curr->ptr[index];
        }
        return true;
    }
};