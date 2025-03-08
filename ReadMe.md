# twoSum

## Problem Description
The **Two Sum** problem requires finding the indices of two numbers in an array `nums` that add up to a given integer `target`. Each input is guaranteed to have exactly one solution, and the same element cannot be used twice. The order of indices does not matter.

### Example 1
**Input:**  
```plaintext
nums = [2, 7, 11, 15], target = 9
```
**Output:**  
```plaintext
[0, 1]
```
**Explanation:** `nums[0] + nums[1] == 9`, so the function returns `[0, 1]`.

### Example 2
**Input:**  
```plaintext
nums = [3, 2, 4], target = 6
```
**Output:**  
```plaintext
[1, 2]
```

### Example 3
**Input:**  
```plaintext
nums = [3, 3], target = 6
```
**Output:**  
```plaintext
[0, 1]
```

## Constraints
- `2 <= {nums.length} <= 10^4`
- `-10^9 <= {nums[i]} <= 10^9`
- `-10^9 <= {target} <= 10^9`
- Only one valid answer exists.

## Solution Approach
The optimal solution uses a single-pass hash map with a time complexity of \(O(n)\). The algorithm iterates through the array, storing each element's complement (target - current element) in the hash map. If the current element exists in the hash map, the function returns the indices of the complement and the current element.

## Installation and Usage
1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/twoSum.git
    ```
2. Navigate to the project directory:
    ```bash
    cd twoSum
    ```
3. Run the solution using your preferred compiler or interpreter or **make**.

## Testing
To verify the correctness of the solution, execute unit tests covering various scenarios, including edge cases.

## Contributions
Contributions are welcome! Feel free to submit issues or pull requests.

## License
This project is licensed under the [MIT License](LICENSE).
