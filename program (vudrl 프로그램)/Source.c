#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int you, com;
char moves[3][10] = { "풀켓몬", "불켓몬", "물켓몬" };
char result[3][50] = { "비겼습니다!", "이겼습니다!", "패배했습니다!" };
int main() {
    srand(time(NULL));
    printf("( 포켓몬 배틀 게임! 속성 규칙. 풀>물 불>풀 물>불)\n\n숫자를 입력해 주세요. (1)풀속성 포켓몬을 꺼낸다, (2)불속성 포켓몬을 꺼낸다, (3)물속성 포켓몬을 꺼낸다 : ");
    printf("You : %s, Computer : %s\n<%s>\n", moves[(you = getchar() - 48) - 1],
        moves[(com = rand() % 3 + 1) - 1], result[(3 + you - com) % 3]);
}