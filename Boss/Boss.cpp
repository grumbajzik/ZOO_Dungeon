//
// Created by honza on 24.01.2025.
//

#include "Boss.h"

#include "Boss1.h"

Boss::Boss() {
}

Boss *Boss::createBoss(int boss) {
    if(boss == 1) {
        return new Boss1();
    }
}


