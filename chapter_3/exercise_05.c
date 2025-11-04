#include <stdio.h>

int main() {

    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
    int m,n,o,p;


    printf("Please enter numbers from 1 to 16 in any order you want\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);

    printf("Row sums : %d %d %d %d\n",a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p); 
    printf("Column sums: %d %d %d %d\n",a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p);
    printf("Diagonal sums : %d %d\n", a+f+k+p, d+g+j+m);

    return 0;
}