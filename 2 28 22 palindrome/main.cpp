#include<iostream>
#include<string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string numString = std::to_string(x);
        int j = 0;
        for (int i = numString.size() - 1; i >= 0; i--) {
            if (numString[j] != numString[i])
                return false;
            j++;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int test;
    std::cout << "Enter any integer" << std::endl;
    std::cin >> test;
}