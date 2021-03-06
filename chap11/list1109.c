#include <stdio.h>
#include <string.h>

//---strcpyの実現例---
char *strcpy(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1++ = *s2++)
	{
		;
	}
	return tmp;
}

//---strncpyの実現例---
char *strncpy(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (n)
	{
		if (!(*s1++ = *s2++))
		{
			break; //'\0'を見つけたら終了
		}
		n--;
	}
	while (n--)
	{
		*s1++ = '\0'; //残りを'\0'で埋める
	}
	return tmp;
}