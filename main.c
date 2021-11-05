//
//  main.c
//  prc3
//
//  Created by Саша  Мінаєв on 10.09.2021.
//

#include <stdio.h>
#include <ctype.h>

void capitalize(char str[10],int length, int index[length]){
    char *string = str;
    size_t i = 0;
    for (; i < 10; i++) {
        size_t j = 0;
        if(i != index[j]){
            printf("%c",  string[i]);
        }
        for(; j<length;j++){
            if(i == index[j]){
                printf("%c", toupper( string[i]));
            }
        }
    }
    printf("\n");
}


int main(int argc, const char * argv[]) {
    int arr1[3] = {1,2,5};
    int arr2[4] = {1,2,5,100};
    capitalize("abcdef",3,arr1); 
    capitalize("abcdef",4,arr2);
    
}
