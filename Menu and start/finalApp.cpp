


#include <string>
#include "admin.h"
#include <iostream>

int main()
{
	// here will be the menu
	printf("welcome to quick calc!\n");
	float salesTax = .065;
	float salesEnd;
	float sales;
	float cityTax;
	int equations;
	float aTwo;
	float bTwo;
	float cTwo;

	
	// make loop to revert after bad password

	printf("Please select your type of equation\n 1. Sales tax by city\n 2. Pythagorean theorem\n");
	scanf_s("%d", &equations);
	fseek(stdin, 0, SEEK_END);
	switch (equations)
	{
	case 1:
		int city;
		printf("The sales taxs in WA is 6.5%%, but each city has it own taxes so please select your city first\n");
		printf("1.Duvall\n2.Bellevue\n3.Seattle\n4.Spokane\n5.Olympia\n");
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
			printf("Spokane city tax is 9.0%% which makes the tax .09 \n");
			cityTax = .09;
			printf("Please defy the price of the item you purchased: \n");
			scanf_s("%f", &sales);
			fseek(stdin, 0, SEEK_END);
			salesEnd = sales * salesTax;
			printf("Your item price is: %d USD", salesEnd);
		}
		else if (city == 5)
		{
			printf("Olympia city tax is 2.9%% which makes the tax .029 \n");
			cityTax = .029;
			printf("Please defy the price of the item you purchased: \n");
			scanf_s("%f", &sales);
			fseek(stdin, 0, SEEK_END);
			salesEnd = sales * salesTax;
			printf("Your item price is: %d USD", salesEnd);
		}

		//a^2*b^2=c^2



		//admin section
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
				(equations = true);
			}
		}
		break;

		
	case 2: 
	{
		int pythag;
		printf("Welcome to the pythagrean theorem.\n A^2 ++ B^2 = C^2\n");
		printf("If your equation is slightly different select option 2\n");
		printf("1. regular pythagorean theorem\n2. adjusted pythag theorem\n");
		scanf_s("%d", &pythag);
		fseek(stdin, 0, SEEK_END);
		printf("%d\n", pythag);

		if (pythag == 1)
		{
			printf("For this equation to work i need you to defy two variables, aTwo and bTwo\n");
			printf("defy aTwo then btwo\n");
			scanf_s("%f", &aTwo);
			//fseek(stdin, 0, SEEK_END);
			printf("What is your b^2?\n");
			scanf_s("%f", &bTwo);
			//fseek(stdin, 0, SEEK_END);
		//	printf("A %f", &aTwo);

			cTwo = aTwo * aTwo + bTwo * bTwo;
			printf("After math your C^2 is: %f", &cTwo);
		}
		else if (pythag == 2)
		{
			printf("An adjusted form of the equation is bTwo ++ cTwo = aTwo");
		}

	}
	}//switchline end



	return 0;
}
