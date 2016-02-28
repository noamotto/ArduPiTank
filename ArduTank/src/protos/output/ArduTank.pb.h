/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.5 at Sun Feb 28 22:39:26 2016. */

#ifndef PB_ARDUTANK_PB_H_INCLUDED
#define PB_ARDUTANK_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _DirectionEnum {
    DirectionEnum_FORWARD = 0,
    DirectionEnum_BACKWARD = 1
} DirectionEnum;

/* Struct definitions */
typedef struct _GetVersionCommand {
    char dummy_field;
/* @@protoc_insertion_point(struct:GetVersionCommand) */
} GetVersionCommand;

typedef struct _StopCommand {
    char dummy_field;
/* @@protoc_insertion_point(struct:StopCommand) */
} StopCommand;

typedef struct _GetVersionResponse {
    uint32_t major;
    uint32_t minor;
/* @@protoc_insertion_point(struct:GetVersionResponse) */
} GetVersionResponse;

typedef struct _MoveCommand {
    DirectionEnum direction;
/* @@protoc_insertion_point(struct:MoveCommand) */
} MoveCommand;

typedef struct _SetSpeedCommand {
    uint32_t speed;
/* @@protoc_insertion_point(struct:SetSpeedCommand) */
} SetSpeedCommand;

typedef struct _ArduTankCommand {
    bool has_GetVersionValue;
    GetVersionCommand GetVersionValue;
    bool has_SetSpeedCommandValue;
    SetSpeedCommand SetSpeedCommandValue;
    bool has_MoveCommandValue;
    MoveCommand MoveCommandValue;
    bool has_StopCommandValue;
    StopCommand StopCommandValue;
/* @@protoc_insertion_point(struct:ArduTankCommand) */
} ArduTankCommand;

typedef struct _ArduTankResponse {
    bool has_GetVersionResponseValue;
    GetVersionResponse GetVersionResponseValue;
/* @@protoc_insertion_point(struct:ArduTankResponse) */
} ArduTankResponse;

/* Default values for struct fields */

/* Initializer values for message structs */
#define SetSpeedCommand_init_default             {0}
#define MoveCommand_init_default                 {(DirectionEnum)0}
#define StopCommand_init_default                 {0}
#define GetVersionCommand_init_default           {0}
#define ArduTankCommand_init_default             {false, GetVersionCommand_init_default, false, SetSpeedCommand_init_default, false, MoveCommand_init_default, false, StopCommand_init_default}
#define GetVersionResponse_init_default          {0, 0}
#define ArduTankResponse_init_default            {false, GetVersionResponse_init_default}
#define SetSpeedCommand_init_zero                {0}
#define MoveCommand_init_zero                    {(DirectionEnum)0}
#define StopCommand_init_zero                    {0}
#define GetVersionCommand_init_zero              {0}
#define ArduTankCommand_init_zero                {false, GetVersionCommand_init_zero, false, SetSpeedCommand_init_zero, false, MoveCommand_init_zero, false, StopCommand_init_zero}
#define GetVersionResponse_init_zero             {0, 0}
#define ArduTankResponse_init_zero               {false, GetVersionResponse_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define GetVersionResponse_major_tag             1
#define GetVersionResponse_minor_tag             2
#define MoveCommand_direction_tag                1
#define SetSpeedCommand_speed_tag                1
#define ArduTankCommand_GetVersionValue_tag      1
#define ArduTankCommand_SetSpeedCommandValue_tag 2
#define ArduTankCommand_MoveCommandValue_tag     3
#define ArduTankCommand_StopCommandValue_tag     4
#define ArduTankResponse_GetVersionResponseValue_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t SetSpeedCommand_fields[2];
extern const pb_field_t MoveCommand_fields[2];
extern const pb_field_t StopCommand_fields[1];
extern const pb_field_t GetVersionCommand_fields[1];
extern const pb_field_t ArduTankCommand_fields[5];
extern const pb_field_t GetVersionResponse_fields[3];
extern const pb_field_t ArduTankResponse_fields[2];

/* Maximum encoded size of messages (where known) */
#define SetSpeedCommand_size                     6
#define MoveCommand_size                         2
#define StopCommand_size                         0
#define GetVersionCommand_size                   0
#define ArduTankCommand_size                     16
#define GetVersionResponse_size                  12
#define ArduTankResponse_size                    14

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ARDUTANK_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
