


#include <string>
#include "admin.h"
#include <iostream>

int main()
{
	// here will be the menu
	printf("welcome to quick calc!\n");
	float salesTax = .065;
	int salesEnd;
	float sales;
	float cityTax;
	//int pythagTheorom;
	int equations;
	//change ints to floats
	printf("Please select your type of equation\n 1. Sales tax by city\n");
	scanf_s("%d", &equations);
	fseek(stdin, 0, SEEK_END);
	switch (equations)
	{
	case 1:
		int city;
		printf("The sales taxs in WA is 6.5%%, but each city has it own taxes so please select your city first\n");
		printf("1.Duvall\n2.Bellevue\n3.Seattle\n4.Spokane");
		scanf_s("%d", &city);
		fseek(stdin, 0, SEEK_END);
		printf("%d\n", city);
		if (city == 1)
		{
			printf("Duvall city tax is 2.4%% which makes it .024");
			cityTax = .024;
			printf("Please defy the price of the item you purchased\n");
			scanf_s("%f", &sales);
			fseek(stdin, 0, SEEK_END);
			salesEnd = sales * salesTax;
			printf("Your answer is: %d USD", salesEnd);
		}
		else if (city == 2)
		{
			printf("Bellevue city tax is 3.6%% which makes it .036\n");
			cityTax = .036;
			printf("Please defy the price of the item you purchased: \n");
			scanf_s("%f", &sales);
			fseek(stdin, 0, SEEK_END);
			salesEnd = sales * salesTax;
			printf("Your answer is: %d USD", salesEnd);
		}
		else if (city == 3)
		{
			printf("Seattle city tax is 6.5%% which makes the tax .065 \n");
			cityTax = .065;
			printf("Please defy the price of the item you purchased: \n");
			scanf_s("%f", &sales);
			fseek(stdin, 0, SEEK_END);
			salesEnd = sales * salesTax;
			printf("Your item price is: %d USD", salesEnd);
		}
		else if (city == 4)
		{
			printf("Spokane city tax is  which makes the tax  \n");
		}


		else if (city == 4311)
		{
			printf("hello, please enter password \n");
			// password is admin101

			std::string pass;
			getline(std::cin, pass);
			fseek(stdin, 0, SEEK_END);
			if (pass == "admin101")
			{
				instructions();
			}
			else if(pass != "admin101")
			{
				
				printf("Incorrect password!");
				switch (equations = true);
			}
		}
		break;
	}



	return 0;
}
