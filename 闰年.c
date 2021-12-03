#include <stdio.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		////判断year是否为闰年
		////能被4整除且不能被100整除的是闰年
		////能被400整除的是闰年
		//if (year % 4 == 0 && year % 100 != 0)
		//{
		//	printf("%d ", year);
		//	count++;
		//}
		//else if (year % 400 == 0)
		//{
		//	printf("%d ", year);
		//	count++;
		//}
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n闰年个数: %d\n", count);
	return 0;
}