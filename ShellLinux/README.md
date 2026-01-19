# Comandos básicos do shell do Linux

O termo Linux, atualmente, refere-se aos componentes básicos de um sistema operacional para microcomputadores. Sua documentação pode ser acessada em https://docs.kernel.org/ . Esse sistema operacional segue o padrão POSIX (https://pubs.opengroup.org/onlinepubs/9799919799/). Distribuições Linux, como Debian, Red Hat, SuSE, ... são distribuições de grandes conjuntos de programas pré-configurados para proporcionar um ambiente para usuários dos computadores. Essas distribuições são construídas em torno do Linux.

*Shell* é um dos nomes dados para a interface de linha de comando do Sistema Operacional. Em um *shell* o usuário interage com o sistema operacional, geralmente executando comandos do sistema operacional. Esses comandos são programas, **executar um programa no *shell* corresponde a digitar seu nome, quando necessário, seguido de argumentos de chamada e teclar <ENTER>**.  Certos programas são chamados utilitários do sistema operacional pois fazem parte deste, não exercem função central no sistema operacional e são úteis para usuários e administradores do sistema. *shell* pode ser chamado *terminal*, *cmd*, ... ou *Command Line Interface (CLI)* .

Os comandos básicos devem ser os mesmos em qualquer distribuição Linux (ex.: Ubuntu, Debian, SuSE, Fedora, Red Hat, ...) e também no Termux. Veja como instalar Termux em telefones celulares com Sistema Operacional Android em https://github.com/FNakano/IP-Apostila/tree/main/InstalarTermux .

Há algumas formas de instalar Linux dentro do Windows, por exemplo:

