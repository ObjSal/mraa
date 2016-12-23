/*
 * Author: Sanrio Alvares <sanrio.alvares@intel.com>
 * Copyright (c) 2016 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "aio.h"
#include "mraa_internal.h"
#include <string.h>

mraa_aio_context
mraa_aio_init(unsigned int aio)
{
    return NULL;
}

unsigned int
mraa_aio_read(mraa_aio_context dev)
{
    return -1;
}

float
mraa_aio_read_float(mraa_aio_context dev)
{
    return -1;
}

mraa_result_t
mraa_aio_close(mraa_aio_context dev)
{
    return -1;
}

mraa_result_t
mraa_aio_set_bit(mraa_aio_context dev, int bits)
{
    return -1;
}

int
mraa_aio_get_bit(mraa_aio_context dev)
{
    return -1;
}

