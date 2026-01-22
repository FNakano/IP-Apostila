# IP-Apostila
Apostila de FNakano para IP

<!--- páginas curtas, exemplos, formato pergunta-resposta (ligado a discussions e issues), tutoriais e documento. --->

## Preâmbulo

"Tudo pode mudar..."

## O "tom" da conversa nas aulas
 
Gostaria de iniciar dando o contexto que desejo nesta disciplina: "Uma conversa gentil tratando os assuntos com ceticismo científico".

A *conversa gentil* refere-se a:
  
> A gentileza nas conversas é uma qualidade humana fundamental que transforma a comunicação em um ambiente de respeito, empatia e acolhimento. Ser gentil ao falar envolve o uso de amabilidade, delicadeza e atenção, indo além do simples comportamento educado para criar conexões verdadeiras. (Gerado por IA do Google)

O ceticismo científico refere-se a:
  
> Ceticismo científico é uma postura de questionamento e exigência de evidências robustas, baseada no método científico, para validar afirmações, combatendo pseudociências, superstições e charlatanismo, sem negar tudo, mas sim buscando provas, como defendiam divulgadores como Carl Sagan, para proteger o pensamento crítico e o avanço do conhecimento. Ele exige teste e revisão constante de hipóteses, diferenciando-se do negacionismo que apenas rejeita fatos, mantendo a mente aberta para o novo, mas com rigor. (Gerado por IA do Google)

Sugestões e comentários sobre este material, *não sobre questões administrativas*, podem ser feitos através das discussões do repositório: https://github.com/FNakano/IP-Apostila/discussions . Cópias da apostila podem ser feitas por `fork` ou por `clone`, comandos do `Git`. Pedidos de correção do material podem ser solicitados nos *issues* https://github.com/FNakano/IP-Apostila/issues e serão analisados. *Pull requests* podem ser aceitos mas a chance é pequena. 

Confesso que usei a IA para gerar o texto sobre termos que eu já sabia(?) o significado mas não queria usar meu tempo elaborando o texto. Revisei o texto gerado, achei que expressa o que eu desejo expressar. Deixo registrada a citação porque ela pode mudar (é gerada por IA) e a fonte.

O texto gerado por IA baseia-se em textos já escritos, seja por pessoas, seja por IA no processo de geração do texto final. Por enquanto, analisar o processo de geração até chegar aos textos e autores originais com qualidade desejada para que o texto gerado seja um texto científico, não foi feito.

## As explicações em aula

(P: Por que começar assim, com "longas" explicações em assuntos que parecem não ser próximos a programação de computadores? R.: Para saber "onde estamos" e "para onde iremos", tentando não "nos perder" e nem perder a motivação de estudar.)

