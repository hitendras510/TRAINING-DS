#include <iostream>
#include <stack>
using namespace std;

class sol {
public:
    bool isValid(string str) {
        stack<char> st;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if ((top == '(' && str[i] == ')') ||
                    (top == '{' && str[i] == '}') ||
                    (top == '[' && str[i] == ']')) {
                    st.pop();
                } else return false;
            }
        }
        return st.empty();
    }
};

int main() {
    sol s;
    string str = "({[]})";

    if (s.isValid(str))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
