#include <stdio.h>

#include <iostream>
#include <vector>
#include <optional>
#include <unordered_map>

std::optional<std::vector<int>> twoSum(std::vector<int>& nums, int target)
{

    std::vector<int> result;
    std::unordered_map<int, int> num_map; 

    for(size_t i=0; i<nums.size(); ++i)
    {
        // for(size_t j=i+1; j<nums.size(); ++j)
        // {
        //     if((nums[i] + nums[j]) % target == 0)
        //     {
        //         result = {nums[i], nums[j]};
        //         return result;
        //     }
        // }

        int complement = target - nums[i];

        if(num_map.find(complement) != num_map.end())
        {
            return std::vector<int>{complement, nums[i]};
        }

        num_map[nums[i] = i];
    }

    return std::nullopt;
}

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