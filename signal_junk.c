#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void ouch(int signum)
{
	printf("\nOUCH! - I got signal %d\n",signum);
	//signal(2, SIG_DFL);  //here as I coomented it out so this peogram will continue to print "hello world".
	//the signal function will be called again and again if we press Cntrl C whose signal number is SIGINT ,,ie,2.
}

int main()
{
	//signal(2, ouch);
	while(1) 
	{
	printf("Hello World!\n");
	sleep(1);
	}
}