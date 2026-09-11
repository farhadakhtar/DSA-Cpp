int maxProduct(int* nums, int numsSize) {
    int max = nums[0];
    int min = nums[0];
    int ans = nums[0];

    for(int i = 1; i < numsSize; i++) {
        int x = nums[i];

        if(x < 0) {
            int temp = max;
            max = min;
            min = temp;
        }

        if(x > max * x)
            max = x;
        else
            max = max * x;

        if(x < min * x)
            min = x;
        else
            min = min * x;

        if(max > ans)
            ans = max;
    }

    return ans;
}