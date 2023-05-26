#include <stdio.h>

int fac (int);

int main () {

int n, i, sum = 0;


scanf ("%d", &n);
for (i = 1; i <= 2 * n - 1; i+= 2) {


sum += fac (i);}


printf ("sum=%d", sum);

return 0;
 }
 int fac (int n) {
int i, sum = 1;
for (i = 1; i <= n; i++){

sum *= i;}
return sum;
}
