#include <stdio.h>
int main()
{                                                                                                //Начало  главной функции
	char season[10000], w[7] = "winter", sp[7] = "spring", sm[7] = "summer", au[7] = "autumn";   // Объявление массивов
	int a = 0, b = 0, c = 0, d = 0;
	printf("enter the season\n");                                                              
	scanf_s("%s", &season,10000);                                                                // Ввод сезона 
	for (int i = 0; i < 6; i++)
	{
		if (season[i] == w[i])
			a++;
	   if (season[i] == sp[i])
			b++;
	   if (season[i] == sm[i])
			c++;
		if (season[i] == au[i])
			d++;
	}
	if (a==6) printf("december, january, february");
	else if (b==6) printf("march, april, may");
	else if (c==6) printf("june, july, august");
	else if (d==6) printf("september, october, november");
	else printf("mistake");

	return 0;
}
