#include <stdio.h>

#include <optional>
#include <vector>
#include <unordered_map>
#include <iostream>

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

        num_map[nums[i]] = i;
    }

    return std::nullopt;
}