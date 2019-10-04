#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
clock_t startm, stopm;

#define BEGIN if( (startm = clock()) == -1) \
{\
	printf("clock returened error"); exit(1);\
	}\
	
#define CLOSE if( (stopm = clock() ) ==-1) \
{\
	printf("clock returned error");\
	}\

#define SHOWTIME printf("%6.3f seconds \n",((double)stopm-startm)/CLOCKS_PER_SEC);

int main()
{
	BEGIN;
	sleep(2);
	CLOSE;
	SHOWTIME;
}
