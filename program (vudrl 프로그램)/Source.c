#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int you, com;
char moves[3][10] = { "Ǯ�ϸ�", "���ϸ�", "���ϸ�" };
char result[3][50] = { "�����ϴ�!", "�̰���ϴ�!", "�й��߽��ϴ�!" };
int main() {
    srand(time(NULL));
    printf("( ���ϸ� ��Ʋ ����! �Ӽ� ��Ģ. Ǯ>�� ��>Ǯ ��>��)\n\n���ڸ� �Է��� �ּ���. (1)Ǯ�Ӽ� ���ϸ��� ������, (2)�ҼӼ� ���ϸ��� ������, (3)���Ӽ� ���ϸ��� ������ : ");
    printf("You : %s, Computer : %s\n<%s>\n", moves[(you = getchar() - 48) - 1],
        moves[(com = rand() % 3 + 1) - 1], result[(3 + you - com) % 3]);
}