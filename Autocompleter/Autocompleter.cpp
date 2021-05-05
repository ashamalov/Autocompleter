#include "Trie.h"
#include <iostream>

int main()
{
    TrieNode* root = getNewNode();

    insert(root, "hell");
    insert(root, "hello");
    insert(root, "help");
    insert(root, "hat");
    insert(root, "cat");
    insert(root, "a");

    string s;
    getline(std::cin, s);

    autoComplete(root, s);
}


