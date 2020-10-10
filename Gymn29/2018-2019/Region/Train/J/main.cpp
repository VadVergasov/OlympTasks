#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> c = {".,1",   "abc2", "def3",  "ghi4", "jkl5", "mno6",
                        "pqrs7", "tuv8", "wxyz9", "+0",   " "};
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, pre = -1;
    long long res = 0;
    in >> n;
    string s;
    in.ignore();
    getline(in, s);
    cout << res;
    return 0;
}
