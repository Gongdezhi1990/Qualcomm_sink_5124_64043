/****************************************************************************
 * Copyright (c) 2015 - 2017 Qualcomm Technologies International, Ltd.
****************************************************************************/
/**
 * \file  cbops_shift_op.c
 * \ingroup cbops 
 *
 * This file contains functions for the shift copy cbops operator
 */

/****************************************************************************
Include Files
 */
#include "pmalloc/pl_malloc.h"
#include "cbops_c.h"

/****************************************************************************
Public Function Definitions
*/

/*
 * create_shift_op
 * Due to its particulars, it may only have one param for number of creation-time channels. Other cbops
 * may have two different numbers.
 */
cbops_op* create_g711_op(unsigned nr_channels, unsigned* input_idx, unsigned* output_idx, void* mapping_func)
{
    // cbop param struct size (header plus cbop-specific parameters)
    cbops_op *op = (cbops_op*)xzpmalloc(sizeof_cbops_op(cbops_g711, nr_channels, nr_channels));

    if(op != NULL)
    {
        cbops_g711 *params;
        
        /* Setup Operator func table*/
        op->function_vector = cbops_g711_table;

        /* Setup cbop param struct header info */
        params = (cbops_g711*)cbops_populate_param_hdr(op, nr_channels, nr_channels, input_idx, output_idx);

        /* Setup cbop-specific parameters - well, just one in this case. Just exemplifies using the
         * generic macro, but in this cbop's case we could get to the param location "directly"
         */
        params->g711_func_ptr_field = mapping_func;
    }

    return(op);
}


