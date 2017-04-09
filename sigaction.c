#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void ouch(int sig)
{	
	printf("OUCH! - I got signal %d\n", sig);
	//here "Hello World" will be printed again and again as sigaction is called whenever we pass a signal Cntrl C to this running process..it will catch it up and perform the action it wants."
}


int main()
{
	struct sigaction act;
	act.sa_handler = ouch;
	act.sa_flags = 0;
	sigaction(SIGINT, &act, 0);
	while(1) 
	{
		printf("Hello World!\n");
		sleep(1);
	}
}