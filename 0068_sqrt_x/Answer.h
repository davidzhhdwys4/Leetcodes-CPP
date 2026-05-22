class Answer
{
public:
  int mySqrt(int x)
  {
    int out = 0;
    while (out * out <= x)
    {
      out++;
    }

    return out - 1;
  }
};