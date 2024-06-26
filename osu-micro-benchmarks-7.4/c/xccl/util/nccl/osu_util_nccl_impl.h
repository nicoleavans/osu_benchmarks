/*
 * Copyright (c) 2002-2024 the Network-Based Computing Laboratory
 * (NBCL), The Ohio State University.
 *
 * Contact: Dr. D. K. Panda (panda@cse.ohio-state.edu)
 *
 * For detailed copyright and licensing information, please refer to the
 * copyright file COPYRIGHT in the top level OMB directory.
 */
#ifndef OSU_UTIL_NCCL_IMPL_H
#define OSU_UTIL_NCCL_IMPL_H

#include "osu_util_xccl_interface.h"

omb_xccl_int_t *omb_nccl_impl_inject();

/* Internal only */
static void _allocate_stream();
static void _create_comm(int num_ranks, int rank);
static void _destroy_comm();
static void _deallocate_stream();
static void _synchronize_stream();
static ncclResult_t _ncclAllToAll_shim(OSU_NCCL_ALLTOALL_PARAM);
extern int _numprocs; /* for AlltoAll shim */

#endif /* OSU_UTIL_NCCL_IMPL_H */
