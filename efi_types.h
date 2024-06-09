#ifndef UEFI_TYPES_H
#define UEFI_TYPES_H

#include <stdint.h>

typedef __int128            int128_t;
typedef unsigned __int128   uint128_t;
#define TRUE            1
#define FALSE           0
// Logical Boolean. 1-byte value containing a 0 for FALSE or a 1 for TRUE. Other values are undefined.
typedef unsigned char   BOOLEAN;

// 1-byte signed value.
typedef int8_t          INT8;
// 2-byte signed value.
typedef int16_t         INT16;
// 4-byte signed value.
typedef int32_t         INT32;
// 8-byte signed value.
typedef int64_t         INT64;
// 16-byte signed value.
typedef int128_t        INT128;

// 1-byte unsigned value.
typedef uint8_t         UINT8;
// 2-byte unsigned value.
typedef uint16_t        UINT16;
// 4-byte unsigned value.
typedef uint32_t        UINT32;
// 8-byte unsigned value.
typedef uint64_t        UINT64;
// 16-byte unsigned value.
typedef uint128_t       UINT128;

// Signed value of native width. (4 bytes on supported 32-bit processor instructions, 8 bytes on supported 64-bit processor instructions, 16 bytes on supported 128-bit processor instructions)
typedef int             INTN;
// Unsigned value of native width. (4 bytes on supported 32-bit processor instructions, 8 bytes on supported 64-bit processor instructions, 16 bytes on supported 128-bit processor instructions)
typedef unsigned int    UINTN;

// 1-byte character. Unless otherwise specified, all 1-byte or ASCII characters and strings are stored in 8-bit ASCII encoding format, using the ISO-Latin-1 character set.
typedef UINT8           CHAR8;
// 2-byte Character. Unless otherwise specified all characters and strings are stored in the UCS-2 encoding format as defined by Unicode 2.1 and ISO/IEC 10646 standards.
typedef UINT16          CHAR16;

// Undeclared type.
typedef void            VOID;

// 128-bit buffer containing a unique identifier value. Unless otherwise specified, aligned on a 64-bit boundary.
// GUIDs are of the form: ********-****-****-****-************
typedef struct {
    UINT32 Part1;       // 4 bytes
    UINT16 Part2;       // 2 bytes
    UINT16 Part3;       // 2 bytes 
    // Using an array of uint8 as no predefined structure is of 6 bytes
    UINT8  Part4[6];    // 6 bytes
} GUID;
typedef GUID            EFI_GUID;

// Status code. Type UINTN.
typedef UINTN           EFI_STATUS;
// A collection of related interfaces. Type VOID *.
typedef VOID *          EFI_HANDLE;
// Handle to an event structure. Type VOID *.
typedef VOID *          EFI_EVENT;
// Logical block address. Type UINT64.
typedef UINT64          EFI_LBA;
// Task priority level. Type UINTN.
typedef UINTN           EFI_TPL;

// 32-byte buffer containing a network Media Access Control address.
typedef struct {
    UINT8 Addr[32];
} EFI_MAC_ADDRESS;

// 4-byte buffer. An IPv4 internet protocol address.
typedef struct {
    UINT8 Addr[4];
} EFI_IPv4_ADDRESS;

// 16-byte buffer. An IPv6 internet protocol address.
typedef struct {
    UINT8 Addr[16];
} EFI_IPv6_ADDRESS;

// 16-byte buffer aligned on a 4-byte boundary. An IPv4 or IPv6 internet protocol address.
typedef struct {
    UINT8 Addr[16];
} EFI_IP_ADDRESS;

#define EFIAPI  __attribute__((cdecl))

#endif
