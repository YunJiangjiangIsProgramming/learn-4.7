#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	/*int arr[] = {86,126,96,98,105};
	int i = 0;
	int sz = sizeof(arr);
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;*/

	/*int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);
	printf("year=%4d", year);
	printf("month=%02d", month);
	printf("date=%02d", date);
	return 0;*/
	 
	/*int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;
	scanf("%d,%f,%f,%f", &id, &c, &math, &eng);
	printf("id=%d", id);
	printf("c=%f", c);
	printf("math=%f", math);
	printf("eng=%f", eng);
	return 0;*/


	//找几个数字的最大值

	int arr[4] = {0};
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	i = 1;
	int max = arr[0];
	while (i < 4)
	{
		if (arr[i] > max)
		{
			
			max = arr[i];

		}
		i++;

	}
	printf("%d\n", max);

	return 0;

	//有问题 这个代码



	//int n = 0;
	//int ret =1;
	//scanf("%d", &n);
	//for (i = 1;i <= n;i++)
	//{  
	//	ret = i * ret;

	//} 
	//printf("%d\n", ret);
	//return 0;



	/*int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	
	
	for (n = 0; n <= 3; n++)
	{

		for (i = 1; i <= n; i++)
		{ 
			ret= 1;
			ret = i * ret;

		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;*/








}