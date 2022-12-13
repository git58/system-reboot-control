#include <stdio.h>
#include <stdlib.h>
int main ()

{
    char c;
    FILE *file;
/*Откроем файл, прочитаем управляющий символ, перезагрузим или  выключим.*/	
    file = fopen("/run/shut.txt", "r");
    c = getc (file);
    if (c == '9') 
    system("/sbin/reboot");
    if (c == '8')
    system("/sbin/poweroff");
    fclose(file);

}
