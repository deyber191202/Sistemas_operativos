#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   pid_t id_proceso_padre;
   pid_t id_proceso_hijo;
   uid_t id_procesos_usuario;
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE , HIJO Y USUARIO====\n");
 
   id_proceso_padre = getppid();
   id_proceso_hijo = getpid();
   id_procesos_usuario = getuid();
 
   printf("Identificador del proceso padre : %d\n", id_proceso_padre);
   printf("Identificador del proceso hijo: %d\n", id_proceso_hijo);
   printf("Identificador del usuario: %d\n", id_procesos_usuario);
   return 0;
 
}
