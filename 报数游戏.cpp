#include <stdio.h>

// 判断一个数字是否包含7
int containsSeven(int number) {
    while (number > 0) {
        if (number % 10 == 7) {
            return 1; // 包含7
        }
        number /= 10; // 去掉最后一位
    }
    return 0; // 不包含7
}

int main() {
    int n;
    scanf("%d", &n);

    int skipCount[3] = {0, 0, 0}; // 用于记录每个同学跳过的数字数量
    int currentNumber = 1; // 当前报数
    int currentPlayer = 0; // 当前报数的同学，0表示第一位，1表示第二位，2表示第三位
    int reportedCount = 0; // 已经报出的数字数量

    while (reportedCount < n) {
        // 检查当前数字是否需要跳过
        if (currentNumber % 7 == 0 || containsSeven(currentNumber)) {
            skipCount[currentPlayer]++; // 当前同学跳过的数量加1
        } else {
            reportedCount++; // 成功报出的数字数量加1
        }

        // 移动到下一个同学
        currentPlayer = (currentPlayer + 1) % 3;
        currentNumber++; // 移动到下一个数字
    }

    // 输出每个同学跳过的数量
    printf("%d %d %d\n", skipCount[0], skipCount[1], skipCount[2]);

    return 0;
}
