#include "syscall.h"

main() {
    int n;
    for(n = 9; n >= 6; n--){
	Sleep(4000000);
	PrintInt(n);
    }
}
