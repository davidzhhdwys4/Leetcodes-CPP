#include <algorithm>
#include <string>
#include <vector>

class Solution
{
public:
  bool isPalindrome(int x)
  {
    std::string str = std::to_string(x);
    std::string str_rev = str;
    std::reverse(str_rev.begin(), str_rev.end());

    return str == str_rev;
  }

  bool isPalindromeInt(int x)
  {
    if (x < 0) return false;

    std::vector<int> digits;
    while (x >= 1)
    {
      digits.push_back(x % 10);
      x /= 10;
    }

    auto fwd = digits.begin();
    auto rev = digits.rbegin();
    for (; fwd != digits.end() && rev != digits.rend(); ++fwd, ++rev)
    {
      if (*fwd != *rev)
      return false;
    }

    return true;
  }
};