# IP-Apostila
Apostila de FNakano para IP

páginas curtas, exemplos, formato pergunta-resposta (ligado a discussions e issues), tutoriais e documento.

## Introdução

**nota**: Uso explicações e definições apresentadas na [Wikipedia](https://en.wikipedia.org/wiki/Main_Page) pois há pouca divergência na informação apresentada nela em relação a livros didáticos e acadêmicos nos assuntos que abordo, até onde sei. A informação na Wikipedia é fornecida por pessoas que têm certa familiaridade com computadores, o que claramente influencia o uso do vocabulário, o formato do texto e, quando há, a preferência entre definições alternativas, principalmente em assuntos controversos. Por exemplo, a definição apresentada para Linguagem é um tanto axiomática. Acredito que em textos mais antigos (do começo do século XX) linguagem não seria definida desta forma pois a aplicação de matemática e computação sobre linguagens é, comparativamente, mais recente.

A partir de algo que a nós, seres humanos, é familiar: a linguagem.

> Uma linguagem é um sistema estruturado para comunicação que é composto de gramática e vocabulário. É a forma predominante de comunicação entre humanos tanto de forma falada como, através de símbolos, de forma escrita.(...) (https://en.wikipedia.org/wiki/Language)

> Uma linguagem de programação é uma linguagem usada para expressar programas de computador (https://en.wikipedia.org/wiki/Programming_language)

> Programas de computador são ou uma sequência, ou um conjunto de instruções escritos em uma linguagem de programação para um computador executar (https://en.wikipedia.org/wiki/Computer_program)

> O computador executar, em computação, é o processo em que um programa de computador é processado para desempenhar as ações codificadas no programa. (https://en.wikipedia.org/wiki/Execution_(computing))

Note que aquilo que está contido em um programa de computador é *executado* e esse conteúdo é composto por instruções para o computador.

**nota**: Um raciocínio longo, talvez tortuoso, pode justificar que a afirmação *HTML é uma linguagem de programação* seja considerada verdadeira. Entretanto, entre profissionais da computação, no mínimo convencionalmente, HTML não é uma linguagem de programação. HTML é uma linguagem de marcação.

A linguagem C é uma linguagem de programação e será apresentada nesta apostila. Em se tratando de uma linguagem, C possui vocabulário e gramática logo, em uma abordagem construtivista, seria esperado que vocabulário e gramática fossem apresentados. Esta é a sequência usada na norma técnica que define a linguagem C (https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf). Também é a sequência que usarei na *trilha principal* desta apostila.

**nota**: mais sobre o uso de linguagens em computação, taxonomias de linguagens e lista de linguagens em [linguagensEmComputação.md](./linguagensEmComputação.md)


Ocorre que seres humanos, como nós, aprendemos linguagens através de exemplos e praticando exemplos e variações. É claro que essa maneira de aprender tem seus problemas. Por exemplo, frequentemente sabemos alguns tempos verbais antes de saber que são tempos verbais e sabemos conjugar alguns verbos sem saber o que é conjugação de verbos. Por outro lado, somos capazes de nos expressar.

Este é o objetivo desta apostila. Ao final da leitura, quem seguiu as orientações contidas nela deve conseguir *expressar-se* usando a linguagem C. *Expressar-se* significa escrever programas de computador nessa linguagem.

## Preparação 

O material nesta apostila tem formatos variados, entre eles, texto expositivo, tutorial, exemplos, ...

As relações entre tópicos nesse material, por exemplo o que  (ié que tópicos) saber antes de aprender um (outro) tópico, como um tópico influi no outro, definem trilhas. A *trilha principal* é a sequência apresentada na norma que define a linguagem C e que influencia fortemente (a meu ver) como o tutorial que apresenta a linguagem C em W3Schools (https://www.w3schools.com/c/index.php) está sequenciado. A *trilha dos exemplos* usa tarefas longas para ditar a sequência da aprendizagem e cada passo da tarefa é associada a exemplos curtos e referências para outros tutoriais e para os tópicos na norma. 

A informação que esta apostila contém (ié o valor), mesmo implicitamente, está na seleção dos exemplos e no nível de detalhamento, baseadas na experiência do autor e dos colaboradores. Frequentemente o conteúdo de cada tópico está bem apresentado nas referências o que faz a apostila ser *apenas* uma lista de referências. Seu valor está na organização e na conexão entre essas referências.

Em geral, as apostilas que apresentam alguma linguagem de programação concentram-se em apresentar a linguagem de programação, sem orientar o leitor a respeito de como criar sua área de trabalho, como usar a área de trabalho, como lidar com as atividades propostas, o que chamo de preparação.

Àrea de trabalho é o nome que dou ao espaço físico e computacional onde aprende-se a programar. A área de trabalho de referência contém, entre outras coisas, um desktop ou um notebook e programas como o compilador e o editor de texto.

O trabalho de criar/configurar áreas de trabalho pode ser abreviado, por exemplo usando compiladores on-line como https://www.onlinegdb.com/online_c_compiler ou usando ambientes de aprendizagem como https://www.w3schools.com/c/index.php .  As duas formas abreviadas têm limitações e podem não atender a todas as necessidades.
 
Tutoriais mostrando como construir diferentes áreas de trabalho enriqueceriam esta apostila.

Tutoriais são documentos que apresentam a sequências de passos usada para atingir certo objetivo.
 
É possível usar o telefone celular no lugar do desktop/notebook na área de trabalho. O tutorial que mostra como fazer, em telefones com sistema Android é https://github.com/FNakano/IP-Apostila/tree/main/InstalarTermux .

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
