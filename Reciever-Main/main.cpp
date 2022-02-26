/**
    @file Main.cpp
    Main file for Final Year project Receiver - Luke Waller
**/

#include <mbed.h>
// #include <nRF24L01P.h>
#include "HARDWARE.h"
#include "BLDCM.h"

// #define TRANSMITTER     0
// #define TRANSFER_SIZE   10
// #define DEFAULT_PIPE    0

// MOSI, MISO, SCK, CNS, CE, IRQ - must be an interrupt pin 6 
// nRF24L01P nRF24L01(MOSI, MISO, SCK, CSN, CE, IRQ);

BLDCM LHSMotor(LHS_MOTOR);

// char rxData[TRANSFER_SIZE];

int rxDataCnt = 0;

int main() {

//     nRF24L01.powerUp();

// // Display the (default) setup of the nRF24L01+ chip
//     printf("nRF24L01 Frequency    : %d MHz\n",  nRF24L01.getRfFrequency() );
//     printf("nRF24L01 Output power : %d dBm\n",  nRF24L01.getRfOutputPower() );
//     printf("nRF24L01 Data Rate    : %d kbps\n", nRF24L01.getAirDataRate() );
//     printf("nRF24L01 TX Address   : 0x%010llX\n", nRF24L01.getTxAddress() );
//     printf("nRF24L01 RX Address   : 0x%010llX\n", nRF24L01.getRxAddress() );

//     nRF24L01.setTransferSize(TRANSFER_SIZE);

//     nRF24L01.setReceiveMode();

//     nRF24L01.enable();

//     printf("WAITING...\n");

//     while (true) {
//     if (nRF24L01.readable(DEFAULT_PIPE)) {
//             rxDataCnt = nRF24L01.read(DEFAULT_PIPE, rxData, TRANSFER_SIZE);
//             printf("%s\n", rxData);
//         }
//     }

}
