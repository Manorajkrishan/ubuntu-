#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void * binaryNum() {
    int binary[32], decimal;
    printf("Enter a decimal value: ");
    scanf("%d", &decimal);
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}

int main() {
    int i;
    pid_t pid;
     for (i = 0; i < 7; i++){
    pid = fork();
    if (pid < 0) {
        perror("fork error");
        
    } else if (pid == 0) {
        // Child process
        {
        if(i==0){
            printf("This is from child process: %d\n", i + 1);}
        }
        exit(0);
    } else {
        // Parent process
        wait(NULL);
       // binaryNum();  // Call binaryNum after the child processes have completed
       printf("i am krusf");
       exit(0);
    }}











    return 0;
}

