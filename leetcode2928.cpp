int distributeCandies(int n, int limit) {
        int count = 0;

    // Iterate through all possible distributions
    for (int i = 0; i <= limit; ++i) {
        for (int j = 0; j <= limit; ++j) {
            int k = n - i - j;

            // Check if the distribution is valid
            if (k >= 0 && k <= limit) {
                // Increment count if valid
                count++;
            }
        }
    }

    return count;
    }