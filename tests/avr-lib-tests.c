#include <stdio.h>
#include "acutest.h"
#include "bit-ops.h"

void test_bit_set_success(void)
{
    unsigned char PORTB = 0;

    bit_set(PORTB, 0);
    TEST_CHECK(PORTB == 0x1);

    bit_clear(PORTB, 0);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 1);
    TEST_CHECK(PORTB == 0x2);

    bit_clear(PORTB, 1);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 2);
    TEST_CHECK(PORTB == 0x4);

    bit_clear(PORTB, 2);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 3);
    TEST_CHECK(PORTB == 0x8);

    bit_clear(PORTB, 3);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 4);
    TEST_CHECK(PORTB == 0x10);

    bit_clear(PORTB, 4);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 5);
    TEST_CHECK(PORTB == 0x20);

    bit_clear(PORTB, 5);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 6);
    TEST_CHECK(PORTB == 0x40);

    bit_clear(PORTB, 6);
    TEST_CHECK(PORTB == 0);

    bit_set(PORTB, 7);
    TEST_CHECK(PORTB == 0x80);

    bit_clear(PORTB, 7);
    TEST_CHECK(PORTB == 0);
}

TEST_LIST = {
    { "test_bit_set_success", test_bit_set_success },
    { NULL, NULL}
};
