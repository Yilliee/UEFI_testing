CC        := clang

CFLAGS    := -target x86_64-unknown-windows \
			 -nostdlib \
			 -ffreestanding \
			 -DIN= \
			 -DOUT= \
			 -DOPTIONAL= \
			 -Wall \
			 -Werror

LFLAGS    := -target x86_64-unknown-windows \
			 -nostdlib \
			 -Wl,-entry:efi_main \
			 -Wl,-subsystem:efi_application \
			 -fuse-ld=lld-link \
			 -Wall \
			 -Werror

all: main.efi

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main.efi: main.o
	$(CC) $^ $(LFLAGS) -o $@

clean:
	@echo "Cleaning files...."
	rm -f *.o *.efi *.EFI
	@echo "Done."
