#include <stdio.h>
#include <math.h>// підключення бібліотек 
#include <locale.h>

#define ar 4
#define ak 2
#define br 3 // заданння розмірів матриць
#define bk 2
#define cr 2
#define ck 2
//прототип функції для введення
void input(float a[ar][ak], int m, int n);
//прототип функції для пошуку середнього арифметичного 
void average(float a[ar][ak], int m, int n, float res[]);

int main() {
    setlocale(LC_CTYPE, "ukr");// встановлення локалізації
    //оголошення масивів 
    float a[ar][ak], b[br][bk], c[cr][ck];
    //оголошення змінних для збереження результату
    float Res_a[ar], Res_b[br], Res_c[cr];

    printf("Введiть значення масиву a:\n");
    //використання ф. для введеннята пошуку середнього арифметичного
    input(a, ar, ak);
    average(a, ar, ak, Res_a);

    printf("\n Результат для масиву a\n");
    for (int i = 0; i < ar; i++)
        printf(" %f  \n", Res_a[i]);

    printf("Введiть значення масиву b: \n");
    //використання ф. для введеннята пошуку середнього арифметичного
    input(b, br, bk);
    average(b, br, bk, Res_b);

    printf("\n Результат для масиву b\n");
    for (int i = 0; i < br; i++)
        printf(" %f  \n", Res_b[i]);

    printf("Введiть значення масиву c:\n");
    //використання ф. для введеннята пошуку середнього арифметичного
    input(c, cr, ck);
    average(c, cr, ck, Res_c);

    printf("\n Результат для масиву c\n");
    for (int i = 0; i < cr; i++)
        printf(" %f  \n", Res_c[i]);

    return 0;
}
//визначення ф. для введення 
void input(float a[ar][ak], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf_s("%f", &a[i][j]);
}
// визначення ф. для обчислення 
void average(float a[ar][ak], int m, int n, float res[]) {
    for (int i = 0; i < m; i++) {
        float sum = 0;//змінна для збереження суми
        int k = 0;// лічильник кількості
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0) {
                sum += a[i][j];
                k++;
            }
        }

        if (k > 0) {
            res[i] = sum / k;  
        }
        else {
            res[i] = 0;  
        }
    }
}
