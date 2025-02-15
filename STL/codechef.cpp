#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void solve() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;  // Size of the array

        vector<int> A(N);
        unordered_set<int> elements;  // Hash set for quick lookups

        // Read input and store elements in the set
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            elements.insert(A[i]);
        }

        bool found = false;

        // Try to find a valid cool subsequence of length 2
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int x = A[i], y = A[j];

                if ((x + y) % 2 == 0) {  // Only consider integer averages
                    int avg = (x + y) / 2;
                    if (elements.count(avg)) {  // Check if the average exists in the array
                        cout << "2\n" << x << " " << y << endl;
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }

        if (!found) {
            cout << "-1\n";  // If no cool subsequence is found, print -1
        }
    }
}

int main() {
    ios::sync_with_stdio(false);  // Fast input/output
    cin.tie(nullptr);
    solve();  // Call the function
    return 0;
}
