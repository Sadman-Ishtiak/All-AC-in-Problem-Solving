#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t;
    for (int _ = 0; _ < t; _++) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::vector<char> ss;
        for (char i : s) {
            if (std::find(ss.begin(), ss.end(), i) == ss.end()) {
                ss.push_back(i);
            }
            if (ss.size() == 26) break;
        }
        std::sort(ss.begin(), ss.end());
        std::string ans;
        std::unordered_map<char, char> mapping;
        int x = ss.size();
        for (int i = 0; i < x; i++) {
            mapping[ss[i]] = ss[x - i - 1];
        }
        for (char i : s) {
            ans += mapping[i];
        }
        std::cout << ans << std::endl;
    }
    return 0;
}

