#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[ ]){
	if (argc > 1) {
		execlp("/bin/cicc", "cat", argv[1], (char *) NULL);
		perror("exec failure, does the command /bin/cicc exist?");
		return 1;
	}
	printf("Usage: %s text_file\n", argv[0]);
	return 2;
}

