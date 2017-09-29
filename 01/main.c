//
//  main.c
//  01
//
//  Created by Guilherme Hartmann Sales on 28/09/17.
//  Copyright © 2017 Guilherme Hartmann Sales. All rights reserved.
//

#include <stdio.h>

int main() {
    int x;
    printf("Digite o número: ");
    scanf("%d",&x);
    if(x%2==1){
        printf("impar\n");
    }
    else{
        printf("par\n");
    }
}
