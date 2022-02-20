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
#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

struct Node {
    int id;
    string data;
    Node *left, *right, *ancestor;

    Node(int id, string data, Node *ancestor) {
        this->id = id;
        this->data = data;
        this->ancestor = ancestor;
        left = nullptr;
        right = nullptr;
    }

    Node(int id, string data) {
        this->id = id;
        this->data = data;
        ancestor = nullptr;
        left = nullptr;
        right = nullptr;
    }

    Node() {
        ancestor = nullptr;
        left = nullptr;
        right = nullptr;
    }

    ~Node() {
        if (left != nullptr) {
            delete left;
        }
        if (right != nullptr) {
            delete right;
        }
    }
};

void InsertNode(Node *node, const int &id, const string &data) {
    if (node->id > id) {
        if (node->left == nullptr) {
            node->left = new Node(id, data, node);
        } else {
            InsertNode(node->left, id, data);
        }
    } else if (node->id < id) {
        if (node->right == nullptr) {
            node->right = new Node(id, data, node);
        } else {
            InsertNode(node->right, id, data);
        }
    } else {
        cout << "Exists!";
        return;
    }
}

void RemoveNode(Node *&node, const int &id) {
    if (node->id > id) {
        if (node->left == nullptr) {
            cout << "Not found!";
            return;
        }
        RemoveNode(node->left, id);
    } else if (node->id < id) {
        if (node->right == nullptr) {
            cout << "Not found!";
            return;
        }
        RemoveNode(node->right, id);
    } else {
        if (node->left == nullptr && node->right == nullptr) {
            if (node->ancestor != nullptr) {
                if (node->ancestor->right == node) {
                    node->ancestor->right = nullptr;
                } else {
                    node->ancestor->left = nullptr;
                }
            }
            delete node;
        } else if (node->left == nullptr) {
            node->right->ancestor = node->ancestor;
            node = node->right;
        } else if (node->right == nullptr) {
            node->left->ancestor = node->ancestor;
            node = node->left;
        } else {
            Node *current = node->left;
            if (current->right == nullptr) {
                current->right = node->right;
                node = current;
            } else {
                while (current->right != nullptr) {
                    current = current->right;
                }
                current->ancestor->right = current->left;
                current->left = node->left;
                current->right = node->right;
                node = current;
            }
        }
    }
}

Node *Search(Node *node, const int &id) {
    if (node->id > id) {
        if (node->left == nullptr) {
            cout << "Element doesn't exists!";
            return nullptr;
        }
        return Search(node->left, id);
    } else if (node->id < id) {
        if (node->right == nullptr) {
            cout << "Element doesn't exists!";
            return nullptr;
        }
        return Search(node->right, id);
    }
    return node;
}

void View(Node *node, int level = 0) {
    if (node != nullptr) {
        View(node->right, level + 1);
        cout.width(8 * level);
        cout << node->id << " " << node->data << endl << endl;
        View(node->left, level + 1);
    }
}

int CountEven(Node *node) {
    if (node == nullptr) {
        return 0;
    }
    int res = 0;
    if (node->left != nullptr) {
        res += CountEven(node->left);
    }
    if (node->right != nullptr) {
        res += CountEven(node->right);
    }
    return res + (node->id % 2 == 0);
}

int main() {
    Node *root;
    ifstream fin("input.txt");
    int id;
    string data = "";
    fin >> id;
    fin.ignore();
    getline(fin, data);
    root = new Node(id, data);
    while (!fin.eof()) {
        fin >> id;
        fin.ignore();
        getline(fin, data);
        InsertNode(root, id, data);
    }
    InsertNode(root, 9, "Emilechka");
    cout << Search(root, 16)->data << endl;
    View(root);
    cout << CountEven(root) << endl;
    RemoveNode(root, 12);
    View(root);
    cout << CountEven(root) << endl;
    delete root;
    return 0;
}
