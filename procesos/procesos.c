#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   pid_t id_proceso_padre;
   pid_t id_proceso_hijo;
   uid_t uid_usuario;
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE, HIJO , ID USUARIO Y NOMBRE DEL USUARIO====\n");
 
   id_proceso_padre = getppid();
   id_proceso_hijo = getpid();
   uid_usuario = getuid();
  
   printf("Identificador del proceso padre : %d\n", id_proceso_padre);
   printf("Identificador del proceso hijo: %d\n", id_proceso_hijo);
   printf("UID del proceso padre: %s\n", getlogin());
   printf("UID del proceso padre: %d\n", uid_usuario);
   
   return 0;
 
}
