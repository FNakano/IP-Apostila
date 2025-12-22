# Comandos básicos do shell do Linux

*Shell* é o nome dado para a interface de linha de comando do Sistema Operacional. Em um *shell* o usuário interage com o sistema operacional, geralmente executando comandos do sistema operacional. Esses comandos são programas, **executar um programa no *shell* corresponde a digitar seu nome, quando necessário, seguido de argumentos de chamada e teclar <ENTER>**.  Certos programas são chamados utilitários do sistema operacional pois fazem parte deste, não exercem função central no sistema operacional e são úteis para usuários e administradores do sistema. *shell* pode ser chamado *terminal*, *cmd*, ... ou *Command Line Interface (CLI)* .

Os comandos básicos devem ser os mesmos em qualquer distribuição Linux (ex.: Ubuntu, Debian, SuSE, Fedora, Red Hat, ...) e também no Termux.

A maioria dos comandos básicos de shell lidam com arquivos e com a estrutura de diretórios (pastas).

Linux e compatíveis foram construídos de maneira a ter um único diretório raiz, denominado `root` e representado por uma barra `/`. Sob o diretório raiz estão todos os outros. Por exemplo, os (sub-)diretórios de cada usuário costumam estar no sub-diretório `/home`. `/home/fabio` é o (sub-)diretório que contém os arquivos e diretórios de um usuário identificado por `fabio`. Sistemas operacionais são muito configuráveis, então esta informação deve ser tomada como algo que usualmente é feito mas que pode ser modificado se o administrador do sistema o fizer.

Apenas para dar um contraponto, Windows designa cada dispositivo de armazenamento (HD, SSD, pendrive, ...) com uma letra (por exemplo C, D, E, ...). Geralmente o armazenamento principal recebe a letra C e a raiz do drive C é acessada com uma barra invertida (por isso `C:\`). `:` dois pontos é usado no Windows para separar o identificador da unidade de armazenamento do restante do identificador do arquivo, que pode estar em sub-diretórios (por isso `C:\Program Files\prog.exe`).

Voltando aos comandos básicos do *shell* do Linux, são eles:
 
`ls`
`pwd`
`cd`
`cp`
`mv`
`rm`
`mkdir`
`rmdir`
`find`
`grep`
