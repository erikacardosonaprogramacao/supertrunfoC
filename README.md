# Desafio Super Trunfo - Países - Cadastro das Cartas

## Como Executar o Programa

### Pré-requisitos
- Um compilador C (por exemplo, GCC)
- Terminal de comando

### Passos para Compilar e Executar

1. **Clone o repositório:**
   ```sh
   git clone https://github.com/seu-usuario/desafio-cadastro-das-cartas-no-super-trunfo-andream001.git
   cd desafio-cadastro-das-cartas-no-super-trunfo-andream001
```
Instruções de Compilação e Execução
Compilação:

Abra o terminal ou prompt de comando.
Navegue até o diretório onde o arquivo CartasSuperTrunfo.c ) está localizado.
Compile o programa usando o comando:
Execução:

gcc -o CartasSuperTrunfo CartasSuperTrunfo.c
Execute o programa compilado usando o comando:


./CartasSuperTrunfo

Exemplo de Uso
Cadastro das Cartas:

O programa solicitará o cadastro das duas cartas.
Digite os dados conforme solicitado.
Comparação de Cartas:

Após o cadastro, o programa exibirá os dados das duas cartas.
Escolha os atributos para comparar.
O programa exibirá o resultado da comparação.
Continuar ou Parar:

O programa perguntará se deseja continuar.
Digite s para continuar ou n para parar.
Adicionar Novas Cartas:

Se escolher continuar, o programa perguntará se deseja adicionar novas cartas.
Digite s para adicionar novas cartas ou n para continuar com as mesmas cartas.
Atributos Disponíveis para Comparação
População
Área
PIB
Densidade Populacional
PIB per Capita
Pontos Turísticos
Super Poder
Requisitos Funcionais e Não Funcionais
Escolha de Dois Atributos:

O sistema permite que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos.
O jogador não pode selecionar o mesmo atributo duas vezes.
Comparação com Múltiplos Atributos:

O sistema compara as duas cartas com base nos dois atributos escolhidos.
Para cada atributo, vence a carta com o maior valor, exceto para Densidade Demográfica, onde vence a carta com o menor valor.
Soma dos Atributos:

O sistema soma os valores dos atributos para cada carta.
A carta com a maior soma vence a rodada.
Tratamento de Empates:

Se a soma dos atributos das duas cartas for igual, exibe a mensagem "Empate!".
Menus Dinâmicos:

Após o jogador escolher o primeiro atributo, esse atributo não aparece mais como opção para a escolha do segundo atributo.
Exibição Clara do Resultado:

O sistema mostra o resultado da comparação de forma clara e organizada, incluindo:
O nome dos dois países.
Os dois atributos usados na comparação.
Os valores de cada atributo para cada carta.
A soma dos atributos para cada carta.
Qual carta venceu (ou se houve empate).
Requisitos Não Funcionais
Usabilidade:

A interface do usuário é intuitiva e fácil de navegar, com mensagens claras e instruções para cada etapa.
Performance:

O sistema executa as comparações e exibe os resultados rapidamente.
Manutenibilidade:

O código é bem estruturado, organizado, com indentação consistente e comentários explicativos.
Nomes de variáveis são descritivos.
Confiabilidade:

O sistema é robusto e lida com entradas inválidas do usuário de forma adequada, exibindo mensagens de erro apropriadas e evitando travamentos.
Utiliza o default no switch para tratar opções inválidas.
Espero que isso ajude! Se tiver mais alguma dúvida ou problema, por favor, me avise.
