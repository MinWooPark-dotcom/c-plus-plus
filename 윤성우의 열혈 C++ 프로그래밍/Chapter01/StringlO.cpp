#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "What's your favorite programming language? ";
    std::cin >> lang;

    std::cout << "My name is " << name << ".\n;";
    std::cout << "My favorite programming language is " << lang << "." << std::endl;
    return 0;
}

/*
What's your name?: ParkMinwoo
What's your favorite programming language? TypeScript
My name is ParkMinwoo.
;My favorite programming language is TypeScript.
*/