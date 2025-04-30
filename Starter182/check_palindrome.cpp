#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool canFormPalindrome(int n, int k, string s) {
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto& entry : freq) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }

    // Calculate the number of characters that will remain after removing k characters
    int remainingLength = n - k;

    // Check if the remaining characters can form a palindrome
    if (remainingLength % 2 == 0) {
        return oddCount == 0; // All counts must be even
    } else {
        return oddCount <= 1; // At most one count can be odd
    }
}

