int n = nums.size();
    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Check if removing the subarray [i, j] makes the array strictly increasing
            vector<int> temp(nums.begin(), nums.end());
            temp.erase(temp.begin() + i, temp.begin() + j + 1);
            bool strictlyIncreasing = true;
            for (int k = 1; k < temp.size(); ++k) {
                if (temp[k] <= temp[k - 1]) {
                    strictlyIncreasing = false;
                    break;
                }
            }
            if (strictlyIncreasing) {
                ++result;
            }
        }
    }

    return result;