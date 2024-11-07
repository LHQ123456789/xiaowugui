#include <stdio.h>

// �ж�һ�������Ƿ����7
int containsSeven(int number) {
    while (number > 0) {
        if (number % 10 == 7) {
            return 1; // ����7
        }
        number /= 10; // ȥ�����һλ
    }
    return 0; // ������7
}

int main() {
    int n;
    scanf("%d", &n);

    int skipCount[3] = {0, 0, 0}; // ���ڼ�¼ÿ��ͬѧ��������������
    int currentNumber = 1; // ��ǰ����
    int currentPlayer = 0; // ��ǰ������ͬѧ��0��ʾ��һλ��1��ʾ�ڶ�λ��2��ʾ����λ
    int reportedCount = 0; // �Ѿ���������������

    while (reportedCount < n) {
        // ��鵱ǰ�����Ƿ���Ҫ����
        if (currentNumber % 7 == 0 || containsSeven(currentNumber)) {
            skipCount[currentPlayer]++; // ��ǰͬѧ������������1
        } else {
            reportedCount++; // �ɹ�����������������1
        }

        // �ƶ�����һ��ͬѧ
        currentPlayer = (currentPlayer + 1) % 3;
        currentNumber++; // �ƶ�����һ������
    }

    // ���ÿ��ͬѧ����������
    printf("%d %d %d\n", skipCount[0], skipCount[1], skipCount[2]);

    return 0;
}
