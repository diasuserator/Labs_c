#include <iostream>
#include <fstream>
#include <string>
std::string S = "";
void inputString() {
    std::cout << "Введите строку: ";
    std::cin.ignore();
    std::getline(std::cin, S);
}
void outputString() {
    std::cout << "Текущая строка: " << S << std::endl;
}
void encryptString() {
    for (char& c : S) {
        if (c >= 'А' && c <= 'Я') {
            c = 'A' + (c - 'А');
        }
    }
    std::cout << "Строка успешно зашифрована." << std::endl;
}
void decryptString() {
    for (char& c : S) {
        if (c >= 'A' && c <= 'Z') {
            c = 'А' + (c - 'A');
        }
    }
    std::cout << "Строка успешно расшифрована." << std::endl;
}
void writeToFile() {
    std::string fileName;
    std::cout << "Введите имя файла для записи: ";
    std::cin.ignore();
    std::getline(std::cin, fileName);

    std::ofstream file(fileName);
    if (file.is_open()) {
        file << S;
        file.close();
        std::cout << "Файл успешно сохранен." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла." << std::endl;
    }
}
void readFromFile() {
    std::string fileName;
    std::cout << "Введите имя файла для чтения: ";
    std::cin.ignore();
    std::getline(std::cin, fileName);

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::getline(file, S);
        file.close();
        std::cout << "Файл успешно прочитан." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла." << std::endl;
    }
}
int main() {
    int choice;

    while (true) {
        std::cout << "Меню:" << std::endl;
        std::cout << "(1) Ввод строки с клавиатуры" << std::endl;
        std::cout << "(2) Вывод строки на экран" << std::endl;
        std::cout << "(3) Зашифровать строку" << std::endl;
        std::cout << "(4) Расшифровать строку" << std::endl;
        std::cout << "(5) Записать строку в текстовый файл" << std::endl;
        std::cout << "(6) Считать строку из текстового файла" << std::endl;
        std::cout << "(0) Завершить работу" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inputString();
            break;
        case 2:
            outputString();
            break;
        case 3:
            encryptString();
            break;
        case 4:
            decryptString();
            break;
        case 5:
            writeToFile();
            break;
        case 6:
            readFromFile();
            break;
        case 0:
            std::cout << "Сеанс окончен!" << std::endl;
            return 0;
        default:
            std::cout << "Команда неизвестна." << std::endl;
            break;
        }

        std::cout << std::endl;
    }
}