#include <stdint.h>
#include "efi_status_codes.h"
#include "efi_types.h"
#include "efi_table.h"

EFI_STATUS efi_main(EFI_HANDLE image_handle, EFI_SYSTEM_TABLE* SystemTable) {
    SystemTable->ConOut->Reset(SystemTable->ConOut, FALSE);
    SystemTable->ConOut->OutputString(SystemTable->ConOut, (CHAR16*)L"Hello Taha!");

    while (1);

    return EFI_SUCCESS;
}
