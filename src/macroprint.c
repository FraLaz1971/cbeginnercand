#include <stdio.h>
#include <stdlib.h>
#define PRINT(str, args...) printf(""str"\n", ##args);

int main(){
    
    PRINT("giovannino")
    PRINT("gullo %s, %s, %d", "listo", "grullo", 100)
    return 0;
}
