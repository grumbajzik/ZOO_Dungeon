//
// Created by honza on 09.12.2024.
//

#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H
#include "Monster.h"


//abstrakni tovarna
class MonsterFactory {

public:

    MonsterFactory();

    virtual ~MonsterFactory() = default;

    virtual Monster* createMonster() = 0;


};



#endif //MONSTERFACTORY_H
