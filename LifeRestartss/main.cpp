#include "functions.h"
#include "Easytext.h"

person Person;
mainEvent* eventTree;

int main()
{
    youngEvent();
    AddFontResourceEx(L"font.ttf", FR_PRIVATE, NULL);
    initgraph(WINDOW_WIDTH, WINDOW_HEIGHT, EX_SHOWCONSOLE);
    setbkcolor(WHITE);
    cleardevice();
    beginView();
    eventTree = buildEventTree();
    Person = { 0,0,0,0,0 };
    gameLoop(Person, eventTree);
    //��Ҫһ����ֽ���
    deleteEventTree(eventTree);
    RemoveFontResourceEx(L"font.ttf", FR_PRIVATE, NULL);
    system("pause");
    delete defeat;
    
    return 0;
}