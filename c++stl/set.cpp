#include <iostream>  
#include <set>  
#include <string>  

using namespace std;  

int main() {  
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // Optimize input/output  

    int q; // Number of queries  
    cin >> q;  

    set<int> s; // Declare an empty set of integers  

    while (q--) {  
        string command; // Variable to store the command  
        int x; // Variable to store the integer for the command  
        cin >> command; // Read the command  

        if (command == "insert") {  
            cin >> x; // Read x  
            s.insert(x); // Insert x into the set  
        } else if (command == "find") {  
            cin >> x; // Read x  
            // Check if x is in the set  
            if (s.find(x) != s.end()) {  
                cout << "found\n"; // x is found in the set  
            } else {  
                cout << "not found\n"; // x is not found in the set  
            }  
        } else if (command == "lower_bound") {  
            cin >> x; // Read x  
            auto it = s.lower_bound(x); // Find lower bound  
            if (it != s.end()) {  
                cout << *it << '\n'; // Print the lower bound  
            } else {  
                cout << -1 << '\n'; // Not found, print -1  
            }  
        } else if (command == "upper_bound") {  
            cin >> x; // Read x  
            auto it = s.upper_bound(x); // Find upper bound  
            if (it != s.end()) {  
                cout << *it << '\n'; // Print the upper bound  
            } else {  
                cout << -1 << '\n'; // Not found, print -1  
            }  
        }  
    }  

    return 0;  
}  