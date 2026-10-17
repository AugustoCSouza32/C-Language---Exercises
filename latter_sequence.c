#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int letters_count(char string[], char letter){
    // Count the occurrences of the specified letter in the string
    int count = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == letter){
            count++;
        }
    }
    return count;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char string[100];
    char letter;
    char letter_to_count;
    int i = 0;
    do{
        printf("Digite uma letra (ou '.' para sair): ");
        scanf(" %c", &letter);
        
        if(letter != '.'){
            string[i] = letter;
        }else{
            string[i] = '\0';
        }
        i++;
    }while(letter != '.'  && i < 100);

    printf("Digite a letra a ser contada: ");
    scanf(" %c", &letter_to_count);

    int count = letters_count(string, letter_to_count);
    printf("A letra '%c' ocorre %d vezes na string.\n", letter_to_count, count);
}