#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MSG_TAMANHO 1024
#define ENCRYPT 1
#define DECRYPT 0

// Cifra de cesar

int chave;

/// Vai alterar a letra de acordo com a chave que foi colocada no main

void encripta(char *mensagem, int operacao, int chave){
    int ultima_chave = chave, i;
    for(i = 0; i < strlen(mensagem); i++){
/// Verifica se é um numero ou uma letra
/// Criptografa numeros
        if(!isalpha(mensagem[i])){
            if(operacao == DECRYPT){
                chave = 10 - ultima_chave;
            }
            char offset = 48;
            mensagem[i] = (char)((((mensagem[i] + chave) - offset) % 10) + offset);
/// Criptografa letras
        }else{
            if(operacao == DECRYPT){
                chave = 26 - ultima_chave;
            }
/// Verifica se é uma letra maiuscula ou minuscula
            char offset = isupper(mensagem[i]) ? 'A' : 'a';
            mensagem[i] = (char)((((mensagem[i] + chave) - offset) % 26) + offset);
        }
    }
}

/// Vai descriptografar utilizando a chave que foi usada na função enciptar, puxando ela novamente

void decripta(char *mensagem, int operacao, int chave){
    encripta(mensagem, operacao, chave);
}

int main(){

    char mensagem[MSG_TAMANHO];

/*  Pede a chave que será utilizada para pular casas na criptografia
    e também a mensagem a ser criptografada*/
    
    printf("Insira a chave de criptografia\n");
    scanf("%d", &chave);
    printf("Insira a mensagem que vai ser criptografada\n");
    scanf("%s", mensagem);

    printf("Normal: %s\n", mensagem);

    encripta(mensagem, ENCRYPT, chave);

    printf("Encriptada: %s\n", mensagem);

    decripta(mensagem, DECRYPT, chave);

    printf("Decriptada: %s\n", mensagem);

    return 0;
}
