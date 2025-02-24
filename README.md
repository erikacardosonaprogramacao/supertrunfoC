# Super Trunfo - Comparação de Cartas de Países

## 📌 Sobre o Projeto
Este é um sistema em C que simula um jogo de Super Trunfo com o tema "Países". O usuário pode comparar cartas de cidades com base em diferentes atributos, utilizando um menu interativo para selecionar os critérios de comparação.

## 🎮 Funcionalidades
- Cadastro de cartas com informações sobre cidades.
- Cálculo automático de atributos derivados, como densidade populacional e PIB per capita.
- Menu interativo para a escolha de dois atributos para comparação.
- Regras específicas para determinar a carta vencedora:
  - Para a maioria dos atributos, vence a carta com o maior valor.
  - Para a densidade populacional, vence a carta com o menor valor.
  - Caso as somas dos atributos sejam iguais, ocorre um empate.
- Exibição clara e organizada do resultado da comparação.

## 🏗️ Tecnologias Utilizadas
- Linguagem de programação: **C**
- Bibliotecas padrão: **stdio.h**

## 🚀 Como Executar
1. **Baixe ou clone** este repositório.
2. **Compile o código** utilizando um compilador C, como `gcc`:
   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```
3. **Execute o programa** no terminal:
   ```bash
   ./super_trunfo
   ```
4. **Siga as instruções** do menu para cadastrar e comparar as cartas.

## 📖 Estrutura do Código
O programa está estruturado da seguinte maneira:
- **Cadastro de cartas:** O usuário insere os dados de duas cidades.
- **Cálculo de atributos derivados:** Densidade populacional e PIB per capita são calculados automaticamente.
- **Menu interativo:** O usuário escolhe dois atributos para a comparação.
- **Comparação das cartas:** O sistema verifica qual carta tem valores mais altos e exibe o resultado.

## 📜 Licença
Este projeto é de código aberto e pode ser utilizado livremente para fins educacionais e de aprimoramento.

---
Desenvolvido com dedicação para aprimorar lógica de programação e manipulação de dados em C. 🚀

