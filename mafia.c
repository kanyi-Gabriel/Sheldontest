# include <stdio.h> 

double square(double x)
{
    double results = x * x;
    return  results;
}
int main()
{
    double x = square(3);
    printf("%lf",x);;
   
   return 0;
}