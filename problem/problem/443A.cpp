#include <iostream>
#include <set>
using namespace std;

int main() {
    char c;
    set<char> st;

    cin >> c; 
    while (cin >> c) {
        if (isalpha(c)) {
            st.insert(c);
        }

        if (c == '}') {
            break; 
             }
    }

    cout << st.size() << endl;

    return 0;
}
