 #include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> leftSign(n), rightSign(n);
        vector<int> left(n), right(n);
        for (int i = 0; i < n; i++) {
            cin >> leftSign[i] >> left[i] >> rightSign[i] >> right[i];
        }
        ll A = 1, B = 1, C = 0;
        for (int i = n - 1; i >= 0; i--) {
            ll d = max(A, B);
            if (leftSign[i] == "x") A += d * (left[i] - 1);
            else C += d * left[i];
            if (rightSign[i] == "x") B += d * (right[i] - 1);
            else C += d * right[i];
        }
        cout << A + B + C << endl;
    }

    return 0;
}
