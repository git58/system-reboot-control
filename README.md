***************************************************************************
*                                                                         *
* Система управления выключением или перезагрузкой без sudo для Linux.    *
* Работает через cron.                                                    *
*                                                                         *
***************************************************************************
Установка

1) Скомпилируйте файлы check_shutdown_reboot_file.c и
shut_and_reb.c при помощи gcc

2) Поместите их в /usr/local/bin

3) Отредактируйте планировщик cron: crontab -e

Он должен быть следующего вида:

@reboot  /usr/local/bin/check_shutdown_reboot_file

*/1 * * * * /usr/local/bin/shut_and_reb

4) Создайте кнопки выключения и перезагрузки  в /usr/local/bin
со следующим содержимым - reboot.sh:

echo 9 > /run/shut.txt

и shutdown.sh

echo 8 > /run/shut.txt

MSK. 2022
By Gavryushin Ivan 
dcc0@yandex.ru
