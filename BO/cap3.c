#include <stdio.h>

float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866};
// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866, 5, 17, 11};
// float a[]={3.14, 1.61, 2.78};

int main () {
  printf ("Ola");
  int i;
  for (i=0;i<sizeof(a)/sizeof(float); i++) {
    printf ("%lf\n", a[i]);
  }
  return 0;
}

/* 9:38
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ gcc cap3.c
<b>cap3.c:</b> In function ‘<b>main</b>’:
<b>cap3.c:10:43:</b> <font color="#EF2929"><b>error: </b></font>expected ‘<b>;</b>’ before ‘<b>)</b>’ token
   10 |   for (i=0;i&lt;sizeof(a)/sizeof(double), i++<font color="#EF2929"><b>)</b></font> {
      |                                           <font color="#EF2929"><b>^</b></font>
      |                                           <font color="#4E9A06">;</font>
</pre>
*/

/* 9:40
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
</pre>

Escrevendo na tela menos elementos que o esperado - erro: usei sizeof double ao invés de sizeof float. Vi isso quando testei o segundo array
*/

/* 9:42 */

