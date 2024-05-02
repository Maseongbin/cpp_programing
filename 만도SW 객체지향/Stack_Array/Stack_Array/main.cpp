#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[5][20];  // ������ ��Ÿ���� 2���� �迭
    int command = 0;  // ����� �Է��� ������ ����
    int i = 0;        // ������ ���� ��� �ε����� ��Ÿ���� ����

    while (1)  // ���� ����
    {
        printf("��ɾ �Է��Ͻÿ�(push: 0, pop: 1): ");  // ����ڿ��� ��ɾ� �Է��� �䱸
        scanf("%d", &command);                             // ����� �Է��� ����

        switch (command)
        {
        case 0:  // push ��ɾ� ó��
            if (i < 5)  // ������ ���� ���� ���� ���
            {
                printf("arr[%d] = ", i);  // ���� ���� ��� �ε��� ���
                scanf(" %s", arr[i]);     // ����ڷκ��� ���ڿ� �Է��� �޾� ���ÿ� ����
                printf("TOP: %d\n", i);   // ���� �迭�� �ε��� ���
                i++;                      // �ε��� ����
                break;  
            }
            else  // ������ ���� �� ���
            {
                printf("ERROR. FULL STACK\n");  // ���� �޽��� ���
                break; 
            }

        case 1:  // pop ��ɾ� ó��
            if (i > 0)  // ������ ������� ���� ���
            {
                i--;                    // �ε��� ����
                arr[i][0] = '\0';       // ���� ��� ���� ���
                printf("pop ����\n");   // pop ���� �޽��� ���
                printf("TOP: %d\n", i); // ���� �迭�� �ε��� ���
                break; 
            }
            else  // ������ ����ִ� ���
            {
                printf("ERROR. EMPTY STACK\n");  // ���� �޽��� ���
                break; 
            }

        default:  // �߸��� ��ɾ� �Է��� ���
            printf("NOT COMMAND\n");  // ���� �޽��� ���
            break;
        }
    }

    return 0;
}
