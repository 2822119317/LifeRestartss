#include "functions.h"

int main()
{
    AddFontResourceEx("font.ttf", FR_PRIVATE, NULL);
    initgraph(WINDOW_WIDTH, WINDOW_HEIGHT, EX_SHOWCONSOLE);
    setbkcolor(WHITE);
    cleardevice();
    beginView();
    RemoveFontResourceEx("font.ttf", FR_PRIVATE, NULL);
    system("pause");

    person player;
    mainEvent* eventTree = buildEventTree(); //��ʼ���¼���
    gameLoop(player, eventTree); //������Ϸ��ѭ��
    deleteEventTree(eventTree);
    return 0;
}