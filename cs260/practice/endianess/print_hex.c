#include <stdint.h>
#include <stdio.h>

// TODO make it so it prints the second half of each byte as upper case, use
// binary addition!
int main() {
  uint32_t word = 0x0A0B0C0D;
  char *byte_ptr = (char *)&word;
  for (int i = 0; i < 4; i++) {
    printf("%02x", byte_ptr[i]);
    printf("\n");
  }
}
