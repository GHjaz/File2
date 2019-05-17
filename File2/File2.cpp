#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
int test(FILE* file) {
	if ((file) == NULL)
	{
		printf("Не удалось открыть файл"); //ПРОВЕРКА НА ОТКРЫТИЕ
		return 0;
	}
}
int main() {
	int i = 0;
	char c[90];
	setlocale(0, "");
	srand(time(NULL));
	FILE *If1=fopen("c:\\1\\test1.txt", "w"); // input file1
	test(If1);
		for (int i = 0; i < 12; i++) {
		fprintf(If1,"%d\n",rand() + 10 % 10);
		}
	fclose(If1); //.............................1part...................................
	FILE* Of1 = fopen("c:\\1\\test1.txt", "r"), * If2 = fopen("c:\\1\\test2.txt", "w");
	test(Of1); //..Output file1
	test(If2); //..Input file2
	for (int i = 0; i < 12; i++) {
		fgets(c,10,Of1); //output
		if (c[0] != '3') {
			fputs(c, If2);//input2
		}
	}
	fclose(If2);
	fclose(Of1);
	return 0;
}