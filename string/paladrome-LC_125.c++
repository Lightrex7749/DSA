#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string testStr = "A man, a plan, a canal: Panama";
    if (isPalindrome(testStr)) {
        cout << "\"" << testStr << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << testStr << "\" is not a palindrome." << endl;
    }
    return 0;
}