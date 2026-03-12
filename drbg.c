#include "drbg.h"
#include <string.h>

/* Simple counter increment */
static void increment_counter(uint8_t *v)
{
    for(int i=15;i>=0;i--)
    {
        v[i]++;
        if(v[i] != 0)
            break;
    }
}

/* Initialize DRBG with entropy */
void ctr_drbg_init(DRBG_STATE *ctx, uint8_t *entropy)
{
    memcpy(ctx->Key, entropy, KEY_SIZE);
    memset(ctx->V, 0x00, BLOCK_SIZE);
}

/* Generate pseudorandom bytes */
void ctr_drbg_generate(DRBG_STATE *ctx, uint8_t *output, int length)
{
    uint8_t block[BLOCK_SIZE];

    for(int i=0;i<length;i+=BLOCK_SIZE)
    {
        increment_counter(ctx->V);

        /* Simple placeholder encryption */
        for(int j=0;j<BLOCK_SIZE;j++)
        {
            block[j] = ctx->V[j] ^ ctx->Key[j];
        }

        memcpy(output+i, block, BLOCK_SIZE);
    }
}
