#ifndef DRBG_H
#define DRBG_H

#include <stdint.h>

#define KEY_SIZE 32
#define BLOCK_SIZE 16

typedef struct
{
    uint8_t Key[KEY_SIZE];
    uint8_t V[BLOCK_SIZE];
} DRBG_STATE;

void ctr_drbg_init(DRBG_STATE *ctx, uint8_t *entropy);
void ctr_drbg_generate(DRBG_STATE *ctx, uint8_t *output, int length);

#endif
