#include <stdio.h>

void checkCharacterType(char Char){
        int asciiValue = (int)Char;

        if(asciiValue>=65 && asciiValue<=90){
            printf("%c is a capital letter. \n", Char);
        }
        else if(asciiValue>=97 && asciiValue<=122){
            printf("%c is a small case letter. \n", Char);
        }
        else if(asciiValue>=48 && asciiValue<=57){
            printf("%c is a digit. \n", Char);
        }
        else if((asciiValue>=0 && asciiValue<=47) || (asciiValue>=58 && asciiValue<=64) || 
                (asciiValue>=91 && asciiValue<=96) || (asciiValue>=123 && asciiValue<=127)){
            printf("%c is a special character. \n", Char);
        }
        else {
            printf("%c is not a valid character", Char);
        }
}

int main(){
    char character;
    printf("Enter a character \n");
    scanf("%c", &character);

    checkCharacterType(character);
    return 0;
}