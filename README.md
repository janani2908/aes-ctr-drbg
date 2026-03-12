# AES CTR-DRBG Implementation in C

This repository implements a simple AES Counter Mode Deterministic Random Bit Generator (CTR-DRBG).

CTR-DRBG is a cryptographically secure pseudorandom number generator based on AES.

The implementation demonstrates the internal state update and random byte generation.

Features

- AES-based deterministic random generator
- 256-bit key
- 128-bit counter (V)
- Simple entropy initialization
- Example test program

Project Structure

drbg.c     DRBG implementation
drbg.h     Header definitions
main.c     Test program
Makefile   Build instructions

Build

Compile the program:

gcc drbg.c main.c -o drbg_test

Run:

./drbg_test

Applications

CTR-DRBG is used in:

- cryptographic key generation
- secure boot
- TLS libraries
- embedded security systems

Author

Janani T  
Embedded Systems & Cryptography Developer
