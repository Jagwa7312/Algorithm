#include <stdio.h>

int n;
void print(int a);
int main(){

    scanf("%d", &n);
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    print(0);

    return 0;
}
void print(int a) {
    int cnt = a;

    for (int i = 0; i < cnt; i++) {
        printf("____");
    }
    printf("\"����Լ��� ������?\"\n");

    if (cnt < n){
        for (int i = 0; i < cnt; i++) {
            printf("____");
        }
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
        for (int i = 0; i < cnt; i++) {
            printf("____");
        }
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
        for (int i = 0; i < cnt; i++) {
            printf("____");
        }
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
        print(cnt + 1);
    }
    else {
        for (int i = 0; i < cnt; i++) {
            printf("____");
        }
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
    }
    for (int i = 0; i < cnt; i++) {
        printf("____");
    }
    printf("��� �亯�Ͽ���.\n");
}