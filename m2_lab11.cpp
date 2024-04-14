#include <stdio.h>
#include <math.h>// ���������� ������� 
#include <locale.h>

#define ar 4
#define ak 2
#define br 3 // �������� ������ �������
#define bk 2
#define cr 2
#define ck 2
//�������� ������� ��� ��������
void input(float a[ar][ak], int m, int n);
//�������� ������� ��� ������ ���������� ������������� 
void average(float a[ar][ak], int m, int n, float res[]);

int main() {
    setlocale(LC_CTYPE, "ukr");// ������������ ����������
    //���������� ������ 
    float a[ar][ak], b[br][bk], c[cr][ck];
    //���������� ������ ��� ���������� ����������
    float Res_a[ar], Res_b[br], Res_c[cr];

    printf("����i�� �������� ������ a:\n");
    //������������ �. ��� ���������� ������ ���������� �������������
    input(a, ar, ak);
    average(a, ar, ak, Res_a);

    printf("\n ��������� ��� ������ a\n");
    for (int i = 0; i < ar; i++)
        printf(" %f  \n", Res_a[i]);

    printf("����i�� �������� ������ b: \n");
    //������������ �. ��� ���������� ������ ���������� �������������
    input(b, br, bk);
    average(b, br, bk, Res_b);

    printf("\n ��������� ��� ������ b\n");
    for (int i = 0; i < br; i++)
        printf(" %f  \n", Res_b[i]);

    printf("����i�� �������� ������ c:\n");
    //������������ �. ��� ���������� ������ ���������� �������������
    input(c, cr, ck);
    average(c, cr, ck, Res_c);

    printf("\n ��������� ��� ������ c\n");
    for (int i = 0; i < cr; i++)
        printf(" %f  \n", Res_c[i]);

    return 0;
}
//���������� �. ��� �������� 
void input(float a[ar][ak], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf_s("%f", &a[i][j]);
}
// ���������� �. ��� ���������� 
void average(float a[ar][ak], int m, int n, float res[]) {
    for (int i = 0; i < m; i++) {
        float sum = 0;//����� ��� ���������� ����
        int k = 0;// �������� �������
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