**nota**: Uso explicações e definições apresentadas na [Wikipedia](https://en.wikipedia.org/wiki/Main_Page) pois há pouca divergência na informação apresentada nela em relação a livros didáticos e acadêmicos nos assuntos que abordo, até onde sei. 

Acho que narrativas são inevitáveis na comunicação entre pessoas... e elas são importantes no ensino-aprendizagem. Não tenho o conhecimento dos (seus) professores em filosofia e comunicação (que geralmente dão aulas em disciplinas do ciclo básico), mas empresto do conhecimento (deles?):

> Os seres humanos geralmente afirmam entender os eventos quando conseguem formular uma história ou narrativa coerente explicando como eles acreditam que o evento foi gerado. (https://pt.wikipedia.org/wiki/Narrativa#Abordagens_das_ci%C3%AAncias_sociais)

... então preparem-se para ouvir e contar histórias ...

Minha primeira história tem a ver com como entender um curso de graduação: Podemos pensar um curso de graduação como um conjunto de disciplinas interrelacionadas e apresentadas aos alunos para formar seu conhecimento. As disciplinas podem abordar um mesmo assunto, cada disciplina com enfoque diferente ou com nível de detalhamento diferente. Por exemplo, na disciplina Introdução à Programação ensina-se o que é ordenação e, en geral, apresenta-se um algoritmo de ordenação com detalhamento suficiente para Introdução à Programação. Na disciplina Análise de Algoritmos o assunto é retomado e expandido, apresentando vários algoritmos diferentes e analisando sua complexidade de tempo e de espaço.

Vamos restringir o escopo para a disciplina de Introdução à Programação e criar uma narrativa na direção do *Problem Based Learning - PBL*. Isto implica em *problematizar* (https://pt.wikipedia.org/wiki/Problematiza%C3%A7%C3%A3o) a disciplina de Introdução à Programação: O problema/desafio é aprender/ensinar programação de computadores. 

## Considerações iniciais

(poderia chamar requisitos da solução...)

Temos entre 17 e 19 semanas para resolver esse problema/desafio. O processo de resolução pode ser considerado uma atividade, que pode ser dividida em várias sub-atividades - é o que se chama *Work Breakdown Structure - WBS* (https://en.wikipedia.org/wiki/Work_breakdown_structure).

Podemos, também, consider as *atividades por fazer* como tarefas. Atividade não é (perfeitamente) equivalente a tarefa. Tarefa geralmente é uma descrição documental e atividade é o que, de fato, é feito. Considerando o relatório como descrição (documental) de atividades, quando tarefa, atividade e relatório tratam da mesma coisa, espera-se que tarefa seja menos detalhado e feito antes da atividade e o relatório seja mais detalhado e feito depois da atividade. Citando um texto ilustrativo:

> Trabalho: tarefa e atividade

> Uma dúvida que sempre aparece para os trabalhadores é a diferença entre sua função e sua atividade de trabalho. Parece pouca coisa, mas existe uma enorme diferença entre essas duas coisas.
Em ergonomia definimos a função ou a tarefa para a qual o empregado foi contratado como sendo o trabalho prescrito, ou seja, aquilo que a empresa descreve como sendo o trabalho que ele deve fazer.
Assim, um operador de máquinas multifuncional tem como função o trabalho de operar máquinas de alguns tipos, um torneiro CNC opera tornos de controle numérico, um estoquista faz controle de estoques, apontamentos recebimento e entrega de materiais, e assim por diante. Desta forma, a tarefa ou trabalho prescrito são apenas uma indicação documental do que o trabalhador deve fazer.
A atividade de trabalho é uma coisa totalmente diferente. É exatamente o que o trabalhador realiza no dia a dia. É também chamada de trabalho real, ou seja, aquilo que realmente o trabalhador faz para cumprir as obrigações prescritas na tarefa.
Portanto, aí já se nota que a tarefa é algo coletivo. Várias pessoas podem ser contratadas para a mesma função. Por exemplo, um auxiliar administrativo ou operador de máquinas terem a mesma tarefa.
A atividade, por sua vez, é individual porque diz respeito àquilo que cada trabalhador realiza na realidade. Isso implica, em primeiro lugar, na interação entre as características físicas, mentais e psicológicas do trabalhador com o seu trabalho, envolvendo aí coisas como as ferramentas, os meios tecnológicos, o ambiente de trabalho, a organização e a gestão. Significa, portanto, que uma mesma tarefa de operação de máquinas pode se mostrar como atividades diferentes.
(https://smabc.org.br/a-diferenca-entre-tarefa-e-atividade/)

Voltando à específica tarefa de aprender/ensinar programação de computadores, alguns assuntos constam da ementa da disciplina (https://uspdigital.usp.br/jupiterweb/obterDisciplina?nomdis=&sgldis=ach2001). Espera-se que sejam apresentados, entre outros motivos, pela formação/organização de conhecimento, por influenciar outros assuntos dentro da disciplina e por abordar assuntos que serão tratados ou usados em outras disciplinas. Tomei a liberdade de organizar os assuntos da ementa em uma lista hierárquica, os índices da lista serão usados para referenciá-los:

###### Lista de assuntos na ementa

1. Noções de organização de computadores:
    1. modelo de von Neumann, (por uma questão do Markdown, precisei notar assim. Na enumeração dos ítens, considere equivalente o uso de números, algarismos romanos e letras do alfabeto pois, dependendo da escolha do site para renderização de markdown isso muda...)
    2. linguagens, 
        1. interpretação e compilação,  (por uma questão do Markdown, precisei notar assim, mas este é o item 1.2.1)
    3. representação interna dos dados. 
2. Resolução de problemas e desenvolvimento de algoritmos, 
    1. análise de problemas, 
    2. estratégias de solução, representação e documentação. 
3. Tipos de dados: escalares, arranjos, matrizes, cadeias de caracteres. 
4. Passagem de parâmetros. 
5. Linguagem de programação e transcrição de algoritmos. 
6. Introdução a uma linguagem imperativa. 
7. Depuração (debugger) e documentação de programas. 
8. Testes unitários. 
9. Introdução a algoritmos de busca e ordenação. 
10. Manipulação de referências.

Passo a enunciar o problema como: "Aprender/ensinar programação de computadores em 17 a 19 semanas, abordando suficientemente os assuntos listados na ementa".

## Estratégias de ensino/aprendizagem

É possível ir de item em item na ementa e expor os assuntos, conceitos e exercitá-los. Começaríamos com uma breve história da computação, seguiríamos por computadores atuais, linguagens de programação em geral, linguagem C em específico, projetos (ié como dividir um programa em vários arquivos), depuração e teste de programas. No final do prazo, busca e ordenação (para conectar com Análise de Algoritmos) e manipulação de referências (para conectar com Algoritmos e Estruturas de Dados). Há pessoas que estão melhor adaptadas a esta organização e já vi livros didáticos com essa organização.

<!--- A informação na Wikipedia é fornecida por pessoas que têm certa familiaridade com computadores, o que claramente influencia o uso do vocabulário, o formato do texto e, quando há, preferência entre definições alternativas, principalmente em assuntos controversos. Por exemplo, a definição apresentada para Linguagem é um tanto axiomática. Acredito que em textos mais antigos (do começo do século XX) linguagem não seria definida desta forma pois a aplicação de matemática e computação sobre linguagens é, comparada ao estudo de linguagens, mais recente. --->

Também é possível partir de algo que a nós, seres humanos, é familiar: a linguagem.

> Uma linguagem é um sistema estruturado para comunicação que é composto de gramática e vocabulário. É a forma predominante de comunicação entre humanos tanto de forma falada como, através de símbolos, de forma escrita.(...) (https://en.wikipedia.org/wiki/Language)

> Uma linguagem de programação é uma linguagem usada para expressar programas de computador (https://en.wikipedia.org/wiki/Programming_language)

> Programas de computador são ou uma sequência, ou um conjunto de instruções escritos em uma linguagem de programação para um computador executar (https://en.wikipedia.org/wiki/Computer_program)

> O computador executar, em computação, é o processo em que um programa de computador é processado para desempenhar as ações codificadas no programa. (https://en.wikipedia.org/wiki/Execution_(computing))

Note que aquilo que está contido em um programa de computador é *executado* e esse conteúdo é composto por instruções para o computador.

**nota**: Um raciocínio longo, talvez tortuoso, pode justificar que a afirmação *HTML é uma linguagem de programação* seja considerada verdadeira. Entretanto, entre profissionais da computação, no mínimo convencionalmente, HTML não é uma linguagem de programação. HTML é uma linguagem de marcação.

A linguagem C é uma linguagem de programação. C possui vocabulário e gramática logo, em uma abordagem construtivista, seria esperado que vocabulário e gramática fossem apresentados... mas poucos aprendem uma linguagem estudando primeiro as regras de formação... mesmo na norma técnica que define a linguagem C (https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) , a gramática formal é apresentada em um apêndice. No resumo (do draft) da norma o autor já informa que esse documento deve ser de conhecimento de programadores e implementadores de compiladores mas não é um tutorial.

Há uma porção de cursos e outras apostilas que se propõe a ensinar linguagem C. O conteúdo das que vi segue um roteiro comum: palavras reservadas, constantes, variáveis, operações lógicas e aritméticas, pré-processador, comandos, funções, ponteiros, estruturas de dados. Essa sequência está na *trilha principal* desta apostila mas não pretendo copiar ou traduzir informação que já está nesse material. Pretendo "desafiar" o aluno/leitor com "problemas" (assunto que já passou pela etapa de problematização e pode ser fraseado como um problema), orientar a solução, apresentar referências à norma e outras fontes, enriquecer a informação, acrescentar exemplos.

**nota**: mais sobre o uso de linguagens em computação, taxonomias de linguagens e lista de linguagens em [linguagensEmComputação.md](./linguagensEmComputação.md)

Eu gostaria que vocês trocassem impressões com colegas e comigo sobre o que aprenderam, como aprenderam e se há pontos fortes/fracos nas estratégias de ensino.

Acredito que seres humanos, como nós, aprendemos linguagens a partir de exemplos e praticando exemplos e variações. Sobre essa *base* é apresentada, depois, a teoria e os desdobramentos. É claro que essa maneira de aprender tem seus problemas. Em analogia ao estudo de linguas,  frequentemente sabemos alguns tempos verbais antes de saber que são tempos verbais e sabemos conjugar alguns verbos sem saber o que é conjugação de verbos. Por outro lado, somos capazes de nos expressar (escrever programas).

Este é o objetivo desta apostila. Ao final da prática dos exercícios, quem seguiu as orientações contidas nela deve conseguir *expressar-se* usando a linguagem C. *Expressar-se* significa escrever programas de computador nessa linguagem.

*Ser capaz de escrever programas* implica que se é capaz de sintetizar/gerar (muito mais que alguns) programas. A comprovação, acredito que definitiva, da capacidade de sintetizar/gerar programas é gerá-los todos. Uma tarefa impossível para uma pessoa.

Como essa pessoa conseguiria saber que é capaz de escrever programas? Como uma outra pessoa poderia avaliar a capacidade da primeira?

Acho que é aí que entram os indicadores: avaliações, exercícios, notas, ...

O processo de ensinar/aprender e testar através de indicadores, mesmo para um não-pesquisador no assunto (como eu), tem falhas. Argumentar que "é o melhor que se tem", por ser usado há séculos, por "dar resultado", ... não me satisfaz, em termos do tal ceticismo científico, mas a necessidade prática sempre urge, então "o melhor que se tem" é o que acabo usando...

O indicador que usarei para balizar o processo de ensinar/aprender (mas não o de avaliar) é "Compreender, com detalhes e vocabulário suficiente para Introdução a Programação, um [específico programa](./Balizador), após 3/4 do prazo dado (semestre).". Acredito que isto indicará que aprendeu-se o suficiente para compreender os programas/algoritmos que serão apresentados nas próximas disciplinas, sem ocupar-se em demasia com aspectos de programação como sintaxe, declaração de variáveis e outros - ocupar-se em aprender o aspecto do assunto apropriado na próxima disciplina. Por exemplo, em análise de algoritmos, dado um programa/algoritmo, perguntar-se qual a complexidade assintótica ao invés de perguntar-se onde as variáveis precisam ser declaradas.

Caso o objetivo fosse compreender o específico programa, eu acharia adequado partir para sua análise até o nível de detalhamento necessário, mas esta seria uma estratégia de mínimo esforço para satisfazer o indicador, que é algo muito limitado. O objetivo é construir nosso conhecimento para compreender o específico programa e outros que virão durante nossa vida. Na próxima seção, inicia-se o processo de contrução.

Antes de iniciar, usar *Large Language Models - LLMs* como ChatGPT, Gemini, Copilot, ... é inevitável pois eles estão amplamente disponíveis. Se alguém usar o buscador Google será exposto a uma resposta gerada por Gemini... mas saiba usar os modelos para ampliar seu conhecimento pois esse uso não é facilmente automatizável. Fazer tarefas automatizáveis aumenta a chance se sermos considerados dispensáveis. Estou exagerando em alguns pontos da história mas a preocupação em tornar-se dispensável não é exagero... Veja como pretendo usar LLMs na disciplina em https://github.com/FNakano/IP-Apostila/tree/main/UsarLLMs


## Preparação 

<!--- O material nesta apostila tem formatos variados, entre eles, texto expositivo, tutorial, exemplos, ... e muitas referências.

As relações entre tópicos nesse material, por exemplo o que  (ié que tópicos) saber antes de aprender um (outro) tópico, como um tópico influi no outro, definem trilhas. A *trilha principal* é a sequência apresentada na norma que define a linguagem C e que influencia fortemente (a meu ver) como o tutorial que apresenta a linguagem C em W3Schools (https://www.w3schools.com/c/index.php) está sequenciado. A *trilha dos exemplos* usa tarefas longas para balizar a sequência da aprendizagem e cada passo da tarefa é associada a exemplos curtos e referências para outros tutoriais e para os tópicos na norma. 

A informação que esta apostila contém (ié o valor), mesmo implicitamente, está na seleção dos exemplos e no nível de detalhamento, baseadas na experiência do autor e dos colaboradores. Frequentemente o conteúdo de cada tópico está bem apresentado nas referências o que faz a apostila ser *apenas* uma lista de referências. Seu valor está na organização e na conexão entre essas referências.

---> 

Em geral, as apostilas que apresentam alguma linguagem de programação concentram-se em apresentar a linguagem de programação, sem orientar o leitor a respeito de como criar sua área de trabalho, como usar a área de trabalho, como lidar com as atividades propostas. A esses elementos chamarei preparação.

Àrea de trabalho é o nome que dou ao espaço físico e computacional onde aprende-se a programar. A área de trabalho de referência contém, entre outras coisas, um desktop ou um notebook e programas como compilador, editor de texto e interface de linha de comando. A interface de referência é um ambiente em modo texto, mesmo que esteja embarcada em um ambiente gráfico, em que uma pessoa digita comandos e estes são executados pelo computador. Usaremos os termos *Command Line Interface - CLI* ou *prompt de comando* ou terminal ou *shell* para designar esse ambiente. Alguns comandos úteis para navegar na linha de comando são apresentados em https://github.com/FNakano/IP-Apostila/tree/main/ShellLinux .


Considerando que o público-alvo deste material seja de estudantes que acabaram de entrar na graduação, é de se esperar que quase todos tenham telefone celular mas nem todos tenham desktop ou notebook, logo, se for possível usar o telefone celular como área de trabalho, diminui-se a urgência em ter à disposição um desktop ou notebook.

O trabalho de criar/configurar áreas de trabalho pode ser abreviado, por exemplo usando compiladores on-line como https://www.onlinegdb.com/online_c_compiler ou usando ambientes de aprendizagem como https://www.w3schools.com/c/index.php .  As duas formas abreviadas têm limitações e podem não atender a todas as necessidades, por outro lado, permitem que se aprenda a programar em C até usando uma *smart TV*.

Tutoriais são documentos que apresentam a sequência de passos usada para atingir certo objetivo. Espera-se que quem os siga seja capaz de, num segundo momento, decompor a informação nos tutoriais e recompô-la para a finalidade que escolher.
 
Tutoriais mostrando como construir diferentes áreas de trabalho enriqueceriam esta apostila. Para apresentar um tutorial útil:

- É possível usar o telefone celular no lugar do desktop/notebook na área de trabalho. O tutorial que mostra como fazer, em telefones com sistema Android, é https://github.com/FNakano/IP-Apostila/tree/main/InstalarTermux vai da instalação do app através da loja Google até a execução de um programa escrito em linguagem C.

## Sequência de assuntos a abordar em aula


0. O primeiro programa em C (https://en.wikipedia.org/wiki/C_(programming_language)#%22Hello,_world%22_example)
    1. header file (#include)
        1. pré-processador
            1. substituição de texto;
    2. main() - o que é
        1. funções
            1. declaração de função;
            2. protótipo (assinatura) de função;
            3. corpo da função;
            4. chamada de função;
    3. puts(...) - o que é
        1. o argumento de puts(...) - o que é
        2. constante imediata (contrapor com constante declarada para o pré-processador e com constante declarada com palavra reservada `const`);
        3. constante imediata do tipo string;
        4. a existência de variáveis tipadas e o tipo `char`;
    4. como strings são construídas a partir de `char`;
    5. printf(...) - o que é
        1. os argumentos de printf - o que são
        1. constante imediata do tipo string
        2. especificadores de formato
        3. variáveis - atribuição é diferente de equivalência matemática;
    6. existem outros tipos de variáveis;
    7. melhorar o programa incluindo perguntar o nome e escrever o nome;
        1. declarar variáveis
        2. por que declarar string é feito com `char s[n]` 
        3. complicações: codificação de caracteres 
        4. a função `scanf(...)`
            1. os argumentos de `scanf(...)`
            2. spoiler: quando usa string `scanf(...)` esconde o conceito de ponteiros, que é importante em C.
            3. mas quando usa tipos primitivos, o uso de ponteiros aparece;
1. Tarefa: criar uma calculadora de quatro operações interativa
    1. apresentar tipos de dados numéricos: int, float, double
    2. falar sobre truncamento, arredondamento e propagação de erros
    3. falar sobre string de formato e valor de retorno do scanf, mencionar *parsing*
    4. falar sobre string de formato do printf
    5. apresentar o comando de seleção `if`
    6. apresentar o comando de repetição `do..while`
    7. explicar, de forma simples, a necessidade do `&` no scanf ou o uso de `atof`, conforme o caso.
        1. o esperado é usar `double v; scanf ("%lf", &v);`
2. Tarefa: automatizar a aplicação de um questionário;
    1. começar com uma questão;
        1. atribuir pontos às respostas possíveis, apresentar a pontuação obtida em uma particular execução do programa;
            1. caracteres comparados a strings: variável de tipo primitivo comparado a variável de tipo derivado;
                1. Por que é assim? ... porque computadores são assim:
                    1. Modelo de Von Neumann;
                    2. Memória do computador (RAM);
        2. usar comandos de seleção para converter resposta em ponto; 
    2. testar, por exemplo: o que acontece caso a resposta não seja válida?
    3. melhorar o programa - **repetir** a pergunta **caso a resposta não seja válida**;
    4. o `&` nos argumentos de `scanf(...)`: referências e ponteiros.
        1. um modelo abstrato para a memória do computador: um array (tabela) de endereços e valores armazenados;
            1. entendendo este modelo para memória acredito que fica mais fácil entender `*` e `&`;
            2. (spoiler) entendendo este modelo para memória acredito que fica mais fácil entender `.` e `->` em `struct`;
            3. entender isto é importante para Algoritmos e Estruturas de Dados;
        2. asterisco `*` como modificador de tipo;
        3. asterisco `*` como operador;
        4. O operador `&` (e-comercial); 
        5. imprimindo ponteiros, usando "%p";
2. aplicar várias questões (obs.: código-fonte em um só arquivo);
    1. notar a **repetição** de comandos;
    2. eliminar a **repetição** de comandos;
        1. funções
            1. passagem de argumentos;
                1. tipos de variável: primitivo e derivado (n3220 sec. 6.2.5)
                    1. tipo derivado -> referência -> ponteiro
                2. quando o argumento tem tipo primitivo;
                3. quando o argumento tem tipo derivado;
            2. escopo de variáveis;
        2. arrays de strings e strings como arrays de caracteres;
            1. usar arrays para armazenar o texto das questões;
            2. `malloc`, `calloc`, `realoc`, `free`;
    3. trocar as questões sem recompilar o programa;
        1. caso 1: com as questões armazenadas em um array inicializado no código - desafio: criar uma função capaz de apresentar qualquer uma das questões, receber a resposta do usuário e retornar a resposta;
        2. caso 2: acrescentar a funcionalidade de ler e escrever perguntas em arquivo;
        3. caso 3: fazer um log das perguntas, respostas, ...;
3. Expositivo: buscar e ordenar;
    1. arrays de números inteiros;
    2. dados-satélite e estruturas de dados;
    3. insertion-sort, de acordo com o livro de Análise de Algoritmos;
4. Código-fonte em vários arquivos;
    1. por quê? Módulos!;
    2. make;
5. Compreender o Balizador;
6. Tarefa: comparar tempo de execução de diferentes algoritmos de ordenação.
    1. a função qsort da biblioteca stdlib;
    2. ponteiro para funções;

## Método

Inicia-se propondo que os estudantes executem um programa (ié, uma tarefa). O programa é fornecido em um arquivo, seja documentação, seja código-fonte. Após o sucesso na execução, ou os estudantes ou o professor usam LLM para aprender o que o programa faz e possam melhorar (avaliar, criticar, acrescentar informação) as respostas apresentadas pelo LLM, bem como aprimorar seus conhecimentos usando a resposta do LLM.

Em seguida são propostos desafios para incrementar os programas, é possível usar qualquer apoio disponível, inclusive e principalmente o apoio do docente. Também é importante mostrar a compreensão sobre os ajustes que fez no programa. Quando todos os desafios forem concluídos com sucesso, ou o tempo de aula tiver se esgotado, a atividade é terminada.

O processo que inicia no recebimento da tarefa e termina no sucesso da execução **também** é denominado *ciclo de vida do programa* (https://en.wikipedia.org/wiki/Program_lifecycle_phase). Acredito que esse entendimento era o mais comum até lá pela década de 1980. Depois disso houve uma popularização da construção de software (programas), empresas construindo programas cada vez mais sofisticados e a larga adoção de métodos de engenharia de software para a construção dos programas. O entendimento mais comum passou a ser o apresentado em https://en.wikipedia.org/wiki/Systems_development_life_cycle .

![](./Captura%20de%20tela%20de%202026-01-22%2013-49-02.png)
FONTE: o autor
captura de tela de https://en.wikipedia.org/wiki/Program_lifecycle_phase, para fins documentais pois está cada vez mais difícil acessar esse conteúdo.

Nesse ciclo, fica claro que durante as tarefas, vamos:

1. editar o código-fonte numa versão inicial, consertar erros, acrescentar funcionalidades
2. compilar o código-fonte, linkar o código-objeto, criar o programa executável
3. distribuir, instalar, carregar, executar o programa executável e
4. repetir esses passos até que a execução do programa apresente um resultado satisfatório.

Haverá tarefas que requerem explicações mais longas para serem compreendidas. Nestes casos, inicia-se com uma aula rápida (*briefing*) e segue-se o processo anterior.

Haverá provas presenciais no estilo tradicional: papel e lápis, sem consulta, duração de 1h30min.

## Tabela de cruzamento de referências

Nesta tabela, os *assuntos a abordar em aula* (https://github.com/FNakano/IP-Apostila?tab=readme-ov-file#sequ%C3%AAncia-de-assuntos-a-abordar-em-aula) são associados:
- aos assuntos da ementa (https://github.com/FNakano/IP-Apostila?tab=readme-ov-file#lista-de-assuntos-na-ementa), 
- às seções da documentação do padrão ISO da linguagem C (https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)
- às seções do guia de referência para a linguagem C implementada no GCC (https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html)
- aos tutoriais da W3Schools (https://www.w3schools.com/c/index.php)
 
## Anotações diversas

```

r
├── Zks3cmJmQ2xrLUtqREhUUA [title=Em que ferramentas fazer/praticar programação?]
├── b2dHdS1vcjl6eFJjV0lzSA [title=Sistema de arquivos, interface de linha de comando, comandos de linha de comando]
├── VFhHRzFWRW5xd0M5VWdHUQ [title=C tem vários implementadores e às vezes eles não seguem a norma]
├── amNkd2pjSl8wNkYwRmVYQg [title=C tem norma]
├── VHhhV0xaMlRDbUVyN0Z1Zw [title=Tipos primitivos- crud]
│   ├── U3pHd0RXekFuTFY1WUVSQQ [title=números em ponto flutuante, limitação na precisão, de onde vem]
│   ├── cUZfWFZTTTVabGNZWDFTNw [title=Ponteiros - aritmética, abstração da memória do computador]
│   ├── c052aS1tbXhBTThDZjFEMA [title=Float e double - aritmética, lógica e bit a bit]
│   ├── NklUSE1uQkxsMXItLVdUMw [title=Int e variações - aritmética, lógica e bit a bit]
│   ├── TFp0VmlhWFF5TUpSSTJPVQ [title=Warning e erros associados]
│   ├── aDJ0eTZkeEUyVl9WTzB2YQ [title=Type cast]
│   └── VjN5UzMwbEpRei1oVGVpQg [title=Char]
├── VDV0X2ZUNHRnOTVHZHRpRA [title=Github, wikiversity, wikibooks, ... onde hospedar?]
├── Z1gwODVrRjdCRTNPZ1VWQQ [title=Abstração - definição formal; minha opinião (uma maneira de prosseguir sabendo o mínimo). O que me incomoda: saber "o suficiente", aprender os detalhes até ficar satisfeito; esforço e tempo usado para aprender. Arbitrar "quanto é suficiente" sempre resulta em incerteza pois depende, também, da interpretação, do contexto da construção do conhecimento, ... por isso define-se uma forma de avaliação, que deve ser seguida]
├── VGhHZGZBb013X1d1dTZKbg [title=Símbolos e significados - em matemática comparado com conversas comuns. Ex. um grafo é uma tripla {N, A, f} ...]
├── N1NqRlpzMWRXTnNDVUxONw [title=Critérios de avaliação]
├── VW9nb0JwRzF2ZjB0LWVJWA [title=Testes (unitários e de integração)]
├── TERYSlRUdmZvdS1BczJYdw [title=Funções]
│   └── b21oUU9nczZLbTR4cHBmZQ [title=Argumentos (de chamada), variáveis, escopo de variáveis]
├── WnBWQ0h6a0pkdDZIeU1tRw [title=Tipos derivados: estruturas de dados: struct e union, objetos]
│   └── R0RwV1ZDVXE2ajdlQzd4UQ [title=Timespec]
├── TlI2eTVhbjhSWG1sbmJqMA [title=Palavras reservadas : Comandos, operadores]
├── QjVtV1dNclYwVmZGQTd4cA [title=Palavras: reservadas (comandos, operadores),  constantes, identificadores]
│   └── aFUyeVhycG1GbU1ZTm9tNg [title=Identificadores: palavras que, no contexto de uma linguagem de programação,  você define como se escreve e o que significam.]
├── UWh5QjlhckZ3aXM0MGZWSw [title=Header files (pre-processador)]
├── LWwzb3VaZ0dRTld5czlleg [title=Tutoriais (Exemplos)]
│   ├── VDAyajhEY0NBelFhRXBoeQ [title=Busca e ordenação]
│   ├── YkRaU3BkZ1VGS0VnV0JPag [title=Investimento]
│   └── ZVM2VE1oWkFQQlFtMmp2bg [title=Questionário]
├── WmpKZWtLODhLUXB1ZWp5ag [title=Modularização em funções,  em arquivos, header,  make ( npm, maven, pip, requirements, cmake)]
├── X2ZMejJETjZGcUFQWGZhWA [title=Warnings e erros de compilação e de execução]
├── NVQtRE5NSWZmdWNCOGJnTg [title=Comandos de repetição: while,  do-while,  for]
├── NmdwTlV5SVhDOTJwbF80Rw [title=Arrays - crud]
├── N1ppY3Q1VWtSN0FlSFNjTw [title=Como praticar: beecrowd]
├── Qnc2S0VQd2lybXQ3X1o3Rw [title=Comandos em sequência, comandos aninhados]
├── YzkzcWtCa2hGZE5nU0RLNQ [title=Outras maneiras de aprender: w3schools]
├── ZUJSeWlVWjFaTlV3cXNIQg [title=Comandos de seleção: if, switch]
├── S2JDQndFdDBpNzVMT2o0ZA [title=Sequência de execução e entry point]
├── M1RlcFdsemtFYzBvRGhBbA [title=Documentação: C tem padrão,  embora os desenvolvedores possam não segui-lo. A Documentação do padrão é o que usaremos como descrição do funcionamento esperado]
├── THlUb1dEUjNXOXNJWnduQQ [title=Primeiro programa]
│   ├── UktGSWwtS3JVVkxuZHNIcQ [title=O primeiro programa é um projeto tão pequeno que as atividades notáveis são editar, compilar e executar. Dependendo do contexto,  editar e executar]
│   ├── c3NUS3VYS3VWSlB6OWtncg [title=Ciclo de vida em grandes projetos: há vários, engenharia de software https://en.wikipedia.org/wiki/Software_development_process, por exemplo, sdlc: https://en.wikipedia.org/wiki/Systems_development_life_cycle uma variação que inclui a operação do sistema é devops: https://en.wikipedia.org/wiki/DevOps . Agile e scrum são técnicas usadas no sdlc]
│   └── X2N3ZjlGWURlTDBjNW1xOQ [title=Ciclo de vida em pequenos projetos: editar, compilar, linkar, distribuir, instalar, carregar, executar https://en.wikipedia.org/wiki/Program_lifecycle_phase]
├── YU5aSUJfQXBaWHJaZjFZbg [title=Objetivo principal da disciplina : Introduzir o aluno aos conceitos básicos de computação e lógica de programação, sob o paradigma imperativo.]
│   ├── VTUyMG05WExhTDc3U3J5NA [title=Outras linguagens, como python, Java, Java script,  ... tem muita semelhança com C]
│   └── dFZuTHE0cHR1LUFIMnVGSA [title=Em um curso de graduação,  disciplinas são coordenadas para fornecer uma formação para o aluno. Para isso, grupos de disciplinas têm elementos em comum. Para IP, AED1 e AED2, um desses elementos é a linguagem de programação,  que é C.]
├── MzFfMEZFazBoYmVDYXhkZQ [title=Na graduação,  disciplinas são coordenadas de maneira a prover uma formação aos alunos. Para conseguir isso alguns elementos em comum são definidos. Um deles é a linguagem de programação. IP]
├── WnBsTktmaVZZUmM4ZHk1Nw [title=Usar computadores para executar o que você definir]
├── U3pHd0RXekFuTFY1WUVSQQ [title=números em ponto flutuante, limitação na precisão, de onde vem]
├── b21oUU9nczZLbTR4cHBmZQ [title=Argumentos (de chamada), variáveis, escopo de variáveis]
├── cUZfWFZTTTVabGNZWDFTNw [title=Ponteiros - aritmética, abstração da memória do computador]
├── c052aS1tbXhBTThDZjFEMA [title=Float e double - aritmética, lógica e bit a bit]
├── NklUSE1uQkxsMXItLVdUMw [title=Int e variações - aritmética, lógica e bit a bit]
├── R0RwV1ZDVXE2ajdlQzd4UQ [title=Timespec]
├── VDAyajhEY0NBelFhRXBoeQ [title=Busca e ordenação]
├── YkRaU3BkZ1VGS0VnV0JPag [title=Investimento]
├── ZVM2VE1oWkFQQlFtMmp2bg [title=Questionário]
├── TFp0VmlhWFF5TUpSSTJPVQ [title=Warning e erros associados]
├── aDJ0eTZkeEUyVl9WTzB2YQ [title=Type cast]
├── VjN5UzMwbEpRei1oVGVpQg [title=Char]
├── aFUyeVhycG1GbU1ZTm9tNg [title=Identificadores: palavras que, no contexto de uma linguagem de programação,  você define como se escreve e o que significam.]
├── UktGSWwtS3JVVkxuZHNIcQ [title=O primeiro programa é um projeto tão pequeno que as atividades notáveis são editar, compilar e executar. Dependendo do contexto,  editar e executar]
├── VTUyMG05WExhTDc3U3J5NA [title=Outras linguagens, como python, Java, Java script,  ... tem muita semelhança com C]
├── dFZuTHE0cHR1LUFIMnVGSA [title=Em um curso de graduação,  disciplinas são coordenadas para fornecer uma formação para o aluno. Para isso, grupos de disciplinas têm elementos em comum. Para IP, AED1 e AED2, um desses elementos é a linguagem de programação,  que é C.]
├── c3NUS3VYS3VWSlB6OWtncg [title=Ciclo de vida em grandes projetos: há vários, engenharia de software https://en.wikipedia.org/wiki/Software_development_process, por exemplo, sdlc: https://en.wikipedia.org/wiki/Systems_development_life_cycle uma variação que inclui a operação do sistema é devops: https://en.wikipedia.org/wiki/DevOps . Agile e scrum são técnicas usadas no sdlc]
└── X2N3ZjlGWURlTDBjNW1xOQ [title=Ciclo de vida em pequenos projetos: editar, compilar, linkar, distribuir, instalar, carregar, executar https://en.wikipedia.org/wiki/Program_lifecycle_phase]

```
