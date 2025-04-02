#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // Optimize input/output

    int qn; // Number of queries
    cin >> qn;

    queue<int> q;   // Declare an empty queue of integers
    string command; // Variable to store the command

    for (int i = 0; i < qn; ++i)
    {
        cin >> command; // Read the command

        if (command == "push")
        {
            int x;
            cin >> x;  // Read the integer to push
            q.push(x); // Push x to the queue
        }
        else if (command == "pop")
        {
            q.pop(); // Pop the front element
        }
        else if (command == "front")
        {
            cout << q.front() << "\n"; // Print the front element
        }
        else if (command == "back")
        {
            cout << q.back() << "\n"; // Print the back element
        }
    }

    return 0;
}