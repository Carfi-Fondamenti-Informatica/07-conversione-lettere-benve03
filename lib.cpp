#include "lib.h"
bool convL (char&a) {
    if (a >= 65 and a <= 90) {
        if (a >= 65 and a <= 90) {
            a += 32; // sarebbe come dire a=a+32
        } else if (a >= 97 and a <= 122){
            a -= 32;
        return 1; //vero
    }return 0; //falso
    }
}
