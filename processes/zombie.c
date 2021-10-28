#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{	
	//fork returns process id in parent process
	pid_t child_pid = fork();

	// parent process
	if (child_pid == 0)
		//increment this time to force parent 
		//	to not call wait on child
		sleep(500);
	//child process
	else
		exit(0);
	return 0;
}
