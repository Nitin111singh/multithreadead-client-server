#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<pwd.h>
#include<unistd.h>
int main()
{
    DIR *d;
    struct dirent *de;
    struct stat buf;
    char P[10]="rwxrwxrwx";
    char AP[10]="";
    d=opendir(".");
    while(de=readdir(d)!=NULL)
    {
        stat(de->d_name,&buf);
        if(S_ISDIR(buf.st_mode))
        printf("d");
        if(S_ISREG(buf.st_mode))
        printf("-");
    }
}