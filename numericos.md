# Numéricos

Bom... o objetivo aqui é apresentar exemplos simples de programas numéricos, não é apontar as limitações dos computadores atuais, mas um pouco de contexto pode ser útil...

O uso dos computadores atuais para a solução de problemas envolvendo cálculos com números Reais trazem certas complicações. Para começar, nos computadores, não é possível representar uma grande quantidade de números reais com exatidão absoluta. Fica simples quando pensamos em um número com quantidade infinita de dígitos, digamos $\sqrt{2}$ (que me arrisco a dizer que tem infinitos dígitos independente da base numérica - alguém deve ter provado isso mas não procurei...). É possível representar esse número em uma representação posicional, como a que usamos corriqueiramente, em um computador com $16GB=2^{34}B$ de memória? (Tive que restringir o argumento pois se uma quantidade finita de números irracionais representado for $\sqrt{2}$ então é possível usar um símbolo especial para representar esse número, o que *quebraria* um argumento mais simples).

Voltando à proposta: apresentar exemplos simples de programas numéricos. Mais especifiamente, calcular a raiz quadrada de um número usando dois métodos diferentes. 

Começamos com "Queremos calcular a raiz quadrada de x", que também é um número. Sem definir $x$, ainda podemos escrever: $y=\sqrt{x} \quad (I)$.

Os métodos que quero apresentar são métodos para achar zeros de funções então vamos fazer um pouco de álgebra para transformar $(I)$ em um problema de achar raiz de uma função...

$y=\sqrt{x} \iff y^2=x \iff y^2-x=0 \quad (II)$

Lembrando que $y$ é o que desejamos calcular e que $x$ é conhecido, deseja-se encontrar o(s) zero(s) de $f(y)=y^2-x$ Talvez fique mais claro se dissermos que "Queremos calcular a raiz quadrada de 9" e substituir na expressão, resultando em $f(y)=y^2-9$.

