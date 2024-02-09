#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(vector<int>& a) {
    int n = a.size();
    stack<int> stk;
    for (int i = n - 1; i >= 0; i--) {
        if (stk.empty()) {
            stk.push(a[i]);
            a[i] = -1;
        } else {
            int b = stk.top();
            if (a[i] > b) {
                stk.push(a[i]);
                a[i] = b;
            } else {
                stk.push(a[i]);
                a[i] = -1;
            }
        }
    }
}
