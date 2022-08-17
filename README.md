# Monitoria de Laboratório de Programação 2

Alguns exercícios estão resolvidos com o tipo de variável size_t. Eu prefiro usar ele porque ele é um tipo específico pra usar com indexação de vetores, então não tem como colocar valores negativos (size_t basicamente é um unsigned int). 

O exercícios 7 peg auma parte teórica da análise de algoritmos. O conceito é os seguinte: a cada iteração da busca binaria, escrita de forma recursiva, o programa elimina metade da matriz, escolhendo a metade onde pode estar o valor procuradpo. Assim, a cada iteração, o numero de possibilidades de resultado é dividio ao meio. Esse tipo de É possível representar esse tipo de função pelo gráfico de log(n), pois à medida que o x aumenta, o seu y correspondente varia cada vez menos. Portanto, são feifeitastos log(n) execuções, no máximo.

Imagem de referência para o gráfico de log(n):
https://images.learn2torials.com/prod/post/quadratic-time.png
Esse conceito é uma das bases para a análuise de algoritmos, seguindo o princípiomde que um algoritmo que divide seu problema original em partes menores para resolvê-lo precisa de log(n) acessos.
