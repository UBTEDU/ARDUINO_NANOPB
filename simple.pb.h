/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.8 at Mon Jun 26 14:11:24 2017. */

#ifndef PB_SIMPLE_PB_H_INCLUDED
#define PB_SIMPLE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _SimpleMessage {
    char request[256];
/* @@protoc_insertion_point(struct:SimpleMessage) */
} SimpleMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define SimpleMessage_init_default               {""}
#define SimpleMessage_init_zero                  {""}

/* Field tags (for use in manual encoding/decoding) */
#define SimpleMessage_request_tag           1

/* Struct field encoding specification for nanopb */
extern const pb_field_t SimpleMessage_fields[2];

/* Maximum encoded size of messages (where known) */
#define SimpleMessage_size                       259

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SIMPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
