#ifndef EFI_TABLE_H
#define EFI_TABLE_H

#include "efi_types.h"
#include "efi_text_protocols.h"

// 4.2.1 : EFI_TABLE_HEADER
typedef struct {
    UINT64 Signature;
    UINT32 Revision;
    UINT32 HeaderSize;
    UINT32 CRC32;
    UINT32 Reserved;
} EFI_TABLE_HEADER;

// 4.3.1 : EFI_SYSTEM_TABLE : Related Definitions
typedef struct {
    EFI_TABLE_HEADER                 Hdr;
    CHAR16                           *FirmwareVendor;
    UINT32                           FirmwareRevision;
    EFI_HANDLE                       ConsoleInHandle;
    EFI_SIMPLE_TEXT_INPUT_PROTOCOL   *ConIn;
    EFI_HANDLE                       ConsoleOutHandle;
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL  *ConOut;
    EFI_HANDLE                       StandardErrorHandle;
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL  *StdErr;
//    EFI_RUNTIME_SERVICES             *RuntimeServices;
//    EFI_BOOT_SERVICES                *BootServices;
    UINTN                            NumberOfTableEntries;
//    EFI_CONFIGURATION_TABLE          *ConfigurationTable;
} EFI_SYSTEM_TABLE;

#endif // EFI_TABLE_H
