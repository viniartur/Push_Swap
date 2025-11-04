# Push_Swap: Desafio de Ordenação Otimizada em Stack

### Visão Geral do Projeto
O **Push_Swap** é um projeto algorítmico que testa a sua capacidade de **ordenar dados** em uma pilha (`stack`) utilizando um conjunto **estritamente limitado** de instruções. O objetivo central é desenvolver um algoritmo de ordenação que minimize o **número total de operações** necessárias.

Este desafio vai além da simples ordenação; ele é uma busca pela **solução mais eficiente**.

### O Desafio e as Regras

O projeto exige a manipulação de **duas stacks**, `a` e `b`, seguindo as seguintes condições:

| Estado | Stack `a` | Stack `b` |
| :--- | :--- | :--- |
| **Conteúdo Inicial** | Uma lista aleatória de inteiros (únicos). | Vazia. |
| **Meta Final** | Números ordenados em ordem **ascendente**. | Deve estar **vazia** (padrão 42). |

O programa **`push_swap`** deve calcular e exibir a **sequência de instruções mais curta** para ordenar a stack `a`.

### Comandos Disponíveis

| Categoria | Comando | Descrição da Ação |
| :--- | :--- | :--- |
| **Swap (Troca)** | `sa` / `sb` / `ss` | Troca os dois primeiros elementos no topo da stack. |
| **Push (Empurrar)** | `pa` / `pb` | Move o elemento do topo de uma stack para o topo da outra. |
| **Rotate (Rotação)** | `ra` / `rb` / `rr` | Move o primeiro elemento para a última posição (rotação para cima). |
| **Reverse Rotate** | `rra` / `rrb` / `rrr` | Move o último elemento para a primeira posição (rotação para baixo). |

### Critérios de Otimização (Benchmark)

A validação do projeto é determinada pela **otimização**, ou seja, pelo número total de operações utilizadas para ordenar a lista de inteiros.

Para alcançar a **validação máxima (100%)** e elegibilidade para o bônus, os limites de operações a serem atingidos são:

* **100 números aleatórios:** Ordenados em **menos de 700** operações.
* **500 números aleatórios:** Ordenados em **no máximo 5500** operações.
