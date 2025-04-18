// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

int main()
{
    Text txt;
    txt.render("Original text");
    std::cout << '\n';

    BoldText bText(&txt);
    bText.render("Bold text");
    std::cout << '\n';

    ItalicText iText(&txt);
    iText.render("Italic text");
    std::cout << '\n';

    Paragraph pText(&txt);
    pText.render("Paragraph text");
    std::cout << '\n';

    Reversed reversedText(&txt);
    reversedText.render("Reversed text");
    std::cout << '\n';

    Link lText(&txt);
    lText.render("netology.ru", "link");
    std::cout << '\n';

    Paragraph p2(&bText);
    p2.render("Some text");
    std::cout << '\n';

    return EXIT_SUCCESS;
}

