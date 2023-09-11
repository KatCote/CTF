#include <stdio.h>
#include <string.h>

#define OFFSET 13

int main (void)
{
	printf("\n\tROT13 Text Converter\n\n");

	char input_str[128];

	scanf("%s", input_str);

	for (int i32 = 0; i32 < strlen(input_str); i32++)
	{
		if (input_str[i32] > 64 && input_str[i32] < 78)
		{ input_str[i32] = input_str[i32] + OFFSET; }

		else if (input_str[i32] >= 78 && input_str[i32] < 91)
		{ input_str[i32] = input_str[i32] - OFFSET; }

		else if (input_str[i32] > 96 && input_str[i32] < 110)
		{ input_str[i32] = input_str[i32] + OFFSET; }

		else if (input_str[i32] >= 110 && input_str[i32] < 123)
		{ input_str[i32] = input_str[i32] - OFFSET; }

		else
		{ input_str[i32] = input_str[i32]; }
	}

	printf("\n%s\n", input_str);

	return 0;
}
