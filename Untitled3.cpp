#include <stdio.h>
#include <string.h>

void convertToTwosComplement(char *binary) {
    int length = strlen(binary);
    
   //  如果是正数，补码与原码相同
    if (binary[0] == '0') {
        printf("补码: %s\n", binary);
        return;
    }

    // 如果是负数，进行取反和加1
    // 取反
    for (int i = 0; i < length; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    // 加1
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '0') {
            binary[i] = '1';
            break;
        } else {
            binary[i] = '0';
        }
    }

    printf("补码: %s\n", binary);
}

int main() {
    char binary[33]; // 假设最多32位二进制数 + 1位结束符

    printf("请输入二进制原码: ");
    scanf("%s", binary);

    convertToTwosComplement(binary);
    return 0;
}