
#include <iostream>

int main()
{
	// here will be the menu
	printf("welcome to quick calc!\n");
	float salesTax = .065;
	int salesEnd;
	int sales;
	float cityTax;
	//int pythagTheorom;
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
		printf("%d\n", city);
		if (city == 1)
		{
			printf("Duvall city tax is 2.4%% which makes it .024");
			cityTax = .024;
		}
		else if (city == 2)
		{
			printf("Bellevue city tax is 3.6%% which makes it .036");
			cityTax = .036;
		}
		printf("Please defy the price of the item you purchased");
		scanf_s("%d", &sales);
		fseek(stdin, 0, SEEK_END);
		salesEnd = sales * salesTax;
		printf("Your answer is: %d", salesEnd);
		break;
	}



	return 0;
}
