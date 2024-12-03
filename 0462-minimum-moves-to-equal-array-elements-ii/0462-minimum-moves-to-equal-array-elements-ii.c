void BubbleSort(int *a, int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int minMoves2(int* nums, int numsSize) {
    //int b[] = nums;
    if (numsSize == 1) {
        return 0;
    }
    BubbleSort(nums, numsSize);
    int sum = 0;
    int median = 0;

    if (numsSize % 2 == 0) {
        median = (nums[numsSize/2] + nums[numsSize/2 -1]) / 2;
    } else {
        median = nums[numsSize/2];
    }

    for (int i = 0; i < numsSize; i++) {
        sum += fabs(nums[i] - median);
    }

    return sum;
}