#include "functions.h"



int main()
{
    person player;
    mainEvent* eventTree = buildEventTree(); //��ʼ���¼���
    gameLoop(player, eventTree); //������Ϸ��ѭ��
    deleteEventTree(eventTree);
    return 0;
}