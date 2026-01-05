# IP-Apostila
Apostila de FNakano para IP

<!--- páginas curtas, exemplos, formato pergunta-resposta (ligado a discussions e issues), tutoriais e documento. --->

## Preâmbulo

(P: Por que começar assim, com "longas" explicações em assuntos que parecem não ser próximos a programação de computadores? R.: Para saber "onde estamos" e "para onde iremos", tentando não "nos perder" e nem perder a motivação de estudar.)

**nota**: Uso explicações e definições apresentadas na [Wikipedia](https://en.wikipedia.org/wiki/Main_Page) pois há pouca divergência na informação apresentada nela em relação a livros didáticos e acadêmicos nos assuntos que abordo, até onde sei. 

Acho que narrativas são inevitáveis na comunicação entre pessoas... e elas são importantes no ensino-aprendizagem. Não tenho o conhecimento dos (seus) professores em filosofia e comunicação (que geralmente dão aulas em disciplinas do ciclo básico), mas empresto do conhecimento (deles?):

> Os seres humanos geralmente afirmam entender os eventos quando conseguem formular uma história ou narrativa coerente explicando como eles acreditam que o evento foi gerado. (https://pt.wikipedia.org/wiki/Narrativa#Abordagens_das_ci%C3%AAncias_sociais)

... então preparem-se para ouvir e contar histórias ...

Minha primeira história tem a ver com como entender um curso de graduação: Podemos pensar um curso de graduação como um conjunto de disciplinas interrelacionadas e apresentadas aos alunos para formar seu conhecimento. As disciplinas podem abordar um mesmo assunto, cada disciplina com enfoque diferente ou com nível de detalhamento diferente. Por exemplo, na disciplina Introdução à Programação ensina-se o que é ordenação e alguns programas (algoritmos) de ordenação. O assunto é retomado e expandido na disciplina Análise de Algoritmos.

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

Voltando à específica tarefa de aprender/ensinar programação de computadores, alguns assuntos constam da ementa da disciplina (https://uspdigital.usp.br/jupiterweb/obterDisciplina?nomdis=&sgldis=ach2001). Espera-se que sejam apresentados, entre outros motivos, pela formação/organização de conhecimento, por influenciar outros assuntos dentro da disciplina e por abordar assuntos que serão tratados ou usados em outras disciplinas. Tomei a liberdade de organizar os assuntos da ementa em uma lista hierárquica:

- Noções de organização de computadores:
  - modelo de von Neumann, 
  - linguagens, 
    - interpretação e compilação, 
  - representação interna dos dados. 
- Resolução de problemas e desenvolvimento de algoritmos, 
  - análise de problemas, 
  - estratégias de solução, representação e documentação. 
- Tipos de dados: escalares, arranjos, matrizes, cadeias de caracteres. 
- Passagem de parâmetros. 
- Linguagem de programação e transcrição de algoritmos. 
- Introdução a uma linguagem imperativa. 
- Depuração (debugger) e documentação de programas. 
- Testes unitários. 
- Introdução a algoritmos de busca e ordenação. 
- Manipulação de referências.

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


Acredito que seres humanos, como nós, aprendemos linguagens a partir de exemplos e praticando exemplos e variações. Sobre essa *base* é apresentada, depois, a teoria e os desdobramentos. É claro que essa maneira de aprender tem seus problemas. Em analogia ao estudo de linguas,  frequentemente sabemos alguns tempos verbais antes de saber que são tempos verbais e sabemos conjugar alguns verbos sem saber o que é conjugação de verbos. Por outro lado, somos capazes de nos expressar (escrever programas).

Este é o objetivo desta apostila. Ao final da prática dos exercícios, quem seguiu as orientações contidas nela deve conseguir *expressar-se* usando a linguagem C. *Expressar-se* significa escrever programas de computador nessa linguagem.

## Preparação 

O material nesta apostila tem formatos variados, entre eles, texto expositivo, tutorial, exemplos, ... e muitas referências.

As relações entre tópicos nesse material, por exemplo o que  (ié que tópicos) saber antes de aprender um (outro) tópico, como um tópico influi no outro, definem trilhas. A *trilha principal* é a sequência apresentada na norma que define a linguagem C e que influencia fortemente (a meu ver) como o tutorial que apresenta a linguagem C em W3Schools (https://www.w3schools.com/c/index.php) está sequenciado. A *trilha dos exemplos* usa tarefas longas para balizar a sequência da aprendizagem e cada passo da tarefa é associada a exemplos curtos e referências para outros tutoriais e para os tópicos na norma. 

A informação que esta apostila contém (ié o valor), mesmo implicitamente, está na seleção dos exemplos e no nível de detalhamento, baseadas na experiência do autor e dos colaboradores. Frequentemente o conteúdo de cada tópico está bem apresentado nas referências o que faz a apostila ser *apenas* uma lista de referências. Seu valor está na organização e na conexão entre essas referências.

Em geral, as apostilas que apresentam alguma linguagem de programação concentram-se em apresentar a linguagem de programação, sem orientar o leitor a respeito de como criar sua área de trabalho, como usar a área de trabalho, como lidar com as atividades propostas, o que chamo de preparação.

Àrea de trabalho é o nome que dou ao espaço físico e computacional onde aprende-se a programar. A área de trabalho de referência contém, entre outras coisas, um desktop ou um notebook e programas como o compilador e o editor de texto. A interface de referência é a linha de comando, mesmo que esteja embarcada em um ambiente gráfico. Usaremos *Command Line Interface - CLI* ou *prompt de comando* ou terminal.

O trabalho de criar/configurar áreas de trabalho pode ser abreviado, por exemplo usando compiladores on-line como https://www.onlinegdb.com/online_c_compiler ou usando ambientes de aprendizagem como https://www.w3schools.com/c/index.php .  As duas formas abreviadas têm limitações e podem não atender a todas as necessidades.

Tutoriais são documentos que apresentam a sequência de passos usada para atingir certo objetivo. Espera-se que quem os siga seja capaz de, num segundo momento, decompor a informação nos tutoriais e recompô-la para a finalidade que escolher.
 
Tutoriais mostrando como construir diferentes áreas de trabalho enriqueceriam esta apostila. Para apresentar um tutorial útil, é possível usar o telefone celular no lugar do desktop/notebook na área de trabalho. O tutorial que mostra como fazer, em telefones com sistema Android, é https://github.com/FNakano/IP-Apostila/tree/main/InstalarTermux vai da instalação do app através da loja Google até a execução de um programa.

Trilha dos exemplos em poucos ítens:

0. O primeiro programa em C (https://en.wikipedia.org/wiki/C_(programming_language)#%22Hello,_world%22_example)
1. Tarefa: automatizar a aplicação de um questionário;
2. Tarefa: simular um investimento ao longo do tempo;
3. Expositivo: buscar e ordenar;
4. Tarefa: comparar tempo de execução de diferentes algoritmos de ordenação.


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
