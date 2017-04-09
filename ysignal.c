#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void signal_callback_handler(int signum)
{
   printf("\nCaught signal %d\n",signum);
   exit(EXIT_SUCCESS);
}
int main()
{
   signal(SIGINT, signal_callback_handler);
   while(1)
   {
      printf("Program processing stuff here.\n");
      sleep(1);
   }
   return EXIT_SUCCESS;
}