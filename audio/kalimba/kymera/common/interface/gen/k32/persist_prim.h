/*****************************************************************************

            (c) Qualcomm Technologies International, Ltd. 2018
            Confidential information of Qualcomm

            Refer to LICENSE.txt included with this source for details
            on the license terms.

            WARNING: This is an auto-generated file!
                     DO NOT EDIT!

*****************************************************************************/
#ifndef PERSIST_PRIM_H
#define PERSIST_PRIM_H


#define MAP_CAPID_UCID_SBID_TO_PSKEYID(capid, ucid, sbid)               ((((capid) & CAPID_PS_MASK) << CAPID_PS_SHIFT) | \
                                                                         (((ucid) & UCID_PS_MASK) << UCID_PS_SHIFT) | \
                                                                         (((sbid) & SBID_PS_MASK) << SBID_PS_SHIFT))
#define EXTRACT_CAPID_FROM_LOGICAL_PSKEYID(id)                          (((id) >> CAPID_PS_SHIFT) & CAPID_PS_MASK)
#define EXTRACT_SBID_FROM_LOGICAL_PSKEYID(id)                           (((id) >> SBID_PS_SHIFT) & SBID_PS_MASK)
#define EXTRACT_UCID_FROM_LOGICAL_PSKEYID(id)                           (((id) >> UCID_PS_SHIFT) & UCID_PS_MASK)
#define SBID_PS_SHIFT                                                   (0)
#define SBID_PS_MASK                                                    (0x0001)
#define UCID_PS_MASK                                                    (0x003F)
#define CAPID_PS_MASK                                                   (0xFFFF)
#define UCID_PS_SHIFT                                                   (1)
#define CAPID_PS_SHIFT                                                  (7)


/*******************************************************************************

  NAME
    PERSIST

  DESCRIPTION
    Persistent store ranking of data

 VALUES
    ANY                         - Persisted in any writable store. When reading,
                                  the data is attempted to be found from store
                                  with PERSIST_UNTIL_POWERDOWN ranking first and
                                  move toward stores with higher rank. Writing
                                  is attempted to lowest-ranking writable store
                                  of rank > UNTIL_POWERDOWN, if such exists on
                                  the platform. Otherwise a write to
                                  PERSIST_UNTIL_POWERDOWN is the last resort.
    UNTIL_POWERDOWN             - Persisted in current powercycle only
    ACROSS_POWERCYCLES          - Persisted between power cycles
    ACROSS_POWERCYCLES_DEFAULTS - Persisted between power cycles and acting as
                                  "factory defaults"

*******************************************************************************/
typedef enum
{
    PERSIST_ANY = 0,
    PERSIST_UNTIL_POWERDOWN = 1,
    PERSIST_ACROSS_POWERCYCLES = 2,
    PERSIST_ACROSS_POWERCYCLES_DEFAULTS = 3
} PERSIST;


/*******************************************************************************

  NAME
    PERSIST_ID_TYPE

  DESCRIPTION
    Data type of the PS key values. Unfortunately current script only
    generates output for items with same name as filename as preamble, there
    are pros and cons for this. However, actual name of the interface type is
    re-instated in the ps.h header, which is to be used across Kymera (hence
    internal to DSP).

*******************************************************************************/
typedef uint24 PERSIST_ID_TYPE;


#define PERSIST_PRIM_ANY_SIZE 1


#endif /* PERSIST_PRIM_H */

