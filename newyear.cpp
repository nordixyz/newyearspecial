#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;


int main(){
    time_t currentTime;
    time(&currentTime); //get the current time

    // gets the UNIX timestamp
    struct tm newYear = {0};
    newYear.tm_year = 2025-1900;
    newYear.tm_mday = 1;
    newYear.tm_mon = 0;
    newYear.tm_hour = 0;
    newYear.tm_min = 0;
    newYear.tm_sec = 0;

    // convert tm struct
    time_t targetTime = mktime(&newYear);

    // check time loop
    while(currentTime < targetTime) {
        time(&currentTime);
        sleep(1);
    }

    // the celebration
    while(true) {
        cout << "HAPPY NEW YEAAAARRR :DDD";
        sleep(1);
    }
     
}