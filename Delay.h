#ifndef DELAY_H
#define DELAY_H
#include <iostream>
#include <string>
void delay(int secs) {
for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}
#endif // DELAY_H
