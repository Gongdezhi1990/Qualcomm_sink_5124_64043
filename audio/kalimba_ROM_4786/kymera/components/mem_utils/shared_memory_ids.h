/****************************************************************************
 * Copyright (c) 2014 - 2017 Qualcomm Technologies International, Ltd.
****************************************************************************/
/**
 * \file shared_memory.h
 * \ingroup shared_mem
 *
 */

#ifndef SHARED_MEMORY_IDS_H
#define SHARED_MEMORY_IDS_H

/**
 * Shared memory IDs.
 *
 * This enumeration provides unique IDs for the users of the shared memory.
 * To create a new id add a new entry to the enumeration.
 * _BEGINNING and _END are just helper IDs for WBS capability.
 */
typedef enum{
    /*
     * Ids for shared memory between WBS encoders.
     */
    SBC_ENC_SHARED_AUDIO_SAMPLE_JS,
    SBC_ENC_SHARED_ANALYSIS_COEFS_M8,
    SBC_ENC_SHARED_ANALYSIS_COEFS_M4,
    SBC_ENC_SHARED_ANALYSIS_Y,
    SBC_ENC_SHARED_LEVEL_COEFS,
    /*
     * Ids for shared memory between WBS decoders.
     */
    SBC_DEC_SHARED_SYNTHESIS_COEFS_M8,
    SBC_DEC_SHARED_SYNTHESIS_COEFS_M4,
    SBC_DEC_SHARED_LEVELRECIP_COEFS,
    SBC_DEC_SHARED_BITMASK_LOOKUP,
    /*
     * Ids for shared memory between any WBS.
     */
    SBC_SHARED_WIN_COEFS_M8,
    SBC_SHARED_WIN_COEFS_M4,
    SBC_SHARED_LOUDNESS_OFFSET,
    SBC_SHARED_SCALE_FACTOR,
    SBC_SHARED_SCALE_FACTOR_JS,
    SBC_SHARED_BITNEED,
    SBC_SHARED_BITS,
    SBC_SHARED_BITSLICE_LOOKUP,
    /*
     * Id for volume control shared memory in cVc.
     */
    CVC_SHARED_VOLUME_CONTROL,
    /*
     * Ids for filter coeffs shared memory in Resampler.
     */
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_16p7,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_18p1,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_23p0,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_24p2,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_25p0,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_33p3,
    RESAMPLER_SHARED_FILTER_COEFFS_FIR_50p0,
    /*
     * Ids for Software Rate Adjust filter tables.
     *
     * NOTE: These expect to be in DM2.
     */
    SW_RA_NORMAL_QUALITY_COEFFS,
    SW_RA_HIGH_QUALITY_COEFFS,
    SW_RA_VERY_HIGH_QUALITY_COEFFS,

    /****************************************************************************
    Filter Bank Configurations
    ****************************************************************************/
    FILTER_BANK_FRM120_P480_FFT256,
    FILTER_BANK_FRM120_P240_FFT256,
    FILTER_BANK_FRM60_P240_FFT128,
    FILTER_BANK_FRM60_P120_FFT128,
    FILTER_BANK_FRM64_P256_FFT128,
    FILTER_BANK_FRM64_P128_FFT128,
    FILTER_BANK_FRM128_P256_FFT256,
    FILTER_BANK_FRM128_P512_FFT256,

    FILTER_BANK_COS_SPLIT,

    FILTER_BANK_FRM120_P480_FFT256_PROTO,
    FILTER_BANK_FRM120_P240_FFT256_PROTO,
    FILTER_BANK_FRM60_P240_FFT128_PROTO,
    FILTER_BANK_FRM60_P120_FFT128_PROTO,
    FILTER_BANK_FRM64_P256_FFT128_PROTO,
    FILTER_BANK_FRM64_P128_FFT128_PROTO,
    FILTER_BANK_FRM128_P256_FFT256_PROTO,
    FILTER_BANK_FRM128_P512_FFT256_PROTO,


    /****************************************************************************
    IIR v2 Resampler Configurations
    ****************************************************************************/

    IIRV2_RESAMPLER_Up_1_Down_2,
    IIRV2_RESAMPLER_Up_1_Down_3,
    IIRV2_RESAMPLER_Up_1_Down_4,
    IIRV2_RESAMPLER_Up_1_Down_6,
    IIRV2_RESAMPLER_Up_1_Down_12,
    IIRV2_RESAMPLER_Up_2_Down_1,
    IIRV2_RESAMPLER_Up_2_Down_3,
    IIRV2_RESAMPLER_Up_3_Down_1,
    IIRV2_RESAMPLER_Up_3_Down_2,
    IIRV2_RESAMPLER_Up_4_Down_1,
    IIRV2_RESAMPLER_Up_5_Down_1,
    IIRV2_RESAMPLER_Up_6_Down_1,
    IIRV2_RESAMPLER_Up_8_Down_1,
    IIRV2_RESAMPLER_Up_12_Down_1,
    IIRV2_RESAMPLER_Up_40_Down_1,
    IIRV2_RESAMPLER_Up_80_Down_441,
    IIRV2_RESAMPLER_Up_147_Down_160,
    IIRV2_RESAMPLER_Up_147_Down_320,
    IIRV2_RESAMPLER_Up_147_Down_640,
    IIRV2_RESAMPLER_Up_160_Down_147,
    IIRV2_RESAMPLER_Up_160_Down_441,
    IIRV2_RESAMPLER_Up_320_Down_147,
    IIRV2_RESAMPLER_Up_320_Down_441,
    IIRV2_RESAMPLER_Up_441_Down_80,
    IIRV2_RESAMPLER_Up_441_Down_160,
    IIRV2_RESAMPLER_Up_441_Down_320,
    IIRV2_RESAMPLER_Up_441_Down_640,
    IIRV2_RESAMPLER_Up_640_Down_147,
    IIRV2_RESAMPLER_Up_640_Down_441,
    IIRV2_RESAMPLER_Up_160_Down_147_low_mips,
    IIRV2_RESAMPLER_Up_147_Down_160_low_mips,

    IIRV2_RESAMPLER_fir_L40_M21_K6,
    IIRV2_RESAMPLER_fir_L21_M10_K6,
    IIRV2_RESAMPLER_fir_L21_M8_K10,
    IIRV2_RESAMPLER_fir_L21_M64_K10,
    IIRV2_RESAMPLER_fir_L16_M7_K10,
    IIRV2_RESAMPLER_fir_L8_M7_K10,
    IIRV2_RESAMPLER_fir_L8_M1_K10,
    IIRV2_RESAMPLER_fir_L8_M21_K10,
    IIRV2_RESAMPLER_fir_L7_M16_K10,
    IIRV2_RESAMPLER_fir_L7_M32_K10,
    IIRV2_RESAMPLER_fir_L7_M64_K10,
    IIRV2_RESAMPLER_fir_L6_M1_K10,
    IIRV2_RESAMPLER_fir_L5_M1_K10,
    IIRV2_RESAMPLER_fir_L4_M21_K10,
    IIRV2_RESAMPLER_fir_L4_M7_K10,
    IIRV2_RESAMPLER_fir_L4_M1_K10,
    IIRV2_RESAMPLER_fir_L3_M1_K10,
    IIRV2_RESAMPLER_fir_L3_M2_K10,
    IIRV2_RESAMPLER_fir_L2_M1_K10,
    IIRV2_RESAMPLER_fir_L2_M3_K10,
    IIRV2_RESAMPLER_fir_L2_M21_K10,
    IIRV2_RESAMPLER_fir_L1_M2_K10,
    IIRV2_RESAMPLER_fir_L1_M3_K10,
    IIRV2_RESAMPLER_fir_L1_M4_K10,
    IIRV2_RESAMPLER_fir_L1_M6_K10,
    IIRV2_RESAMPLER_fir_L160_M147_K10,
    IIRV2_RESAMPLER_fir_L147_M160_K10,
    IIRV2_RESAMPLER_fir_L8_M63_K10,
    IIRV2_RESAMPLER_fir_L10_M7_K6,
    IIRV2_RESAMPLER_fir_L160_M441_K10,
    IIRV2_RESAMPLER_fir_L441_M160_K10,

    /****************************************************************************
       CVC Shared Algorithm Blocks
    ****************************************************************************/

    /* VAD & DC blocker*/
    CVC_DCBLK_VAD_NB,
    CVC_DCBLK_VAD_WB,
    CVC_DCBLK_VAD_UWB,
    VAD_CAPABILITY_COEFFS,

    /* OMS 270 */
    CVC_OMS270_CONFIG_NB ,
    CVC_OMS270_INTERNAL_NB,
    CVC_OMS270_CONFIG_WB,
    CVC_OMS270_INTERNAL1_WB,
    CVC_OMS270_INTERNAL2_WB,

    /* ADF */
    CVC_ADF_RNR_TABLES,

    /* AEC500 */
    CVC_AEC500_HS_CONST,
    CVC_AEC500_HF_CONST,

    /* DMS100*/
    CVC_DMS100_INTERNAL1,
    CVC_DMS100_INTERNAL2,
    CVC_DMS100_INTERNAL3,
    CVC_DMS100_INTERNAL4,
    CVC_DMS100_INTERNAL5,

    CVC_DMS100_INTERNAL1_NB,
    CVC_DMS100_INTERNAL2_NB,
    CVC_DMS100_INTERNAL3_NB,
    CVC_DMS100_INTERNAL4_NB,
    CVC_DMS100_INTERNAL5_NB,
    CVC_DMS100_INTERNAL6_NB,
    CVC_DMS100_INTERNAL7_NB,

    CVC_DMS100_INTERNAL1_WB,
    CVC_DMS100_INTERNAL2_WB,
    CVC_DMS100_INTERNAL3_WB,
    CVC_DMS100_INTERNAL4_WB,
    CVC_DMS100_INTERNAL5_WB,
    CVC_DMS100_INTERNAL6_WB,
    CVC_DMS100_INTERNAL7_WB,

    CVC_OMS270_PBP_NB,
    CVC_OMS270_PBP_WB,
    CVC_OMS270_LINEAR_NB,
    CVC_OMS270_LINEAR_WB,
    CVC_DMS100_DM_NB,
    CVC_DMS100_DM_WB,
    CVC_DMS100_SM_NB,
    CVC_DMS100_SM_WB,
    CVC_DMS100_PBP_NB,
    CVC_DMS100_PBP_WB,

    CVC_ASF100_CONST_DM1,
    CVC_ASF100_CONST_DM2,
    CVC_ASF100_CONST_NB,
    CVC_ASF100_CONST_WB,
    CVC_ASF100_CONST_BS_MODE2,
    CVC_ASF100_MODE_NB,
    CVC_ASF100_MODE_WB,

    CVC_AEC510_CONST,
    CVC_AEC510_MODE_NB,
    CVC_AEC510_MODE_WB,
    CVCLIB_TABLE,

    PLC100_NB_CONSTANTS,
    PLC100_WB_CONSTANTS,

    /* AAC DECODER LC*/
    AAC_BITMASK_SHARED_LOOKUP_FIELD,
    AAC_TWO2QTRX_SHARED_LOOKUP_FIELD,
    AAC_X43_SHARED_LOOKUP1_FIELD,
    AAC_X43_SHARED_LOOKUP2_FIELD,
    AAC_TNS_MAX_SFB_LONG_TABLE_SHARED_FIELD,
    AAC_TNS_LOOKUP_COEFS_SHARED_FIELD,
    AAC_SAMPLE_RATE_TAGS_SHARED_FIELD,
    AAC_LTP_COEFS_SHARED_FIELD,
    AAC_SIN2048_COEFS_SHARED_FIELD,
    AAC_SIN256_COEFS_SHARED_FIELD,
    AAC_KAISER2048_COEFS_SHARED_FIELD,
    AAC_KAISER256_COEFS_SHARED_FIELD,
    AAC_HUFFMAN_OFFSETS_SHARED_FIELD,
    AAC_SIN_CONST_SHARED_PTR,
    AAC_SIN_CONST_SHARED_IPTR,
    AAC_X43_SHARED_LOOKUP32_FIELD,

    /* AAC DECODER SBR ADDITIONS*/
    AAC_SBR_QMF_FILTERBANK_WINDOW_FIELD,
    AAC_SBR_SMALL_CONST_ARRAYS_FIELD,
    AAC_SBR_DCT4_64_TABLE_FIELD,
    AAC_SBR_ONE_OVER_DIV_FIELD,
    AAC_SBR_SYNTH_PRE_PROCESS_REAL_FIELD,
    AAC_SBR_SYNTH_PRE_PROCESS_IMAG_FIELD,
    AAC_SBR_SYNTH_POST_PROCESS_REAL_FIELD,

    /* AAC DECODER PS ADDITIONS*/
    AAC_PS_SMALL_CONST_ARRAYS_FIELD,

    /* AAC DECODER ELD ADDITIONS*/
    AAC_ELD_TWIDDLE_TABLE_FIELD,
    AAC_ELD_WIN_COEFS_TABLE_FIELD,
    AAC_ELD_SIN_CONST_TABLE_FIELD,
    AAC_ELD_DCT4_PRE_COS_TABLE_FIELD,
    AAC_ELD_DCT4_PRE_SIN_TABLE_FIELD,
    AAC_ELD_DCT4_POST_COS_TABLE_FIELD,
    AAC_ELD_DCT4_POST_SIN_TABLE_FIELD,
    AAC_ELD_DCT4_PRE_COS_SYNTHESIS_TABLE_FIELD,
    AAC_ELD_DCT4_PRE_SIN_SYNTHESIS_TABLE_FIELD,
    AAC_ELD_DCT4_POST_COS_SYNTHESIS_TABLE_FIELD,
    AAC_ELD_DCT4_POST_SIN_SYNTHESIS_TABLE_FIELD,
    AAC_ELD_QMF_FILTERBANK_WINDOW_TABLE_FIELD,
    AAC_ELD_QMF_FILTERBANK_WINDOW_SYNTH_TABLE_FIELD,

    /* CELT ENCODER*/
    CELT_ENC_SHARED_INV_TRANSIENT_WINDOW,
    CELT_ENC_SHARED_JUMP,
    /* CELT ENCODER/DECODER*/
    CELT_SHARED_FLAGLIST,
    CELT_SHARED_EMEANS,
    CELT_SHARED_MAX_N,
    CELT_SHARED_MAX_K,
    CELT_SHARED_INV2,
    /* CELT DECODER*/
    CELT_DEC_SHARED_TRANSIENT_WINDOW,
    CELT_DEC_SHARED_JUMP


}shared_memory_id;

#endif /* SHARED_MEMORY_IDS_H */
