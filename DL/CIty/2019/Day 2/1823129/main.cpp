#include <bits/stdc++.h>

using namespace std;

struct Node {
    int end;
    Node *next[26];
    Node() {
        end = 0;
        for (int i = 0; i < 26; i++) {
            next[i] = nullptr;
        }
    }
};

Node *root = new Node();

void add(string s) {
    Node *cur_v = root;
    for (int i = 0; i < s.size(); i++) {
        char cur = s[i];
        if (cur_v->next[cur - 'a'] == nullptr) {
            cur_v->next[cur - 'a'] = new Node();
        }
        cur_v = cur_v->next[cur - 'a'];
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        string s;
        in >> s;
    }
    return 0;
}