
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    //时针、分针、秒针的速度
    //时针、分针、秒针的速度(一秒的1/1000)
    double Vh = 1.0 / 720000, Vm = 1.0 / 60000, Vs = 1.0 / 1000, Vms = 1.0;
    //一天总秒数
    int totalSec = 12 * 3600 * 1000;
    int count = 0;
    for (int i = 0; i < totalSec; i++)
    {
        double Sh = (Vh * i);
        double Sm = (Vm * i);
        double Ss = (Vs * i);
        //                    double Sh= Vh*i;
        //                    double Sm=Vm*i;
        //                    double Ss=Vs*i;
        double h = i / 3600 / 1000;
        double m = (i - 1000 * 3600 * h) / 1000 / 60;
        double s = (i - 3600 * 1000 * h - 60 * 1000 * m) / 1000;
        int Sms = i;
        int hh = h * 30;
        int mm = m * 6;
        int ss = s * 6;

        int ans1 = abs(hh - mm);
        int ans2 = abs(mm - ss);
        int ans3 = abs(hh - ss);

        int b = 40;
        if (ans1 > b&&ans2 > b&&ans3 > b)
        {
            count++;
        }
    }
    printf("%d\n", count);

    double k = count / 43200000.0;
    printf("概率为%lf\n", k);
    system("pause");
}
