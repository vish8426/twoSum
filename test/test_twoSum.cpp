#include <stdio.h>
#include <assert.h>

#include "main.h"

int main()
{
    // Test Case 1: Standard Case
    std::vector nums1 = {2, 7, 11, 15};
    assert(twoSum(nums1, 9) == std::vector({2, 7}));

    // Test Case 2: Another Valid Pair
    std::vector<int> nums2 = {3, 2, 4};
    assert(twoSum(nums2, 6) == std::vector<int>({2, 4}));

    // Test Case 3: Repeating Elements
    std::vector<int> nums3 = {3, 3};
    assert(twoSum(nums3, 6) == std::vector<int>({3, 3}));

    // Test Case 4: Negative Numbers
    std::vector<int> nums4 = {-1, -2, -3, -4, -5};
    assert(twoSum(nums4, -8) == std::vector<int>({-3, -5}));

    std::cout << "All Test Cases Passed!" << std::endl;
    return 0;

}