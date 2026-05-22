#include <string>

class Answer
{
public:
  int lengthOfLastWord(std::string s)
  {
    auto it = s.rbegin();

    // skip trailing whitespace
    while (*it == ' ' && it != s.rend())
    {
      it++;
    }

    // count chars in last word
    int out = 0;
    while (*it != ' ' && it != s.rend())
    {
      out++;
      it++;
    }

    return out;
  };
};