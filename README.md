- 👋 Hi, I’m @yzuhuii
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
yzuhuii/yzuhuii is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
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
