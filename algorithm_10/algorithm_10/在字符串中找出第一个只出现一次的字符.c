#include<stdio.h>
int main()
{
	char ch[30];
	int i, j, count;
	scanf("%s", ch);
	i = 1;
	j = 0;
	count = 1;
	while (ch[j] != '\0')
	{
		while (ch[i] != '\0')
		{
			if (j != i)
			{
				if (ch[j] == ch[i])
				{
					count++;
					break;
				}
			}
			i++;
		}
		if (count == 1)
		{
			printf("%c\n", ch[j]);
			break;
		}
		else
		{
			count = 1;
		}
		j++;
		i = j;
	}

	return 0;
}