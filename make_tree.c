#include "pes.h"
#include <stdio.h>
#include <string.h>

int main() {
    ObjectID id;

    char data[] = "100644 file.txt\0abcdefghijklmnopqrstuvwx123456";

    if (object_write(OBJ_TREE, data, sizeof(data), &id) != 0) {
        printf("Write failed\n");
        return 1;
    }

    printf("Tree object created!\n");
    return 0;
}
