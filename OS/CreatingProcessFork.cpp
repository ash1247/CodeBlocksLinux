#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if(pid < 0) { //if error occures
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if(pid == 0) { //child process;
        execlp("bin/ls", "ls", NULL);
    }
    else { // parent process
        //parent will wait for child to complete
        printf("Child complete.");
    }
    return 0;
}