- *Windows Subsystem Linux - WSL* (https://learn.microsoft.com/pt-br/windows/wsl/)
- Máquinas virtuais - VMWARE (https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion), Virtual Box (https://www.virtualbox.org/)
- Containers - Kubernetes (https://kubernetes.io/pt-br/), Docker (https://www.docker.com/)

Os sistemas operacionais desenvolvidos pela Apple são baseados em uma variante de UNIX chamada *Berkeley Software Distribution - BSD*.
 
A maioria dos comandos básicos de shell lidam com arquivos e com a estrutura de diretórios (pastas).

Linux e compatíveis foram construídos de maneira a ter um único diretório raiz, denominado `root` e representado por uma barra `/`. Sob o diretório raiz estão todos os outros. Por exemplo, os (sub-)diretórios de cada usuário costumam estar no sub-diretório `/home`. `/home/fabio` é o (sub-)diretório que contém os arquivos e diretórios de um usuário identificado por `fabio`. Sistemas operacionais são muito configuráveis, então esta informação deve ser tomada como algo que usualmente é feito mas que pode ser modificado se o administrador do sistema o fizer.

Apenas para dar um contraponto, Windows designa cada dispositivo de armazenamento (HD, SSD, pendrive, ...) com uma letra (por exemplo C, D, E, ...). Geralmente o armazenamento principal recebe a letra C e a raiz do drive C é acessada com uma barra invertida (por isso `C:\`). `:` dois pontos é usado no Windows para separar o identificador da unidade de armazenamento do restante do identificador do arquivo, que pode estar em sub-diretórios (por isso `C:\Program Files\prog.exe`).

Sistemas Operacionais têm extensa documentação e ferramentas de busca nessa documentação. Frequentemente a documentação é tão extensa que ela não faz parte da instalação básica do Sistema Operacional. Quando a documentação não está instalada, geralmente a mensagem que contém essa informação também contém o comando que instala a documentação.

Na linha de comando, alguns símbolos têm significado "especial" (ié, contraintuitivo) como `.` que se refere ao diretório corrente, `..` que se refere ao diretório acima, `*`, que é um caracter *coringa* e representa uma sequência de caracteres. Há outros mas, neste momento, não é necessário citá-los todos.

Voltando aos comandos básicos do *shell* do Linux, são enumerados na lista abaixo com uma explicação curta. A explicação longa pode ser acessada usando `man` .

`man` - Em sistemas similares ao UNIX, a documentação é chamada manual e tem vários volumes. O comando `man` inicia o acesso à documentação pela sua página inicial. Para obter a informação sobre um comando específico, por exemplo `ls`, digite `man ls<ENTER>` na linha de comando. 

`apropos` - Frequentemente queremos saber como fazer algo mas não sabemos o nome do comando que o faz. `apropos` faz uma busca textual na documentação e lista comandos em que o texto buscado aparece.

 
`pwd` - Um *shell* é iniciado em um diretório corrente. `pwd`, sem argumentos, escreve na tela 

`ls` - Um *shell* é iniciado em um diretório corrente. `ls`, sem argumentos, lista os arquivos e pastas no diretório corrente. É útil para saber se o arquivo-fonte está no diretório corrente, o que é necessário (mas não suficiente) para, por exemplo, o comando `gcc ola.c` executar sem erros.

`cd` - Muda o diretório corrente. Certos símbolos usados no argumento de chamada têm significado "especial" (ié, contraintuitivo). `cd ..` muda para o diretório acima do diretório corrente. `cd .` muda para o diretório corrente. Caso o arquivo-fonte do seu programa não esteja no diretório corrente, `cd` permite navegar para tornar o diretório em que está o arquivo-fonte o diretório corrente.

`cp` - Comando para copiar arquivos e/ou diretórios. `cp <FONTE> <DESTINO>` configura o comando para que FONTE e DESTINO sejam arquivos, se necessário cria um arquivo com nome <DESTINO> e copia o conteúdo do arquivo <FONTE> para o arquivo <DESTINO>, substituindo o conteúdo do arquivo <DESTINO>, se for o caso.
 
`mv` - Comando para mover arquivos e/ou diretórios. `mv <FONTE> <DESTINO>` move o arquivo <FONTE> para o <DESTINO>. Se <DESTINO> for um arquivo, substitui o conteúdo. Se <DESTINO> for um diretório, cria um arquivo dentro do diretório. Se no <DESTINO> já existe um arquivo com esse nome, substitui o conteúdo.`mv <NOME1> <NOME2>` move <NOME1> para <NOME2> quando ambos são arquivos, e <NOME2> não existe, equivale a renomear o arquivo <NOME1>

`rm` - Comando para remover (apagar, sem lixeira) arquivos e diretórios. `rm <NOME>` se <NOME> for um arquivo, remove o arquivo.

`mkdir` - Cria um diretório. `mkdir <NOME>` cria o diretório <NOME> 

`rmdir` - Remove um diretório vazio. `rmdir <NOME>` se <NOME> for um diretório vazio, remove-o

`find` - Localiza um arquivo. `find / -name Ola.c` busca, a partir do diretório raiz, um arquivo de nome Ola.c . Os arquivos encontrados são listados.

`grep` - Localiza uma sequência de caracteres em um ou mais arquivos. `grep \"printf\" *.c"` busca, entre todos os arquivos cujo nome termina com .c, os que contém a palavra *printf*

`cat` - Lista na tela o arquivo cujo nome é dado como argumento. `cat ola.c` lista o arquivo ola.c, se ele estiver no diretório corrente. Pode ser útil quando há várias cópias dessincronizadas de um mesmo arquivo e não se sabe ao certo qual cópia é a que está sendo usada.

`CRTL-Z` e `bg` - Quando uma aplicação interativa, por exemplo um editor de texto, é iniciada em um *shell*, este para de aceitar novos comandos. Para *liberar* o *shell*, teclar CTRL-Z faz o *shell* sinaliza ao editor de texto e para o processo. Se, em seguida, executar-se nesse *shell* o programa `bg` o processo volta a ser executado, em *background*, *liberando* o *shell*.
