#ifndef TEXT_PROTOCOLS_H
#define TEXT_PROTOCOLS_H

#include "efi_types.h"

// 12.4.1 : EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL
#define EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_GUID \
 {0x387477c2,0x69c7,0x11d2,\
  {0x8e,0x39,0x00,0xa0,0xc9,0x69,0x72,0x3b}}

typedef struct _EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;
struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;
//******************************************************
// SIMPLE_TEXT_OUTPUT_MODE
//******************************************************
typedef struct {
    INT32                              MaxMode;
    // current settings
    INT32                              Mode;
    INT32                              Attribute;
    INT32                              CursorColumn;
    INT32                              CursorRow;
    BOOLEAN                            CursorVisible;
} SIMPLE_TEXT_OUTPUT_MODE;

// 12.4.2 : EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.Reset()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_RESET) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL       *This,
    IN BOOLEAN                               ExtendedVerification
);
// 12.4.3. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.OutputString()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_STRING) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL    *This,
    IN CHAR16                             *String
);
// 12.4.4. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.TestString()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_TEST_STRING) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL       *This,
    IN CHAR16                                *String
);
// 12.4.5. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.QueryMode()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_QUERY_MODE) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL          *This,
    IN UINTN                                    ModeNumber,
    OUT UINTN                                   *Columns,
    OUT UINTN                                   *Rows
);
// 12.4.6. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.SetMode()
typedef
EFI_STATUS
(* EFIAPI EFI_TEXT_SET_MODE) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL          *This,
    IN UINTN                                    ModeNumber
);
// 12.4.7. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.SetAttribute()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_SET_ATTRIBUTE) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL        *This,
    IN UINTN                                  Attribute
);
// 12.4.8. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.ClearScreen()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_CLEAR_SCREEN) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL             *This
);
// 12.4.9. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.SetCursorPosition()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_SET_CURSOR_POSITION) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL             *This,
    IN UINTN                                       Column,
    IN UINTN                                       Row
);
// 12.4.10. EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL.EnableCursor()
typedef
EFI_STATUS
(EFIAPI *EFI_TEXT_ENABLE_CURSOR) (
    IN EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL             *This,
    IN BOOLEAN                                     Visible
);

struct _EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL {
    EFI_TEXT_RESET                           Reset;
    EFI_TEXT_STRING                          OutputString;
    EFI_TEXT_TEST_STRING                     TestString;
    EFI_TEXT_QUERY_MODE                      QueryMode;
    EFI_TEXT_SET_MODE                        SetMode;
    EFI_TEXT_SET_ATTRIBUTE                   SetAttribute;
    EFI_TEXT_CLEAR_SCREEN                    ClearScreen;
    EFI_TEXT_SET_CURSOR_POSITION             SetCursorPosition;
    EFI_TEXT_ENABLE_CURSOR                   EnableCursor;
    SIMPLE_TEXT_OUTPUT_MODE                  *Mode;
};



#define EFI_SIMPLE_TEXT_INPUT_PROTOCOL_GUID \
 {0x387477c1,0x69c7,0x11d2,\
  {0x8e,0x39,0x00,0xa0,0xc9,0x69,0x72,0x3b}}

typedef struct _EFI_SIMPLE_TEXT_INPUT_PROTOCOL EFI_SIMPLE_TEXT_INPUT_PROTOCOL;
struct EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

// 12.3.2. EFI_SIMPLE_TEXT_INPUT_PROTOCOL.Reset()
typedef
EFI_STATUS
(EFIAPI *EFI_INPUT_RESET) (
    IN EFI_SIMPLE_TEXT_INPUT_PROTOCOL                 *This,
    IN BOOLEAN                                        ExtendedVerification
);
// 12.3.3. EFI_SIMPLE_TEXT_INPUT_PROTOCOL.ReadKeyStroke()
//******************************************************
// EFI_INPUT_KEY
//******************************************************
typedef struct {
    UINT16                             ScanCode;
    CHAR16                             UnicodeChar;
} EFI_INPUT_KEY;
typedef
EFI_STATUS
(EFIAPI *EFI_INPUT_READ_KEY) (
    IN EFI_SIMPLE_TEXT_INPUT_PROTOCOL              *This,
    OUT EFI_INPUT_KEY                              *Key
);

struct _EFI_SIMPLE_TEXT_INPUT_PROTOCOL {
    EFI_INPUT_RESET                       Reset;
    EFI_INPUT_READ_KEY                    ReadKeyStroke;
    EFI_EVENT                             WaitForKey;
};

#endif // TEXT_PROTOCOLS_H
