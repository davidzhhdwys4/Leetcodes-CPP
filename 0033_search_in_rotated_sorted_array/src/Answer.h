#include <vector>

class Answer
{
public:
  int search(std::vector<int>& nums, int target)
  {
    if (nums.size() == 0)
      return -1;

    if (nums.size() == 1)
      return (target == nums[0]) ? 0 : -1;

    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
      int mid = (low + high) / 2;
      if (nums[mid] == target)
        return mid;

      // left segment is sorted
      if (nums[low] <= nums[mid])
      {
        // search left segment
        if (nums[low] <= target && target < nums[mid])
          high = mid - 1;

        // search right segment
        else
          low = mid + 1;
      }

      // right segment is sorted
      else
      {
        // search right segment
        if (nums[mid] < target && target <= nums[high])
          low = mid + 1;

        // search left segment
        else
          high = mid - 1;
      }
    }

    return -1;
  }
};