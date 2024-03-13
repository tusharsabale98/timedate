#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};
void printTime(struct time t1)
{
    printf("\n Time = %d:%d:%d",t1.hr,t1.min,t1.sec);
}
void acceptTime(struct time *t1)
{
    printf("\n Enter time");
    scanf("%d%d%d",&t1->hr,&t1->min,&t1->sec);
}

void  incrTimeByOneSec(struct time *t1)
{

}
int main()
{
    struct time t1;
    t1.hr=10;
    t1.min=20;
    t1.sec=45;
    printTime(t1);
    acceptTime(&t1);
    printTime(t1);
    incrTimeByOneSec(&t1);
    return 0;
}