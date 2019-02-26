#include <bits/stdc++.h>

using namespace std;

struct Node {
    int end;
    Node *parent;
    Node *next[2];
    Node() {
        next[0] = nullptr;
        next[1] = nullptr;
        end = 0;
        parent = nullptr;
    }
};

Node *root = new Node();

void add(int a) {
    Node *cur_v = root;
    deque<char> bin;
    while (a) {
        bin.push_back(a % 2);
        a /= 2;
    }
    reverse(bin.begin(), bin.end());
    while (bin.size() < 32) {
        bin.push_front(0);
    }
    for (short i = 0; i < bin.size(); i++) {
        char cur = bin[i];
        if (cur_v->next[cur] == nullptr) {
            cur_v->next[cur] = new Node();
            cur_v->next[cur]->parent = cur_v;
        }
        cur_v = cur_v->next[cur];
    }
    cur_v->end++;
}

int find(int a) {
    Node *cur_v = root;
    deque<char> bin;
    while (a) {
        bin.push_back(a % 2);
        a /= 2;
    }
    reverse(bin.begin(), bin.end());
    while (bin.size() < 32) {
        bin.push_front(0);
    }
    int ret = 0;
    for (short i = 0; i < bin.size(); i++) {
        char cur = bin[i];
        if (cur_v->next[1 - cur] == nullptr) {
            cur_v = cur_v->next[cur];
            ret += cur * (1 << (32 - i - 1));
        } else {
            cur_v = cur_v->next[1 - cur];
            ret += (1 - cur) * (1 << (32 - i - 1));
        }
    }
    return ret;
}

void remove(int a) {
    Node *cur_v = root;
    deque<char> bin;
    while (a) {
        bin.push_back(a % 2);
        a /= 2;
    }
    reverse(bin.begin(), bin.end());
    while (bin.size() < 32) {
        bin.push_front(0);
    }
    for (short i = 0; i < bin.size(); i++) {
        char cur = bin[i];
        cur_v = cur_v->next[cur];
    }
    if (cur_v->end > 1) {
        cur_v->end--;
        return;
    }
    Node *next = cur_v->parent;
    while (!next->end) {
        if (cur_v->next[0] != nullptr || cur_v->next[1] != nullptr) {
            break;
        }
        Node *t = cur_v;
        cur_v = next;
        if (next->next[0] == t) {
            next->next[0] = nullptr;
        } else {
            next->next[1] = nullptr;
        }
        next = cur_v->parent;
    }
}

int main() {
    ifstream in("multiset.in");
    ofstream out("multiset.out");
    int q;
    in >> q;
    add(0);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '+') {
            int x;
            in >> x;
            add(x);
        } else if (t == '?') {
            int x;
            in >> x;
            out << (find(x) ^ x) << "\n";
        } else {
            int x;
            in >> x;
            remove(x);
        }
    }
    return 0;
}