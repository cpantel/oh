#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define REG_INPUT0 0x810f0000
#define REG_INPUT1 0x810f0004
#define REG_INPUT2 0x810f0008
#define REG_INPUT3 0x810f000C
#define REG_OUTPUT 0x810f0010

int main(int argc, char *argv[]) {

    uint32_t data0, data1, data2, data3, rdata;

    data0=strtol(argv[1],0,16);
    data1=strtol(argv[2],0,16);
    data2=strtol(argv[3],0,16);
    data3=strtol(argv[4],0,16);

    e_write(REG_INPUT0,data0);
    e_write(REG_INPUT1,data1);
    e_write(REG_INPUT2,data2);
    e_write(REG_INPUT3,data3);

    e_read(REG_OUTPUT, &rdata);

    printf ("RESULT=%d\n", rdata);         
}

