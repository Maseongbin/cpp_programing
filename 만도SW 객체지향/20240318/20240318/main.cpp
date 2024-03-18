/*
// 범위 기반 for루프
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int list[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i : list)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
*/

/*
// 배열에서 최댓값 찾기
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int list[10];
	int max;

	for (int& elem : list)
	{
		elem = rand() % 100 + 1;
		cout << elem << " ";
	}
	cout << endl;

	max = list[0];
	for (auto& elem : list)
	{
		if (elem > max)
		{
			max = elem;
		}
	}
	cout << "최댓값 = " << max << endl;

	return 0;
}
*/

/*
#include<iostream>
using namespace std;

#define WIDTH  9
#define HEIGHT 3
int main()
{
	int table[HEIGHT][WIDTH];
	int r, c;

	for (r = 0; r < HEIGHT; r++)
	{
		for (c = 0; c < WIDTH; c++)
		{
			table[r][c] = (r + 1) * (c + 1);
		}
	}

	for (r = 0; r < HEIGHT; r++)
	{
		for (c = 0; c < WIDTH; c++)
		{
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}

	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}

	for (k = 0; k < 9; k++)
	{
		cout << "[x,y]좌표: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++)
		{
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}

	return 0;
}


