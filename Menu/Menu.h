//
// Created by Admin on 11.12.2024.
//

#ifndef DUNGEON_MENU_H
#define DUNGEON_MENU_H
#include <vector>
#include <windows.h>

#include "EditPlayerButton.h"
#include "ExitButton.h"
#include "NewGameButton.h"
#include <iostream>
#include <conio.h>
/*TODO:
 * Tato class bude mít vlastnost list buttonů a všechny tam v konstruktoru přidáš. Bez vytváření další metody by to mělo jít
 * A pak tu zkus udělat to ovládání pomocí těch šipek
 * dále tu budeš vypisovat to menu. takže tady bude muset být nějaká metoda na update menu. která bude nastavovat které tlačítko je aktivní a které ne.
 * chtělo by to mít zarovnáno na střed. Stačí asi staticky minimálně prozatím. Nahoře nějaký velký nápis dungeon. Můžeš zkusit vytvořit to odtud https://devops.datenkollektiv.de/banner.txt/index.html
 * a měl bys tu pak být schopný implementovat logiku na mačkání tlačítka.
 */


class Menu {
    std::vector<Button *> m_buttons;
    Button* m_chosenButton;
    int m_index;
    bool m_firstRun;

    void printMenu();
    void callButton(char input);
    void switchButton(char input);
    void refreshMenu();

public:

    Menu();
    ~Menu();
    void runMenu(char input);
};


#endif //DUNGEON_MENU_H
