#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // �׽�Ʈ���̽� ���� �Է�

    for (int i = 0; i < n; i++) {
        double a;
        scanf("%lf", &a); // ������ �𼭸� ���� �Է�

        // �ִ� ���Ǹ� ����ϴ� b�� ���� ã�� ����
        double b = a / 6.0; // ���簢���� bxb ũ��� �ڸ��� b��ŭ ���̰� ��

        // �Ҽ��� �Ʒ� 10�ڸ����� ���
        printf("%.10lf\n", b);
    }

    return 0;
}
