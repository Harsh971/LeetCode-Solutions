class Solution {
 public:
  int calculate(string s) {
    int ans = 0;
    int previous = 0;
    int current = 0;
    char op = '+';

    for (int i = 0; i < s.length(); ++i) {
      const char c = s[i];
      if (isdigit(c))
        current = current * 10 + (c - '0');
      if (!isdigit(c) && !isspace(c) || i == s.length() - 1) {
        if (op == '+' || op == '-') {
          ans += previous;
          previous = op == '+' ? current : -current;
        } else if (op == '*') {
          previous *= current;
        } else if (op == '/') {
          previous /= current;
        }
        op = c;
        current = 0;
      }
    }

    return ans + previous;
  }
};
