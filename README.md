# Desafio Lógica Super Trunfo - BCLELIS

Este projeto é a versão final do jogo Super Trunfo, onde foi implementado uma lógica avançada de comparação entre duas cartas. O programa permite o cadastro de cartas com atributos como estado, código, nome do país, população, área, PIB, pontos turísticos, além de calcular a densidade demográfica e o PIB per capita. Em seguida, o usuário pode escolher dois atributos diferentes para comparação, utilizando menus interativos, switch e estruturas de decisão (if-else, operador ternário) para determinar o vencedor de cada atributo e, por fim, a carta vencedora da rodada com base na soma dos valores dos atributos escolhidos.

## Funcionalidades

- **Cadastro de Cartas:**  
  Permite o cadastro de duas cartas com os seguintes atributos:
  - Estado (char)
  - Código da carta (int, de 01 a 04)
  - Nome do país (string)
  - População (int)
  - Área (float, em km²)
  - PIB (float, em bilhões de reais)
  - Número de pontos turísticos (int)
  - **Cálculo de Atributos Derivados:**
    - Densidade Demográfica: População / Área
    - PIB per Capita: PIB / População

- **Menu Interativo para Comparação:**  
  O sistema apresenta um menu que permite ao jogador escolher **dois atributos diferentes** para comparar as cartas. As opções disponíveis são:
  1. População
  2. Área
  3. PIB
  4. Pontos Turísticos
  5. Densidade Demográfica (vence o menor valor)
  6. PIB per Capita  
  O menu é dinâmico e impede que o mesmo atributo seja selecionado duas vezes.

- **Comparação dos Atributos e Resultado Final:**  
  - Para cada atributo escolhido, o programa compara os valores das duas cartas.
  - Para todos os atributos, vence a carta com o maior valor; exceto na comparação da Densidade Demográfica, onde vence a carta com o menor valor.
  - Utiliza estruturas `switch` e `if-else`, com operador ternário para determinar rapidamente o vencedor.
  - A soma dos valores dos dois atributos é calculada para cada carta e a carta com a maior soma vence a rodada. Em caso de empate, exibe "Empate!".

## Requisitos

- **Linguagem:** C  
- **Compilador:** Qualquer compilador compatível com C (por exemplo, gcc).

## Estrutura do Projeto

- **Arquivo principal:** `logicaSuperTrunfo.c`  
- **Nome do repositório:** `desafio-l-gica-super-trunfo-bclelis`

## Como Compilar

Abra o terminal na pasta do projeto e execute o seguinte comando usando gcc:

gcc -o super_trunfo logicaSuperTrunfo.c

Este comando compila o código presente em logicaSuperTrunfo.c e gera um executável chamado super_trunfo.

## Como Executar

No terminal, execute:

./super_trunfo

Siga as instruções exibidas para cadastrar as cartas e escolher os atributos de comparação.

## Exemplo de Uso

1. **Cadastro das Cartas:**  
   O programa solicitará os dados para duas cartas, por exemplo:
   - Estado: A
   - Código: 01
   - Nome do país: Brasil
   - População: 213000000
   - Área: 8516000
   - PIB: 7000
   - Pontos Turísticos: 150

2. **Exibição dos Atributos Calculados:**  
   O sistema exibirá a densidade demográfica e o PIB per capita calculados para cada carta.

3. **Menu de Comparação:**  
   Você poderá escolher dois atributos para comparar (por exemplo, "População" e "Densidade Demográfica").  
   - No primeiro atributo, o programa compara e exibe o vencedor (maior valor vence, exceto para densidade, onde o menor vence).
   - No segundo atributo, o mesmo processo é realizado.

4. **Resultado Final:**  
   O programa soma os valores dos dois atributos para cada carta e exibe qual carta venceu a rodada ou se houve empate.

## Considerações Finais

- O código foi desenvolvido com foco em clareza e usabilidade, utilizando menus interativos e validação básica para evitar escolhas duplicadas.
- Este projeto é ideal para praticar estruturas de decisão, switch e o operador ternário em C.