Os dois métodos que desejo apresentar são o método da bissecção (https://en.wikipedia.org/wiki/Bisection_method) e o método de Newton (https://en.wikipedia.org/wiki/Newton%27s_method). Sugiro consultar esses links caso a explicação rápida, que dou junto ao exemplo, não seja suficiente.

Nesta aplicação, o método da bissecção pode ser fraseado como: "Sabendo que a raiz está em um intervalo, calcular o valor de f no ponto médio do intervalo, dependendo do resultado, substituir ou limite inferior ou o limite superior e reaplicar (sobre o intervalo menor), sucessivamente até encontrar a raiz." O método encontra a raiz se no intervalo a função for crescente, ou se no intervalo a função for decrescente.

Resta definir o intervalo inicial. Bem, por definição da raiz quadrada, $\sqrt{x} \ge 0$ e, impulsivamente, $\sqrt{x} \lt x$ (só percebi que está errado depois de testar...). Então um intervalo inicial conveniente é $[0,n]$.

Como o exercício será codificar o método em C, vou apresentar o exemplo do cálculo de raiz quadrada de 5 numa planilha...


|	inferior	|	superior	|	médio	|	f(médio)	|
| --- | --- | --- | --- |
|	0	|	5	|	2,5	|	6,25	|
|	0	|	2,5	|	1,25	|	1,5625	|
|	1,25	|	2,5	|	1,875	|	3,515625	|
|	1,875	|	2,5	|	2,1875	|	4,78515625	|
|	2,1875	|	2,5	|	2,34375	|	5,4931640625	|
|	2,1875	|	2,34375	|	2,265625	|	5,133056640625	|
|	2,1875	|	2,265625	|	2,2265625	|	4,95758056640625	|
|	2,2265625	|	2,265625	|	2,24609375	|	5,04493713378906	|
|	2,2265625	|	2,24609375	|	2,236328125	|	5,00116348266602	|
|	2,2265625	|	2,236328125	|	2,2314453125	|	4,97934818267822	|
|	2,2314453125	|	2,236328125	|	2,23388671875	|	4,99024987220764	|
|	2,23388671875	|	2,236328125	|	2,235107421875	|	4,99570518732071	|
|	2,235107421875	|	2,236328125	|	2,2357177734375	|	4,99843396246433	|
|	2,2357177734375	|	2,236328125	|	2,23602294921875	|	4,99979862943292	|
|	2,23602294921875	|	2,236328125	|	2,23617553710937	|	5,0004810327664	|
|	2,23602294921875	|	2,23617553710937	|	2,23609924316406	|	5,00013982527889	|
|	2,23602294921875	|	2,23609924316406	|	2,23606109619141	|	4,99996922590071	|
|	2,23606109619141	|	2,23609924316406	|	2,23608016967773	|	5,00005452522601	|
|	2,23606109619141	|	2,23608016967773	|	2,23607063293457	|	5,00001187547241	|
|	2,23606109619141	|	2,23607063293457	|	2,23606586456299	|	4,99999055066382	|
|	2,23606586456299	|	2,23607063293457	|	2,23606824874878	|	5,00000121306243	|
|	2,23606586456299	|	2,23606824874878	|	2,23606705665588	|	4,99999588186171	|
|	2,23606705665588	|	2,23606824874878	|	2,23606765270233	|	4,99999854746172	|
|	2,23606765270233	|	2,23606824874878	|	2,23606795072556	|	4,99999988026199	|
|	2,23606795072556	|	2,23606824874878	|	2,23606809973717	|	5,00000054666219	|
|	2,23606795072556	|	2,23606809973717	|	2,23606802523136	|	5,00000021346208	|
|	2,23606795072556	|	2,23606802523136	|	2,23606798797846	|	5,00000004686203	|
|	2,23606795072556	|	2,23606798797846	|	2,23606796935201	|	4,99999996356201	|
|	2,23606796935201	|	2,23606798797846	|	2,23606797866523	|	5,00000000521202	|
|	2,23606796935201	|	2,23606797866523	|	2,23606797400862	|	4,99999998438701	|
|	2,23606797400862	|	2,23606797866523	|	2,23606797633693	|	4,99999999479952	|
|	2,23606797633693	|	2,23606797866523	|	2,23606797750108	|	5,00000000000577	|
|	2,23606797633693	|	2,23606797750108	|	2,236067976919	|	4,99999999740264	|
|	2,236067976919	|	2,23606797750108	|	2,23606797721004	|	4,99999999870421	|
|	2,23606797721004	|	2,23606797750108	|	2,23606797735556	|	4,99999999935499	|
|	2,23606797735556	|	2,23606797750108	|	2,23606797742832	|	4,99999999968038	|
|	2,23606797742832	|	2,23606797750108	|	2,2360679774647	|	4,99999999984307	|
|	2,2360679774647	|	2,23606797750108	|	2,23606797748289	|	4,99999999992442	|
|	2,23606797748289	|	2,23606797750108	|	2,23606797749198	|	4,99999999996509	|
|	2,23606797749198	|	2,23606797750108	|	2,23606797749653	|	4,99999999998543	|
|	2,23606797749653	|	2,23606797750108	|	2,23606797749881	|	4,9999999999956	|
|	2,23606797749881	|	2,23606797750108	|	2,23606797749994	|	5,00000000000068	|
|	2,23606797749881	|	2,23606797749994	|	2,23606797749937	|	4,99999999999814	|
|	2,23606797749937	|	2,23606797749994	|	2,23606797749966	|	4,99999999999941	|
|	2,23606797749966	|	2,23606797749994	|	2,2360679774998	|	5,00000000000005	|
|	2,23606797749966	|	2,2360679774998	|	2,23606797749973	|	4,99999999999973	|
|	2,23606797749973	|	2,2360679774998	|	2,23606797749976	|	4,99999999999989	|
|	2,23606797749976	|	2,2360679774998	|	2,23606797749978	|	4,99999999999997	|
|	2,23606797749978	|	2,2360679774998	|	2,23606797749979	|	5,00000000000001	|
|	2,23606797749978	|	2,2360679774998	|	2,23606797749979	|	5,00000000000001	|
|	2,23606797749978	|	2,2360679774998	|	2,23606797749979	|	5,00000000000001	|

veja bisseccaoEnewton.ods - a planilha contém fórmulas.

O método de Newton baseia-se no fato que tomando um valor $y_0$ que não é raiz de uma função ou estritamente crescente ou estritamente decrescente, $f(y)$, se traçarmos a reta tangente $g(y)$ de $f(y)$ no ponto $y_0$, o ponto $y_1$ que faz $g(y)=0$ é mais próximo de uma raiz de $f(y)$ do que era $y_0$. Aplicando esse método sucessivamente, na n-ésima iteração, $y_n$ será raiz de $f(y)$... vamos à álgebra...

... a equação da reta tangente é $y-y_0=m*(x-x_0)$, está implícito que na notação dessa fórmula, $y=f(x)$. Em concordância com essa notação, $m=\frac{dy}{dx}=\frac{d}{dx}f(x)$. Ajustando a notação para a usada na aplicação: $g(y)-g(y_0)=m*(y-y_0)$ na equação da reta, $m=\frac{d}{dy}f(y)$ e a derivada calculada fica $\frac{d}{dy}f(y)=2*y$, lembrando que $g$ é a reta - a confusão das letras se deve ao uso da fórmula padrão e a ser econômico com as letras...

<!--- ... aí que entra o método de Newton... se fizermos um gráfico f(y) por y, com a reta tangente, chutando um valor positivo qualquer para y, digamos y0, o ponto y1, em que a reta tangente cruza o eixo (y) é mais próximo de f(y)=0 do que era y0. Se aplicarmos o método sucessivamente, yi vai fazer f(yi) ser cada vez mais próximo de zero, até coincidir. --->

... voltando à equação da reta, considerando os pontos $y_0$ e $y_1$, temos: $g(y_1)-g(y_0)=m*(y_1-y_0)$.

... lembrando que $g(y_1)=0$ e $g(y_0)=f(y_0)$, conseguimos calcular $y_1=y_0-\frac{f(y_0)}{2*y_0}$

... como no próximo passo, $y_1$ será nosso $y_0$ (ié vamos escrever como uma sequência), ajustamos os nomes para refletir isso: $y_{i+1}=y_{i}-\frac{f(y_{i})}{2*y_{i}}$

Como o exercício será codificar o método em C, vou apresentar o exemplo do cálculo de raiz quadrada de 5 numa planilha...

|	$y_i$	|	$f(y_i)$	|	$y_{i+1}$	|
| --- | --- | --- |
|	5	|	20	|	3	|
|	3	|	4	|	2,33333333333333	|
|	2,33333333333333	|	0,444444444444446	|	2,23809523809524	|
|	2,23809523809524	|	0,0090702947845811	|	2,23606889564336	|
|	2,23606889564336	|	4,10606373080213E-06	|	2,23606797749998	|
|	2,23606797749998	|	8,42881320295419E-13	|	2,23606797749979	|
|	2,23606797749979	|	0	|	2,23606797749979	|
|	2,23606797749979	|	0	|	2,23606797749979	|
|	2,23606797749979	|	0	|	2,23606797749979	|

veja bisseccaoEnewton.ods - a planilha contém fórmulas.


Os comentários, conclusões, codificação e o que se seguir, deixo com vocês!
