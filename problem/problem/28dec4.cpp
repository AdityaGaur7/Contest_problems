#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        string result = "";
        for (int i = 0; i < n; ) {
            if (i + 1 < n && (word[i] == 'a' || word[i] == 'e') && (word[i + 1] == 'b' || word[i + 1] == 'c' || word[i + 1] == 'd')) {
                result += word[i];
                result += '.';
                i++;
            } else {
                result += word[i];
            }
            i++;
        }

        cout << result << endl;
    }

    return 0;
}
