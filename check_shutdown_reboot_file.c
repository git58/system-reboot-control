#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main ()
{
int fd;
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
char *filename = "/run/shut.txt";
/*Проверим сущестование файла: если нет, то создадим,
установим права и владельца.*/
   // if  (fopen("/run/shut.txt", "r") == NULL) {
    creat(filename, mode);
    chown(filename, 1000, 0);
    //return 0;
//}
}
