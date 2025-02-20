#include <bits/stdc++.h>
using namespace std;

string findRestaurantName(int N, string A) {
    string S = A;

    while (true) {
        // Get the next lexicographical string
        int i = N - 1;
        while (i >= 0 && S[i] == 'z') {
            S[i] = 'a';
            i--;
        }
        if (i < 0) return "-1";  // No valid next string

        S[i]++;  // Increment character

        // Check if it satisfies the condition
        string reversedS = S;
        reverse(reversedS.begin(), reversedS.end());

        if (S > A && S > reversedS) {
            return S;
        }
    }

    return "-1";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A;
        cin >> N >> A;

        string result = findRestaurantName(N, A);
        cout << result << "\n";
    }
    return 0;
}
