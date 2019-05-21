#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
bool three(int num) {
	int num_buf = num,cik=0;
	while (num_buf / 10 != 0) {
		cik = num_buf / 10;
		num_buf = num_buf / 10;
	}
	if (cik == 3) {
		return 0;
	}
	else return 1;
}
int test(FILE* file) {
	if ((file) == NULL)
	{
		printf("Не удалось открыть файл"); //ПРОВЕРКА НА ОТКРЫТИЕ
		return 0;
	}
}
int main() {
	int i,c;
	char pr;
	setlocale(0, "");
	srand(time(NULL));
	FILE *If1=fopen("c:\\1\\test1.txt", "w"); // input file1
	test(If1);
		for (int i = 0; i < 12; i++) {
		fprintf(If1,"%d\t",rand() + 10 % 10);
		}
	fclose(If1); //.............................1part...................................
	FILE* Of1 = fopen("c:\\1\\test1.txt", "r"), * If2 = fopen("c:\\1\\test2.txt", "w");
	test(Of1); //..Output file1
	test(If2); //..Input file2
	for (int j = 0; j < 12; j++) {
		fscanf(Of1,"%d", &c);
		if (three(c)) {
			fprintf(If2, "%d\t", c);
		}
	}
	fclose(If2);
	fclose(Of1);
	return 0;
}