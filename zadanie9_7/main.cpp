#include "Time.h"
#include <unistd.h>

using namespace std;

int main() {
    Time t1; // Podac ilosc godzin minut i sekund
    while(true){
        t1.printStandard();
        t1.tick();
        sleep(1);
    }
    return 0;
}
