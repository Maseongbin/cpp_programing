#include <stdio.h>

int main()
{
	int arr[5] = { 15, 11, 1, 3, 8 }; // ���ĵ��� ���� ������

	int temp = 0;

	printf("���� �� �迭: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n\n");

	for (int i = 1; i < 5; i++)
	{
		temp = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
			arr[j] = temp;
		}
	}

	printf("���� �� �迭: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
	}

	return 0;
}