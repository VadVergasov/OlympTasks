// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    Node* parent;
};

void print(Node* node) {
    if (node == nullptr) {
        return;
    }
    print(node->left);
    cout << node->value << " ";
    print(node->right);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    Node* root = new Node({1, nullptr, nullptr, nullptr});
    vector<Node*> nodes(n + 1);
    nodes[1] = root;
    for (int i = 2; i <= n; i++) {
        Node* node = new Node({i, nullptr, nullptr, nodes[i >> 1]});
        nodes[i] = node;
        if (i % 2 == 0) {
            node->parent->left = node;
        } else {
            node->parent->right = node;
        }
    }
    while (q--) {
        int v;
        cin >> v;
        Node* cur = nodes[v];
        if (cur == root) {
            continue;
        }
        if (cur->parent->left == cur) {
            swap(cur->parent->left, cur->left);
            cur->left = cur->parent;
            if (cur->left->left) {
                cur->left->left->parent = cur->left;
            }
            cur->parent = cur->parent->parent;
            cur->left->parent = cur;
            if (cur->parent) {
                if (cur->parent->left == cur->left) {
                    cur->parent->left = cur;
                } else {
                    cur->parent->right = cur;
                }
            } else {
                root = cur;
            }
        } else {
            swap(cur->parent->right, cur->right);
            cur->right = cur->parent;
            if (cur->right->right) {
                cur->right->right->parent = cur->right;
            }
            cur->parent = cur->parent->parent;
            cur->right->parent = cur;
            if (cur->parent) {
                if (cur->parent->left == cur->right) {
                    cur->parent->left = cur;
                } else {
                    cur->parent->right = cur;
                }
            } else {
                root = cur;
            }
        }
    }
    print(root);
    return 0;
}
