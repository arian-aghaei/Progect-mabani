#include<time.h>
void time1(int sec){
    int i=0;
    clock_t t = clock();
    clock_t t1 = clock();
    double tim = (double)(t1 - t) / CLOCKS_PER_SEC;
    while (tim < sec){
        t1 = clock();
        tim = (double)(t1 - t) / CLOCKS_PER_SEC;
        i++;
    }
    system("cls");
}
