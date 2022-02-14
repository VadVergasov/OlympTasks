// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

template <class T>
class Node {
   public:
    Node() = default;

    Node(T key, Node<T> *parent = nullptr, Node<T> *firstChild = nullptr,
         Node<T> *nextSibling = nullptr) {
        Key = key;
        Parent = parent;
        FirstChild = firstChild;
        NextSibling = nextSibling;
    }

    ~Node() = default;

    T Key;
    Node<T> *Parent;
    Node<T> *FirstChild;
    Node<T> *NextSibling;
};

template <class T>
void Go(Node<T> *start, bool sibling_only = false) {
    static unordered_set<Node<T> *> used;
    static queue<Node<T> *> st({start});
    if (sibling_only && start->NextSibling != nullptr &&
        used.find(start->NextSibling) == used.end()) {
        st.push(start->NextSibling);
        used.insert(start->NextSibling);
        Go(start->NextSibling, true);
        return;
    }
    if (!st.empty()) {
        Node<T> *cur = st.front();
        st.pop();
        cout << cur->Key << endl;
        if (cur->FirstChild != nullptr &&
            used.find(cur->FirstChild) == used.end()) {
            st.push(cur->FirstChild);
            used.insert(cur->FirstChild);
        }
        Go(cur, true);
        Go(start);
    }
}

int main() {
    Node<int> t0(0);
    Node<int> t1(1, &t0);
    t0.FirstChild = &t1;
    Node<int> t2(2, &t0);
    t1.NextSibling = &t2;
    Node<int> t3(3, &t0);
    t2.NextSibling = &t3;
    Node<int> t4(4, &t1);
    t1.FirstChild = &t4;
    Node<int> t5(5, &t1);
    t4.NextSibling = &t5;
    Node<int> t6(6, &t2);
    t2.FirstChild = &t6;
    Node<int> t7(7, &t2);
    t6.NextSibling = &t7;
    Node<int> t8(8, &t2);
    t7.NextSibling = &t8;
    Node<int> t9(9, &t7);
    t7.FirstChild = &t9;
    Node<int> t10(10, &t7);
    t9.NextSibling = &t10;
    Go(&t0);
    return 0;
}
