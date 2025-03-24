#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

void processCommands(const vector<string>& commands) {
    stack<int> loopCounts;
    stack<int> currIter;
    string output;
    int index = 0;

    while (index < commands.size()) {
        string command = commands[index];

        if (command.find("for") == 0) { // Handle "for" loop
            int times = stoi(command.substr(4));
            loopCounts.push(times);
            currIter.push(0);
        } else if (command == "do") {
            // No operation for "do"
        } else if (command == "done") {
            int current = currIter.top() + 1;
            currIter.pop();
            int max = loopCounts.top();
            loopCounts.pop();
            if (current < max) {
                loopCounts.push(max);
                currIter.push(current);
                index = findLoopStart(commands, index);
                continue;
            }
        } else if (command.find("break") == 0) { // Handle "break"
            int breakAt = stoi(command.substr(6));
            if (currIter.top() + 1 == breakAt) {
                loopCounts.pop();
                currIter.pop();
                index = findLoopEnd(commands, index);
            }
        } else if (command.find("continue") == 0) { // Handle "continue"
            int continueAt = stoi(command.substr(9));
            if (currIter.top() + 1 == continueAt) {
                int max = loopCounts.top();
                int current = currIter.top() + 1;
                currIter.pop();
                if (current < max) {
                    currIter.push(current);
                    index = findLoopStart(commands, index);
                }
                continue;
            }
        } else if (command.find("print") == 0) { // Handle "print"
            size_t start = command.find("\"") + 1;
            size_t end = command.rfind("\"");
            string message = command.substr(start, end - start);
            output += message + "\n";
        }
        index++;
    }
    cout << output;
}

int findLoopStart(const vector<string>& commands, int currentIndex) {
    int nestedLoops = 0;
    for (int i = currentIndex - 1; i >= 0; i--) {
        if (commands[i] == "done") {
            nestedLoops++;
        } else if (commands[i] == "do") {
            if (nestedLoops == 0) {
                return i;
            }
            nestedLoops--;
        }
    }
    return 0;
}

int findLoopEnd(const vector<string>& commands, int currentIndex) {
    int nestedLoops = 0;
    for (int i = currentIndex + 1; i < commands.size(); i++) {
        if (commands[i] == "do") {
            nestedLoops++;
        } else if (commands[i] == "done") {
            if (nestedLoops == 0) {
                return i;
            }
            nestedLoops--;
        }
    }
    return commands.size();
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> commands;
    for (int i = 0; i < n; i++) {
        string command;
        getline(cin, command);
        commands.push_back(command);
    }

    processCommands(commands);
    return 0;
}
