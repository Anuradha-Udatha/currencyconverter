#include<stdio.h>
#include<conio.h>

main()
{


	//PHP to other currencies
	float USD = 49.76, AUD = 37.74, EUR = 53.53, HKD =  6.42, MXN = 2.34, SEK = 5.63, KWD = 163.17, QAR = 13.17, PHP = 1, RUB = 0.84;
	//USD to other currencies
	float USD2 = 1, AUD2 = 1.31, EUR2 = 0.93, HKD2 = 7.76, MXN2 = 20.70, SEK2 = 8.73, KWD2 = 0.30, QAR2 = 3.64, PHP2 = 49.76, RUB2 = 60.10;
	//AUD to other currencies
	float USD3 = 0.76, AUD3 = 1, EUR3 = 0.71, HKD3 = 5.87, MXN3 = 15.82, SEK3 = 6.76, KWD3 = 0.23, QAR3 = 2.78, PHP3 = 38.01, RUB3 = 45.90;
	//EUR to other currencies
	float USD4 = 1.08, AUD4 = 1.41, EUR4 = 1, HKD4 = 8.37, MXN4 = 22.33, SEK4 = 9.42, KWD4 = 0.33, QAR4 = 3.93, PHP4 = 53.68, RUB4 = 64.83;
	//HKD to other currencies
	float USD5 = 0.13, AUD5 = 0.17, EUR5 = 0.12, HKD5 = 1, MXN5 = 2.67, SEK5 = 1.13, KWD5 = 0.039, QAR5 = 0.47, PHP5 = 6.41, RUB5 = 7.75;
	//MXN ti other currencies
	float USD6 = 0.048, AUD6 = 0.063, EUR6 = 0.045, HKD6 = 0.38, MXN6 = 1, SEK6 = 0.42, KWD6 = 0.015, QAR6 = 0.18, PHP6 = 2.40, RUB6 = 2.90;
	//SEK to other currencies
	float USD7 = 0.11, AUD7 = 0.15, EUR7 = 0.11, HKD7 = 0.89, MXN7 = 2.37, SEK7 = 1, KWD7 = 0.035, QAR7 = 0.42, PHP7 = 5.70, RUB7 = 6.88;
	//KWD to other currencies
	float USD8 = 3.28, AUD8 = 4.29, EUR8 = 3.04, HKD8 = 25.45, MXN8 = 67.85, SEK8 = 28.64, KWD8 = 1, QAR8 = 11.94, PHP8 = 163.06, RUB8 = 197.09;
	//QAR to other currencies
	float USD9 = 0.27, AUD9 = 0.36, EUR9 = 0.25, HKD9 = 2.13, MXN9 = 5.68, SEK9 = 2.40, KWD9 = 0.084, QAR9 = 1, PHP9 = 13.66, RUB9 = 16.51;
	//RUB to other curreceis
	float USD10 = 0.017, AUD10 = 0.022, EUR10 = 0.015, HKD10 = 0.13, MXN10 = 0.34, SEK10 = 0.15, KWD10 = 0.0051, QAR10 = 0.061, PHP10 = 0.83, RUB10 = 1;

	float amountcnvrt;
	float money;

		int x;
		int choice;


				printf("---Currency Converter---");
				printf("\n---choose your currency---");
				printf("\n(1)PHP-Philippine Peso");
				printf("\n(2)USD-US Dollar");
				printf("\n(3)AUD-Australian Dollar");
				printf("\n(4)EUR-Euro");
				printf("\n(5)HKD-HongKong Dollar");
				printf("\n(6)MXN-Mexican Peso");
				printf("\n(7)SEK-Swedish Krona");
				printf("\n(8)KWD-Kuwaiti Dinar");
				printf("\n(9)QAR-Qatari Rial");
				printf("\n(10)RUB-Russian Ruble");
				printf("\n(11)EXIT.");
				printf("\n---Enter choice: ");
				scanf("%d ",&choice);
				printf("\n---Enter amount: ");
				scanf("%d",&money);


				do
				{


					switch(x)
					{
						case 1:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 2:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB2;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 3:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB3;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 4:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB4;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 5:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB5;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 6:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{

								case 1:  amountcnvrt = money * PHP6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB6;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 7:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB7;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 8:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB8;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 9:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB9;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
					case 10:
							printf("\nChoose the currency to convert:");
							printf("\n(1)PHP-Philippine Peso");
							printf("\n(2)USD-US Dollar");
							printf("\n(3)AUD-Australian Dollar");
							printf("\n(4)EUR-Euro");
							printf("\n(5)HKD-HongKong Dollar");
							printf("\n(6)MXN-Mexican Peso");
							printf("\n(7)SEK-Swedish Krona");
							printf("\n(8)KWD-Kuwaiti Dinar");
							printf("\n(9)QAR-Qatari Rial");
							printf("\n(10)RUB-Russian Ruble");

							switch(x)
							{
								case 1:  amountcnvrt = money * PHP10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;


								case 2: amountcnvrt = money * USD10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 3: amountcnvrt = money * AUD10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;

								case 4: amountcnvrt = money * EUR10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 5: amountcnvrt = money * HKD10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 6: amountcnvrt = money * MXN10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 7: amountcnvrt = money * SEK10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 8: amountcnvrt = money * KWD10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 9: amountcnvrt = money * QAR10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
								case 10: amountcnvrt = money * RUB10;
										 printf("\nconversion done:");
										 printf("%.3f", amountcnvrt);
										 break;
							}
				}
				printf("\n\nWould you like to try again? Yes=1 or No=0: ");
				scanf("%d", &choice);


			}while(choice==1);







getch();
}
