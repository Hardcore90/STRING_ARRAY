#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Задание №1\n\n");
    printf("Создайте одномерный массив символов, впишите туда с клавиатуры данные и выведите на экран только 2-й символ данного слова.\n\n");

    printf("Введите строку:\n");
    char str1[100];
    gets_s(str1);
    printf("-> %c\n", str1[1]);
    printf("\n");

    printf("Задание №2\n\n");
    printf("Создайте одномерный массив, далее заполните его данными, например словом «Hello», после чего пропишите код так, чтобы он определил последний элемент строки. \nПосле измените код так, чтобы программа меняла два элемента строки местами.\n\n");

    printf("Введите строку:\n");
    char str2[100];
    gets_s(str2);
    int n = strlen(str2);

    int temp = str2[n - 1];
    str2[n - 1] = str2[0];
    str2[0] = temp;

    printf("-> ");
    puts(str2);
    printf("\n");

    printf("Задание №3\n\n");
    printf("Создайте одномерный массив, и заполните его данными, например словом «Hello». \nПосле чего пропишите код так, чтобы он удалял нужный пользователю символ из строки.\n\n");

    printf("Введите строку:\n");
    char str3[100];
    gets_s(str3);
    int p;
    printf("Введите номер элемента, который нужно удалить из строки: ");
    scanf("%i", &p);
    for (int i = p - 1; i < strlen(str3); i++)
    {
        str3[i] = str3[i + 1];
    }
    printf("-> ");
    puts(str3);
}