#include<stdio.h>
#include<unistd.h>
#include<wait.h>
#include<string.h>
int main( void ) {
    int count=0;
    int pid;
    int res=2;
     char ch[10]="";
    x:
    pid = fork();
	if ( pid == 0 ) {
        if (strcmp(ch,"ls") == 0)
		execl("./ls","ls",NULL);
        else if(strcmp(ch,"makedir") == 0)
        execl("./makrdir","ls",NULL);
        else
        printf("enter a valid Shell command\n");
	}
    else
    {   
        scanf("%s",ch);
        if (strcmp(ch,"exit") == 0)
        return 0;
        goto x;
    }

	return 0;
}