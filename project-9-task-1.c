#include <stdio.h>
#include <time.h>



int main() {
	
    time_t now;
    time(&now);
 
    struct tm beg_lastminute;
    beg_lastminute= *localtime(&now);
    beg_lastminute.tm_hour = 0;
    beg_lastminute.tm_min = 0;
    beg_lastminute.tm_sec = 0;
    beg_lastminute.tm_mday = 1;
 
    double seconds = difftime(now, mktime(&beg_lastminute));
    printf("\n %.f seconds passed since the beginning of the last minute.\n\n", seconds);
	return 0;
}
