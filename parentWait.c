#include<stdio.h>

int main() {
   int pid;
   int status;
   pid = fork();
   
   // Child process
   if (pid == 0) {
      system("ls -l");
      sleep(10);
      system("ls -l");
      printf("\nIn child before Return");
      return 3; //exit status is 3 from child process
   } else {
      sleep(3);
      printf("\nIn parent before wait");
      wait(&status);
      printf("In parent process: exit status from child is decimal %d, hexa %0x\n", status, status);
   }
   return 0;
}
