#include <stdio.h>

int main(){
    int l, j = 1;
    printf("Informe a largura: ");
    scanf(" %d", &l);
    int pi = 0; // Flag if even.
    if(l % 2 != 0){ // If odd.
        pi = 1; 
    }
    // 2 variables, one for the left side of the middle, and one for the right side.
    int a1 = l / 2 + pi, a2 = l / 2 + pi;
    // In case of the typed number being even, a2 receives +1.
    if(l % 2 == 0){
        a2++;
    }
    for(int i = 1; i <= l;i++){
        // i position is smaller than a1 or bigger than a2, print a space, else, print 'X'.
        if(i < a1 || i > a2 ){
            printf(" ");
        }else{
            printf("X");
        }
        // If i position reaches the given value.
        if(i == l){
            // If j reaches the middle of the given value (the pyramid height is its width / 2). 
            if(j == l / 2 + pi){
                break;
            }
            printf("\n"); // Line break for the construction of the pyramid.
            i = 0;
            // Characters on the left side of the middle gets decreased, while on the right side gets increased.
            a1--;
            a2++; 
            // Increases J.
            j++;
        }


    }
    printf("\n");

    return 0;
}