#include <unistd.h>
#include "Date.h"

using namespace std;

int main() {
    Date today;

    while (true) {
        today.print();
        if (today.isEndOfMonth()) {
            if (today.isEndOfYear()) {
                today.setYear(today.getYear() + 1);
                today.setMonth(1);
                today.setDay(1);
            } else {
                today.setMonth(today.getMonth() + 1);
                today.setDay(1);
            }
        } else {
            today.setDay(today.getDay() + 1);
        }
        sleep(1);
    }


}