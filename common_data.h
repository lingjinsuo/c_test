#ifndef C_TEST_COMMON_DATA_H
#define C_TEST_COMMON_DATA_H

#include "stdint.h"

struct Student{
    uint16_t id;
    uint16_t score;
    char name[10];
};

struct Actuator {
    uint32_t strategyId;
    uint32_t strategyDetailId;
    uint32_t stockCode;
    uint16_t look;
    uint32_t triggerPrice;
    uint32_t triggerRatio;
    uint32_t triggerQuantity;
    uint8_t cmbt[512];
    uint16_t cmbtsize;

    uint8_t phase; // 0=没下单 1=已下单
};

Student studentArr[100];
Actuator actuatorArr[100];
const int MAX_CMBT_SIZE = 5000; // 定义Cmbt数组的最大大小
uint8_t* cmbtArr[MAX_CMBT_SIZE];

#endif //C_TEST_COMMON_DATA_H
