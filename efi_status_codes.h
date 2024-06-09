#ifndef EFI_STATUS_CODES_H
#define EFI_STATUS_CODES_H

#define EFI_SUCCESS 0  // The operation completed successfully.
#define EFI_LOAD_ERROR 1  // The image failed to load.
#define EFI_INVALID_PARAMETER 2  // A parameter was incorrect.
#define EFI_UNSUPPORTED 3  // The operation is not supported.
#define EFI_BAD_BUFFER_SIZE 4  // The buffer was not the proper size for the request.
#define EFI_BUFFER_TOO_SMALL 5  // The buffer is not large enough to hold the requested data. The required buffer size is returned in the appropriate parameter when this error occurs.
#define EFI_NOT_READY 6  // There is no data pending upon return.
#define EFI_DEVICE_ERROR 7  // The physical device reported an error while attempting the operation.
#define EFI_WRITE_PROTECTED 8  // The device cannot be written to.
#define EFI_OUT_OF_RESOURCES 9  // A resource has run out.
#define EFI_VOLUME_CORRUPTED 10  // An inconstancy was detected on the file system causing the operating to fail.
#define EFI_VOLUME_FULL 11  // There is no more space on the file system.
#define EFI_NO_MEDIA 12  // The device does not contain any medium to perform the operation.
#define EFI_MEDIA_CHANGED 13  // The medium in the device has changed since the last access.
#define EFI_NOT_FOUND 14  // The item was not found.
#define EFI_ACCESS_DENIED 15  // Access was denied.
#define EFI_NO_RESPONSE 16  // The server was not found or did not respond to the request.
#define EFI_NO_MAPPING 17  // A mapping to a device does not exist.
#define EFI_TIMEOUT 18  // The timeout time expired.
#define EFI_NOT_STARTED 19  // The protocol has not been started.
#define EFI_ALREADY_STARTED 20  // The protocol has already been started.
#define EFI_ABORTED 21  // The operation was aborted.
#define EFI_ICMP_ERROR 22  // An ICMP error occurred during the network operation.
#define EFI_TFTP_ERROR 23  // A TFTP error occurred during the network operation.
#define EFI_PROTOCOL_ERROR 24  // A protocol error occurred during the network operation.
#define EFI_INCOMPATIBLE_VERSION 25  // The function encountered an internal version that was incompatible with a version requested by the caller.
#define EFI_SECURITY_VIOLATION 26  // The function was not performed due to a security violation.
#define EFI_CRC_ERROR 27  // A CRC error was detected.
#define EFI_END_OF_MEDIA 28  // Beginning or end of media was reached
#define EFI_END_OF_FILE 31  // The end of the file was reached.
#define EFI_INVALID_LANGUAGE 32  // The language specified was invalid.
#define EFI_COMPROMISED_DATA 33  // The security status of the data is unknown or compromised and the data must be updated or replaced to restore a valid security status.
#define EFI_IP_ADDRESS_CONFLICT 34  // There is an address conflict address allocation

#endif
