//
// Created by Admin on 11.12.2024.
//

#include "ExitButton.h"

ExitButton::ExitButton() {
}

void ExitButton::drawButton() {
    std:: cout << "Exit" << std::endl;
}

void ExitButton::execute() {
    exit(0); //vypnutí hry
}

int ExitButton::executeWithResult() {
    return 0;
}

