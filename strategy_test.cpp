#include "common_data.h"
#include "stdio.h"
#include "string.h"

int sn;

void initStregy(){
    for(int i=0;i<100;i++) {
        uint8_t cmbt[512] = {static_cast<uint8_t>(i)};
        Actuator actuator;
        actuator.strategyId = i;
        actuator.triggerPrice = 5000;
        memcpy(actuator.cmbt, cmbt, 512);
        actuator.stockCode = i;
        actuator.look = 1;
        actuator.cmbtsize = 512;
        actuatorArr[i] = actuator;
    }
}

void setCmbt(){

}

void printStrategy(uint32_t id10){
    Actuator actuator = actuatorArr[id10];
    printf("strategyId:%d, tpx:%d, code:%d, look:%d \n", actuator.strategyId, actuator.triggerPrice, actuator.stockCode, actuator.look);
}

int main(){
    initStregy();
    uint32_t id10 = 10;
    printStrategy(id10);
    Actuator actuator = actuatorArr[id10];

    uint32_t nowSn = sn;
    for(int i=0;i<200;i++){
        nowSn += 1;
        uint8_t ccc[512]={2};
        memcpy(ccc, actuator.cmbt, actuator.cmbtsize);
        cmbtArr[nowSn] = ccc;
    }

    printf("11111:%d", cmbtArr[10][2]);

}