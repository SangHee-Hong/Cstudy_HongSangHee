#include <stdio.h>
int main() {
    int arr[3] = { 1,2,3 }; //�����迭
    int n, a, a1, b, b1, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { // n���ݺ�
        scanf("%d %d", &a, &b);//a,b ���� �Է�
        if (a == b)   // �ΰ�������
            continue;
        else {
            for (int k = 0; k < 3; k++) { // a�����ִ¹迭a1
                if (arr[k] == a)
                    a1 = k;
                else if (arr[k] == b) // b�����ִ¹迭b1
                    b1 = k;
                else {}
            }
            // �ڸ��ٲ�
            temp = arr[a1];
            arr[a1] = arr[b1];
            arr[b1] = temp;
        }
    }
    printf("%d", arr[0]);
    return 0;
}