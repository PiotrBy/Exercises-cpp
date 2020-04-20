#include <unistd.h>
#include "Date.h"

int main() {
    Date today;

    while (true) {
        today.print();
        today.nextDay();
        sleep(1);
    }
}