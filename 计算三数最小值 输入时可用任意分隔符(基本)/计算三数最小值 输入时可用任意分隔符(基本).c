
#include<stdio.h>
#include <math.h>

void main()
{
    while (1) {
        char s[64];
        int a, b, c, min, k[10] = { 0 };

        printf("input a,b,c:");
        gets_s(s, 64);

        int j = 0, i = 0, n = 0, m = 0, o;
        while (s[j] != NULL && s[j - 1] != NULL) {
            //������������������ּ�ķָ���,�����',','.'��'?'���ǲ���ʱ���õķָ���
            for (i = j; s[i] != ',' && s[i] != '.' && s[i] != ' '&& s[i] != '?'&& s[i] != NULL; i++);
            n = i;
            //�����ǽ��ַ���ת��Ϊ���� ÿλ*10^λ�� �����
            if (j == 0) {
                o = i - j;
                for (; n > j;) {
                    k[m] += (*(s + --n) - '0') * (int)pow(10, o - n - 1);
                }
            }
            else if (j != 0) {
                o = i - j;
                for (; n > j;) {
                    k[m] += (s[--n] - '0') * (int)pow(10, o - n + j - 1);
                }
            }
            j = i + 1;
            m++;
        }
        //������и�ֵ���Ƚ�
        a = k[0];
        b = k[1];
        c = k[2];
        if (a < b)
            min = a;
        else
            min = b;
        if (c < min)min = c;
        printf("the result is %d\n", min);
        system("pause");
    }
}
