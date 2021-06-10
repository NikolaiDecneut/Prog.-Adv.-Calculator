
#include <iostream>

int main()
{
	// here will be the menu
	printf("welcome to quick calc!\n");
	float salesTax = .065;
	int salesEnd;
	int sales;
	float citytax;
	int pythagTheorom;
	int equations;
	
	printf("Please select your type of equation\n 1. Sales tax by city\n");
	scanf_s("%d", &equations);
	fseek(stdin, 0, SEEK_END);
	switch (equations)
	{
	case 1:
		int city;
		printf("The sales taxs in WA is 6.5%, but each city has it own taxes so please select your city first\n");
		printf("1. Duvall\n2. Bellevue\n3.Seattle");
		scanf_s("%d", &city);
		fseek(stdin, 0, SEEK_END);
		if (city == 1)
		{
			printf("Duvall city tax is 2.4% which makes it .024");
			citytax = .024;
		}
			
			
		scanf_s("%d", &sales);
		fseek(stdin, 0, SEEK_END);
		salesEnd = sales * salesTax;
		printf("Your answer is: %d", salesEnd);
		break;
	}



	return 0;
}
