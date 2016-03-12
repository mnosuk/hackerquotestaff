//
//  main.c
//  HackerQuoteStaff
//
//  Created by Napat on 3/12/2559 BE.
//  Copyright © 2559 MithTaParb-KarnProgram. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void primeProblem(int n)
{
    prime_count = 2;
    while(n >= prime_count) {
            if (n % prime_count == 0) {
               n /= prime_count;
            }
    }
}

void loadProblem(char load_input[300], int n)
{
    if(!strcmp(load_input, "PRIME")) {
        primeProblem(n);
    }
    //bla bla bla
}

void gg () {print("gg");}

int main(int argc, const char * argv[]) {
    char load_input[300];
    int n_input;


printf("POOH");

    printf("load:");
    scanf("%s", load_input);

    printf("n:");
    scanf("%d", &n_input);

    loadProblem(load_input, n_input);


    printf("my name is RENZ");

    printf("my name is RENZ");

    printf("my name is NOTE");

    return 0;
}
