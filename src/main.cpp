#include <stdio.h>

#include <iostream>

#include "main.h"

int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    auto result = twoSum(nums, target);

    if(result)
    {
        std::cout << "[";
        bool first = true;
        for(int nums : *result)
        {
            if(!first)
            {
                std::cout << ", ";
            }
            std::cout << nums;
            first = false;
        }
        std::cout << "]" << std::endl;
    }
    else
    {
        std::cout << "No Pair Found" << std::endl;
    }

    return 0;
}