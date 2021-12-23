#include <stdio.h>
#include <stdlib.h>

const char* dostrstr(const char* arg_0, const char* arg_4)
{
	register const char* var_4 = arg_0;
	register const char* var_8 = NULL;
	register const char* var_c = NULL;

	do
	{
		var_8 = var_4;
		var_c = arg_4;

		while (*var_8 == *var_c)
		{
			if (!(*var_8) || !(*var_c))
				break;
			++var_8;
			++var_c;
		}

		if (*var_c == 0)
			return var_4;

	} while (*var_4++);

	return NULL;
}

int main()
{
	printf("%s", dostrstr("challenges.re by Dennis Yurichev", "Dennis"));
}