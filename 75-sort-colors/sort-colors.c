void sortColors(int* nums, int numsSize) {
    int low = 0, mid = 0, high = numsSize - 1;
    int temp;

    while (mid <= high) {
        if (nums[mid] == 0) {
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }
}