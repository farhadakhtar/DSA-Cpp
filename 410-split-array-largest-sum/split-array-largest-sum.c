int canSplit(int* nums, int n, int m, int limit) {
    int students = 1;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(sum + nums[i] > limit) {
            students++;
            sum = nums[i];

            if(students > m)
                return 0;
        }
        else {
            sum += nums[i];
        }
    }

    return 1;
}

int splitArray(int* nums, int numsSize, int k) {
    int low = nums[0];
    int high = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > low)
            low = nums[i];

        high += nums[i];
    }

    while(low < high) {
        int mid = low + (high - low) / 2;

        if(canSplit(nums, numsSize, k, mid))
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}