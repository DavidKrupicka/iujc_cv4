#include <stdlib.h>
#include <stdio.h>

#define N 50

void priklad1();
void priklad2();
void priklad3();

int main(int argc, char *argv[]){

	//priklad1();
	//priklad2();
	priklad3();

	system("pause");
	return 0;
}

void priklad1(){
	char str[N];
	int delka = 0;

	gets_s(str, N);
	delka = strlen(str);
	printf("%d\n", delka);
	puts(str);

	for (size_t i = 0; i < delka; i++)
	{
		if (!((i + 1) % 3)){
			str[i] = '*';
		}
	}

	printf("%s \n", str); //alternativa pts()

}

void priklad2(){
	char str1[20], str2[20], str3[20], zn;
	char *ukStr = NULL;
	int porovnej = 0;

	printf("Zadej prvni rezetec:\n");
	gets_s(str1, 20);
	printf("Zadej druhy retezec:\n");
	gets_s(str2, 20);

	printf("delka prvniho retezce: %d\n", strlen(str1));
	printf("delka druheho retezce: %d\n", strlen(str2));

	strcpy(str3, str2);
	strcat(str1, str3);

	printf("zadej hledany znak: \n");
	fflush(stdin); //nebo zn = getchar();
	scanf("%c", &zn);

	printf("znak: %c\n", zn);

	ukStr = strchr(str1, zn);
	if (ukStr != NULL){
		printf("je tam, a je na pozici %d\n", (ukStr - str1) + 1);
	}
	else
		printf("Neni tam");

	porovnej = strcmp(str1, str2);

	switch (porovnej)
	{
	case 0:
		printf("str1 = str2\n");
	case -1: 
		printf("str1 < str2");
	default:
		printf("str1 > str2");
	}
}

void priklad3(){
	char vzor[6] = "aeiouy", text[50];
	int  vzorPocet[6] = { 0, 0, 0, 0, 0, 0 };
	
	gets_s(text, 50);

	for (size_t j = 0; j < 50; j++)
	{
		for (size_t i = 0; i < 5; i++)
		{
			if (vzor[i] == text[j] || vzor[i] - 32 == text[j]){
				vzorPocet[i]++;
			}
		}
	}

	for (size_t i = 0; i < 6; i++)
	{
		printf("%c : %d \n", vzor[i], vzorPocet[i]);
	}

}