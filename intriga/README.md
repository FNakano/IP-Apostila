Os `intriga*.c` apresentam diferentes escolhas de alocação de strings e passagem de parâmetros, explorando temas como *passagem por valor* e *shallow copy*.

Tanto no GCC Linux quanto no Programiz quanto no PythonTutor, a ordem de declaração dos campos da estrutura muda a quantidade de memória alocada. O programa testado é `ordemCampos.c` que é listado abaixo:

```c
#include <stdio.h>

struct Ordem1 {
  char c1;
  char c2;
  float *f;
};

struct Ordem2 {
  char c1;
  float *f;
  char c2;
};

int main () {
  printf ("Memória que ocupa um char: %ld\n", sizeof (char));
  printf ("Memória que ocupa uma instância de {Ordem1:%ld,Ordem2:%ld}\n", sizeof (struct Ordem1), sizeof (struct Ordem2));
  return 0;
}

```

Execução no GCC em Linux:

![](./Captura%20de%20tela%20de%202026-07-23%2016-15-23.png)


<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/intriga</b></font>$ cat /etc/os-release 
PRETTY_NAME=&quot;Ubuntu 22.04.5 LTS&quot;
NAME=&quot;Ubuntu&quot;
VERSION_ID=&quot;22.04&quot;
VERSION=&quot;22.04.5 LTS (Jammy Jellyfish)&quot;
VERSION_CODENAME=jammy
ID=ubuntu
ID_LIKE=debian
HOME_URL=&quot;https://www.ubuntu.com/&quot;
SUPPORT_URL=&quot;https://help.ubuntu.com/&quot;
BUG_REPORT_URL=&quot;https://bugs.launchpad.net/ubuntu/&quot;
PRIVACY_POLICY_URL=&quot;https://www.ubuntu.com/legal/terms-and-policies/privacy-policy&quot;
UBUNTU_CODENAME=jammy
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/intriga</b></font>$ gcc --version
gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

</pre>

Execução no Programiz:

![](./Captura%20de%20tela%20de%202026-07-23%2016-14-44.png)


Execução no Python Tutor:

![](./Captura%20de%20tela%20de%202026-07-23%2016-14-17.png)

