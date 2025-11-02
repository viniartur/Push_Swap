# Push_Swap
Projeto referente ao Push_swap

Com certeza! Com base no documento do projeto "Push_swap", aqui está um resumo que você pode usar para o seu arquivo README.md.

Como você estuda C na 42 São Paulo, este resumo está formatado para ser claro e direto, cobrindo os objetivos, as regras e a meta de otimização do projeto.

💡 Resumo do Projeto: Push_swap
Este projeto é um desafio algorítmico estruturado com o objetivo de ordenar dados em uma stack (pilha) utilizando um conjunto limitado de instruções, visando alcançar o menor número possível de ações.


🎯 Objetivos de Aprendizagem
O principal objetivo é escrever um algoritmo de ordenação, que é um passo crucial na jornada de um desenvolvedor, frequentemente ligado ao conceito de complexidade de algoritmos.


Rigor e Proficiência em C.

Aplicação de algoritmos básicos com foco em sua complexidade.

Ordenar valores é simples, mas o desafio é encontrar a maneira mais rápida de ordená-los (otimização).

🛠️ O Desafio e as Regras
O projeto envolve a manipulação de dois stacks, 'a' e 'b', usando um conjunto específico de comandos:


Estado Inicial	Stack a	Stack b
Conteúdo	
Uma lista aleatória de inteiros (únicos, positivos e/ou negativos)[cite: 123].

Vazia[cite: 124].

Meta	
Ordenar os números em ordem ascendente[cite: 125].

Deve estar vazia no final da ordenação (para a parte bônus).

Comandos Disponíveis
O programa push_swap deve calcular e exibir a sequência de instruções mais curta para ordenar os números na stack 'a'. As instruções incluem:




sa / sb / ss: Troca (swap) os dois primeiros elementos no topo da stack.




pa / pb: Pega o primeiro elemento de uma stack e o coloca no topo da outra (push).



ra / rb / rr: Move o primeiro elemento para a última posição da stack (rotate).


rra / rrb / rrr: Move o último elemento para a primeira posição da stack (reverse rotate).

🚀 Otimização (Benchmark)
O projeto é validado pela otimização, ou seja, pelo número de operações utilizadas.

Para a Validação Máxima (100%) e elegibilidade para o bônus, você deve alcançar os seguintes limites:

Ordenar 100 números aleatórios em menos de 700 operações.

Ordenar 500 números aleatórios em no máximo 5500 operações.
