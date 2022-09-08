#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<wait.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  for(int i=0;i<10;i++) // loop will run n times (n=5)
    {
        if(fork() == 0)
        {
            execl("./client","client",argv[1],argv[2],argv[3],NULL);
            exit(0);
   
        }
    }
    
}
