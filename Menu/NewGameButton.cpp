//
// Created by Admin on 11.12.2024.
//

#include "NewGameButton.h"
#include "..\Monster\Monster.h"
#include "..\Monster\MonsterFactory.h"
#include "..\Map\Room.h"
#include "..\Monster\Trap.h"


void backgroundRefresh(Room* room) {
    while (true) {
        room->refreshRoom();
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Pauza mezi vykreslením
    }
}


NewGameButton::NewGameButton() {
    m_indexOfPlayer = 0;
    m_newPlayer.push_back("Archer");
    m_newPlayer.push_back("Warrior");
    m_playerFactory = new PlayerFactory();
}

void NewGameButton::execute() {
    selectPlayer();
    runGame();
}

void NewGameButton::drawButton() {
    std::cout << "Start a new game." << std::endl;
}

void NewGameButton::switchChoice(char input) {
    input = static_cast<int>(input);
    switch (input) {
        case 72: { //up
            if (m_indexOfPlayer > 0) {
                m_indexOfPlayer--;
            }
            break;
        }
        case 80: {  // down
            if (m_indexOfPlayer < 1) {
                m_indexOfPlayer++;
            }
            break;
        }
        default:
            break;
    }
}

void NewGameButton::selectPlayer() {
    system("cls");
    std::cout << "CHOOSE YOUR CLASS" << std::endl << std::endl;
    std::cout << "->" << m_newPlayer[0] << std::endl << std::endl;
    std::cout << "  " << m_newPlayer[1];
    char input;
    while (input != '\r') {
        input = _getch();
        switchChoice(input);
        system("cls");
        std::cout << "CHOOSE YOUR CLASS" << std::endl << std::endl;

        for (int i = 0; i < m_newPlayer.size(); i++) {
            if (i == m_indexOfPlayer){
                std::cout << "->";
            } else {
                std::cout << "  ";
            }
            std::cout << m_newPlayer[i] << std::endl << std::endl;
        }
    }
}

Player *NewGameButton::createPlayer() {
    return m_playerFactory->createPlayer(m_indexOfPlayer);
}

void NewGameButton::runGame() {
    Room* room = new Room();
    Trap* trap = new Trap();
    Player *player = createPlayer();

    MonsterFactory* monsterFactory = new MonsterFactory();
    Monster* ar = monsterFactory->createMonster(MonsterType::Artillery);
    Monster* cl = monsterFactory->createMonster(MonsterType::CloseCombat);


    trap->makeTrapInRoom(room);
    ar->makeMonsterInRoom(room);
    cl->makeMonsterInRoom(room);
    player->move(room,'f');
    room->printRoom();
    std::thread refreshThread(backgroundRefresh, room);
    refreshThread.detach();

    while (player->isAlive()) {
        unsigned char input = _getch();

        player->attack(room,input);
        player->move(room,input);

        trap->treatPlayer(player);
        //cl->attack(player,room);
        //ar->attack(player,room);
    }
    system("cls");
    std::cout << "YOU DIED" << std::endl;
    system("pause");

    delete room;
    delete player;
    delete trap;
    delete monsterFactory;
}





