# 「⚙️」Simple header for C language to encode and decode hex

## Example:

### Encode:

```
#include <stdio.h>
#include "hex.h"

int main() {
    char str[] = "test";
    printf("Hex Encoded: %s", hexenc(str));
}
```

### Decode:

```
#include <stdio.h>
#include "hex.h"

int main() {
    char str[] = "74657374";
    printf("Hex Decoded: %s", hexdec(str));
}
```
