- š Hi, Iām @yzuhuii
- š Iām interested in ...
- š± Iām currently learning ...
- šļø Iām looking to collaborate on ...
- š« How to reach me ...

<!---
yzuhuii/yzuhuii is a āØ special āØ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
#include<stdio.h>                                                                                               
int MaxSum(int a[],int size)
{
    if(a == NULL || size == 0)
    {
        return -1;
    }
 
    int sum = 0;
    int index = 0;
    int max = a[index];
    for(;index < size;++index)
    {
        sum = sum + a[index];
        if(sum < a[index])
        {
            sum = a[index];
        }
        if(sum > max)
        {
            max = sum;
        }
    }
    return max;
}
