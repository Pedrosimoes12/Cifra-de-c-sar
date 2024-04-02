README para Programa de Cifra de César
  Este programa em C implementa a cifra de César, uma técnica de criptografia simples e uma das mais conhecidas técnicas de codificação. A cifra de César é um tipo de cifra de substituição na qual cada letra no texto é substituída por outra letra que se encontra um número fixo de posições adiante no alfabeto.

Funcionalidades
  Criptografia de Mensagens: Capaz de criptografar mensagens alfabéticas e numéricas utilizando uma chave especificada pelo usuário.
Descriptografia de Mensagens: Capaz de descriptografar mensagens previamente criptografadas, assumindo que a chave de criptografia é conhecida.

Como Compilar
  Para compilar este programa, você precisará de um compilador C instalado em seu sistema. Geralmente, o GCC (GNU Compiler Collection) é uma opção popular. Abra um terminal ou prompt de comando e navegue até o diretório contendo o arquivo de código fonte. Então, execute o seguinte comando:

gcc -o cifra_cesar cifra_cesar.c


Este comando compila o código fonte cifra_cesar.c para um executável chamado cifra_cesar.

Como Executar
  Após compilar o programa, você pode executá-lo através do terminal (Linux/Mac) ou do prompt de comando (Windows) com o seguinte comando:

./cifra_cesar


  O programa pedirá que você insira uma chave de criptografia (um número inteiro) e uma mensagem que deseja criptografar. Após a criptografia, a mensagem criptografada será exibida, seguida pela versão descriptografada, confirmando que o processo de criptografia/decriptografia funciona como esperado.

Entrada do Usuário
  Chave de Criptografia: Um número inteiro que determina o número de posições que cada letra será deslocada no alfabeto durante a criptografia.
Mensagem: A mensagem (alfabética ou numérica) que será criptografada.

Notas Importantes
O programa trata letras maiúsculas e minúsculas corretamente, mantendo a caixa durante a criptografia e descriptografia.
Apenas caracteres alfabéticos (A-Z, a-z) e numéricos (0-9) são criptografados. Outros caracteres são ignorados.
A criptografia de números segue um padrão circular de 0 a 9, significando que, após o 9, volta-se ao 0.
