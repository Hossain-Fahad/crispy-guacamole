#include<stdio.h>
int main()
{
long long int x;
scanf("%lld",&x);
if(x>=1500)
{
    printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");

}
else if(x>1000)
{
    printf("I wil buy Punjabi\n");
}
else
{
    printf("Bad luck!");
}
return 0;


}