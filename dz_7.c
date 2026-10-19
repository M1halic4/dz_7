#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int dz();

int main()
{
	setlocale(LC_ALL, "RUS");

	dz();

	return 0;
}

int dz()
{
	//Инициализация переменных
	int date;

	//Ввод даты рождения пользователем
	printf("Введите жату рождения в формате ddmm: ");
	scanf("%d", &date);

	//Определение знака зодиака
	switch (date % 100)
	{
	case 1:
		date / 100 <= 20 ? printf("Вы козерог.\n") : printf("Вы водолей.\n");
		break;
	case 2:
		date / 100 <= 21 ? printf("Вы водолей.\n") : printf("Вы рыбы.\n");
		break;
	case 3:
		date / 100 <= 21 ? printf("Вы рыбы.\n") : printf("Вы овен.\n");
		break;
	case 4:
		date / 100 <= 19 ? printf("Вы овен.\n") : printf("Вы телец.\n");
		break;
	case 5:
		date / 100 <= 20 ? printf("Вы телец.\n") : printf("Вы близнецы.\n");
		break;
	case 6:
		date / 100 <= 21 ? printf("Вы близнецы.\n") : printf("Вы рак.\n");
		break;
	case 7:
		date / 100 <= 22 ? printf("Вы рак.\n") : printf("Вы лев.\n");
		break;
	case 8:
		date / 100 <= 23 ? printf("Вы лев.\n") : printf("Вы дева.\n");
		break;
	case 9:
		date / 100 <= 22 ? printf("Вы дева.\n") : printf("Вы весы.\n");
		break;
	case 10:
		date / 100 <= 23 ? printf("Вы весы.\n") : printf("Вы скорпион.\n");
		break;
	case 11:
		date / 100 <= 21 ? printf("Вы склорпион.\n") : printf("Вы стрелец.\n");
		break;
	case 12:
		date / 100 <= 22 ? printf("Вы стрелец.\n") : printf("Вы козерог.\n");
		break;

	default: 
		printf("Ошибка при вводе даты рождения");
	}
}