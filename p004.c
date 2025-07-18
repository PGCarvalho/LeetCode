double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int tSize = nums1Size + nums2Size;
    int max = tSize / 2 + 1;
    int nums[max];

    int i = 0;
    int i1 = 0;
    int i2 = 0;

    while (i < max) {
        if (i1 < nums1Size && (i2 >= nums2Size || nums1[i1] < nums2[i2])) {
            nums[i++] = nums1[i1++];
        } else {
            nums[i++] = nums2[i2++];
        }
    }

    // If the number of elements is even
    if (tSize % 2 == 0) {
        return ((double) (nums[max-1] + nums[max-2])) / 2;
    }
    return nums[max-1];
}
