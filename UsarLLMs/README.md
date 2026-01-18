# Usar LLMs

A configuração de um LLM para que possa ser usado como chat passa por um processo chamado "treinamento", em que o algoritmo de Inteligência Artificial tem seus parâmetros ajustados a partir de um conjunto de treinamento. Nos LLMs, o conjunto de treinamento é um conjunto (enorme) de 
documentos, que pode incluir clássicos da literatura de vários países, artigos científicos, livros que ensinam a programar, programas, ...
A qualidade da resposta é testada no que se chama "teste" do algoritmo de IA, em que um conjunto de dados menor e que não foi usado no treinamento é usado para avaliar a taxa de acerto e outros indicadores de qualidade do modelo. 
A pergunta no chat é uma consulta, semelhante à execução de um teste. A resposta, ao invés de ser confrontada com a resposta esperada, é apresentada a quem fez a consulta.

Peça para o LLM explicar, linha por linha, o programa abaixo:
  
```
#include <stdio.h>
void main() {
  puts ("Olá");
}

```

Usando chatGPT (acessado em 2025-01-18)

![](./Captura%20de%20tela%20de%202026-01-18%2013-11-56.png)


Usando Gemma3 (executado localmente com Ollama em 2025-01-18)

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~</b></font>$ ollama show gemma3
  Model
    architecture        gemma3    
    parameters          4.3B      
    context length      131072    
    embedding length    2560      
    quantization        Q4_K_M    

  Capabilities
    completion    
    vision        

  Parameters
    stop           &quot;&lt;end_of_turn&gt;&quot;    
    temperature    1                  
    top_k          64                 
    top_p          0.95               

  License
    Gemma Terms of Use                  
    Last modified: February 21, 2024    
    ...                                 

</pre>

![](./Captura%20de%20tela%20de%202026-01-18%2013-06-51.png)

<!---
Antes de analisar as respostas, considero o uso "Ajude-me a entender o programa..." melhor que o uso "Responda a pergunta da prova" pois o primeiro fornece uma resposta mais geral, que pode ser aplicada **pela pessoa que perguntou** a outros casos enquanto o segundo uso procura resolver um problema imediato. Até é generalizável mas a pessoa que perguntou pouco participa, aprende menos(?) e pode ser substituída por um programa que copia e cola. --->

Vamos analisar as respostas linha a linha:
  
### include <stdio.h>

Resposta do chatGPT

Essa linha inclui a biblioteca padrão de entrada e saída do C.
   - contém imprecisão: o que é incluir? como inclui?
   - contém imprecisão: `stdio.h` não é uma biblioteca (um arquivo que contém funções para executar) - stdio.h é um arquivo de cabeçalho (header) que contém os protótipo das funções. Os protótipos são necessários em `ola.c` para, na compilação, a chamada da função `puts(...)` ser gerada corretamente

Ela é necessária para usar funções como printf, scanf, puts, entre outras.
   - ok, adequado.

Resposta de Gemma3

### void main() { ... }

Resposta do chatGPT

main é a função principal do programa: é onde a execução começa.
  - ok, adequado.

void indica que a função não retorna nenhum valor.
  - ok, adequado.

🔎 Observação importante:(...)
  - a observação é relevante mas o valor de retorno de `main()` nesse programa dificilmente seria diferente de 0 - execução normal. Esse valor corresponde a um código que é enviado ao sistema operacional caso tenha ocorrido um erro na execução do programa e que foi detectado no próprio programa.
  - é boa prática declarar `main` com valor de retorno do tipo `int` e, no corpo da função, terminar com `return 0` Pois está na norma e, dependendo do sistema, programas que executaram com sucesso podem gerar mensagens de erro no sistema operacional por não terem seguido essa prática.
  
Resposta de Gemma3

### puts("Olá");

puts é uma função da biblioteca stdio.h.
  - detalhando, a biblioteca que contém a função `puts`, no Linux, é `glibc` - use `hexedit` em `a.out` para ver os nomes das bibliotecas.
  - novamente, `stdio.h` não é uma biblioteca...

Ela imprime um texto na tela e automaticamente pula para a próxima linha.
  - ok, adequado

Nesse caso, o programa exibirá:
  - característica bacana: oferecer um *preview* da execução do programa.
  

... tente, em seguida, pedir para o LLM: "como posso fazer o programa perguntar o nome de quem o executa e cumprimentar quem o executa?"
  
Esta pode ser uma forma de usar o LLM para aprender.
