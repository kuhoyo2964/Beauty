//You're so beautiful I want to marry you
#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
#define F2C printf("%3.0f%6.1f\n",f,(5.0/9.0)*(f-32));  /* low-high | f-c */
#define C2F printf("%3.0f%6.1f\n",c,(9.0/5)*c+32);      /* low-high | c-f */

int main() {
    for(float f=LOWER;f<=UPPER;f+=STEP) F2C
    for(float f=UPPER;f>=LOWER;f-=STEP) F2C
    for(float c=LOWER;c<=UPPER;c+=STEP) C2F
    for(float c=UPPER;c>=LOWER;c-=STEP) C2F
}
