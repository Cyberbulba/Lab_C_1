#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, x, k = 1;
	char *m, buf, buf_1;
	printf("Vvedite kolichestvo elementov massiva:\n"); //���� ���������� ��������� ����������� �������
	
	while (1) //���� ����� n � ����������
	{
		x = scanf("%d", &n);
		if (x)
		{
			if (n > 100 || n < 1)
			{
				printf("ERROR: Vvedite chislo n 0 < n <= 100.\n");
			}
			else
				break;
		}
		else
		{
			scanf("%c", &buf_1);
			printf("ERROR: Vvedite chislo.\n");
		}
	}
	
	m = malloc(sizeof(char) * n); //��������� ������
	if (m == NULL)
	{
		printf("ERROR: nelza videlit pamat.");
		return 0;
	}
	scanf("%c", &buf);
	
	printf("Vvedite massiv:\n"); //������ �������
	for (i = 0; i < n; i++)  
	{
		x = scanf("%c", &m[i]);
		if (x == 0)
		{
			printf("ERROR: Vvedite symbol");
			return 0;
		}
	}
	
	for (i = 0; i < n; i++) //������ �� ������ � �������� ������
	{
		if (i % 2)
		{
			if (m[i] == 'A' || m[i] == 'O' || m[i] == 'U')
			{
				m[i] = '*';
			}
		}
		else
			if (m[i] == 'A')
			{
				m[i] = '1';
			}
			if (m[i] == 'O')
			{
				m[i] = '2';
			}
			if (m[i] == 'U')
			{
				m[i] = '3';
			}
	}
	
	printf("Polychenniy massiv:\n"); //����� ����������� �������
	for (i = 0; i < n; i++) 
	{
		printf("%c ", m[i]);
	}
	free(m); 
	return 0;
}