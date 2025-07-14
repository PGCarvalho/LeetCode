/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* ret = (int*) malloc(2 * sizeof(int));
	if(ret == NULL){return NULL;}
	int t2;

	*returnSize = 2;
	for(int i = 0; i < numsSize - 1; i++){
		t2 = target - nums[i];
		for(int j = i + 1; j < numsSize; j++){
			if(nums[j] == t2) {
				ret[0] = i; 
				ret[1] = j;
				return  ret;
			}
		}
	}
    return NULL;
}