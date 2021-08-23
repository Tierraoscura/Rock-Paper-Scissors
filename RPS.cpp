//This program will have you play rock, paper, scissors with the computer will you win? play to find out! In the comment below you will see how the program is made.

#include <iostream>
#include <stdlib.h>

int main() {

    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";

    std::cout << "shoot! ";
    std::cin >> user;

    if (user == 1)
        std::cout << "you choose: Rock\n";
    else if (user == 2)
        std::cout << "you choose: Paper\n";
    else
        std::cout << "you choose: Scissors\n";

    if (computer == 1)
        std::cout << "cpu choose: Rock\n";
    else if (computer == 2)
        std::cout << "cpu choose: Paper\n";
    else
        std::cout << "cpu choose: Scissors\n";

    if (user == computer) {

        std::cout << "it's a tie!\n";

    }

    // user rock

    else if (user == 1) {

        if (computer == 2) {

            std::cout << "you lost get wrecked!\n";

        }
        if (computer == 3) {

            std::cout << "you won now ready to go pro?\n";

        }

    }

    // user paper

    else if (user == 2) {

        if (computer == 1) {

            std::cout << "you won ready for round 2?\n";

        }
        if (computer == 3) {

            std::cout << "you lost get s*#$ on!\n";

        }

    }

    // user scissors

    else if (user == 3) {

        if (computer == 1) {

            std::cout << "you won nice.\n";

        }
        if (computer == 2) {

            std::cout << "you lost youre bad at games!\n";

        }

    }

    return 0;

}
