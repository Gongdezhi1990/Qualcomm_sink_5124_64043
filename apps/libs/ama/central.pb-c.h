/*****************************************************************************
Copyright (c) 2018 Qualcomm Technologies International, Ltd.
*********************************************************************************/

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: central.proto */

#ifndef PROTOBUF_C_central_2eproto__INCLUDED
#define PROTOBUF_C_central_2eproto__INCLUDED

#include <protobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _CentralInformation CentralInformation;
typedef struct _GetCentralInformation GetCentralInformation;


/* --- enums --- */

typedef enum _Platform {
  PLATFORM__UNDEFINED = 0,
  PLATFORM__IOS = 1,
  PLATFORM__ANDROID = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PLATFORM)
} Platform;

/* --- messages --- */

struct  _CentralInformation
{
  ProtobufCMessage base;
  char *name;
  Platform platform;
};
#define CENTRAL_INFORMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&central_information__descriptor) \
    , (char *)protobuf_c_empty_string, PLATFORM__UNDEFINED }


struct  _GetCentralInformation
{
  ProtobufCMessage base;
};
#define GET_CENTRAL_INFORMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&get_central_information__descriptor) \
     }


/* CentralInformation methods */
void   central_information__init
                     (CentralInformation         *message);
size_t central_information__get_packed_size
                     (const CentralInformation   *message);
size_t central_information__pack
                     (const CentralInformation   *message,
                      uint8_t             *out);
size_t central_information__pack_to_buffer
                     (const CentralInformation   *message,
                      ProtobufCBuffer     *buffer);
CentralInformation *
       central_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   central_information__free_unpacked
                     (CentralInformation *message,
                      ProtobufCAllocator *allocator);
/* GetCentralInformation methods */
void   get_central_information__init
                     (GetCentralInformation         *message);
size_t get_central_information__get_packed_size
                     (const GetCentralInformation   *message);
size_t get_central_information__pack
                     (const GetCentralInformation   *message,
                      uint8_t             *out);
size_t get_central_information__pack_to_buffer
                     (const GetCentralInformation   *message,
                      ProtobufCBuffer     *buffer);
GetCentralInformation *
       get_central_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   get_central_information__free_unpacked
                     (GetCentralInformation *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CentralInformation_Closure)
                 (const CentralInformation *message,
                  void *closure_data);
typedef void (*GetCentralInformation_Closure)
                 (const GetCentralInformation *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    platform__descriptor;
extern const ProtobufCMessageDescriptor central_information__descriptor;
extern const ProtobufCMessageDescriptor get_central_information__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_central_2eproto__INCLUDED */
