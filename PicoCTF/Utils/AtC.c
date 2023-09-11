#include <stdio.h>

int main (void)
{
	printf("\n\tASCII to Text Converter\n\n");

	int counter = 0;
	int input_num;
	char output_str[64];
	
	do
	{
		scanf("%d", &input_num);
		output_str[counter] = input_num;
		counter++;

		if (input_num != 10)
		{ printf("%d\t- %c\n", input_num, input_num); }
	}
	while (input_num != 10 && input_num < 128 && input_num > 0);

	printf("\nDecode:\t%s\n", output_str);

	return 0;
}
