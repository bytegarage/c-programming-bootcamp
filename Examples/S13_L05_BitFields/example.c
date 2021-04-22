#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct LedStatus
{
    uint8_t led_1;
    uint8_t led_2;
    uint8_t led_3;
} LedStatus;

typedef struct LedStatusBitfields
{
    uint8_t led_1 : 1;
    uint8_t led_2 : 1;
    uint8_t led_3 : 1;
} LedStatusBitfields;

typedef struct BleHeader
{
    uint16_t pdu_type : 4;
    uint16_t rfu_1 : 2;
    uint16_t tx_add : 1;
    uint16_t rx_add : 1;
    uint16_t length : 6;
    uint16_t rfu_2 : 2;
} BleHeader;

void print_bits(uint8_t *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        uint8_t byte = data[i];
        for (int j = 0; j < 8; j++)
        {
            printf("%d", (byte >> j) & 1);
        }
    }
    printf("\n");
}

int main()
{
    printf("\n=== Bit Fields ===\n\n");

    printf("sizeof(LedStatus): %lld\n", sizeof(LedStatus));
    printf("sizeof(LedStatusBitfields): %lld\n\n", sizeof(LedStatusBitfields));

    LedStatusBitfields status = {
        .led_1 = 1,
        .led_2 = 1,
        .led_3 = 1,
    };

    print_bits((uint8_t *)&status, sizeof(status));

    status.led_1 = 0;
    status.led_2 = 0;

    print_bits((uint8_t *)&status, sizeof(status));

    BleHeader header = {
        .pdu_type = 3,
        .tx_add = 1,
        .length = 7,
    };

    print_bits((uint8_t*)&header, sizeof(header));
    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
