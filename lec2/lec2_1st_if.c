#include <stdio.h>

int main()
{
    int a = 6;
    if (a = 1) printf("Print 0 run!!\n");
    if (-5<=a<4) printf("Print 1 run!!\n");
    if (-5) printf("Print -5 run!!\n");
    return 0;
} // 표현식에 할당 들어가면 어떻게 되는거임???? 그냥 0할당하는거 아니면 다 실행되는건가

// -5<=a<4 는 (-5<=a)<4로 해석됨. -5<=a는 참이므로 1이 되고, 1<4는 참이므로 1이 됨. 따라서 if문은 실행됨.
// 그래서 (-5<=a) && (a<4)로 표현하는 것이 좋음. 그러니까 가급적이면 괄포 붙여서 의도한 바대로 하는게 좋음.
