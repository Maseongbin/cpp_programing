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

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}

	printf("���� �� �迭: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
	}

	return 0;
}