#include <iostream>
#include <fstream>
#include <string>
std::string S = "";
void inputString() {
    std::cout << "������� ������: ";
    std::cin.ignore();
    std::getline(std::cin, S);
}
void outputString() {
    std::cout << "������� ������: " << S << std::endl;
}
void encryptString() {
    for (char& c : S) {
        if (c >= '�' && c <= '�') {
            c = 'A' + (c - '�');
        }
    }
    std::cout << "������ ������� �����������." << std::endl;
}
void decryptString() {
    for (char& c : S) {
        if (c >= 'A' && c <= 'Z') {
            c = '�' + (c - 'A');
        }
    }
    std::cout << "������ ������� ������������." << std::endl;
}
void writeToFile() {
    std::string fileName;
    std::cout << "������� ��� ����� ��� ������: ";
    std::cin.ignore();
    std::getline(std::cin, fileName);

    std::ofstream file(fileName);
    if (file.is_open()) {
        file << S;
        file.close();
        std::cout << "���� ������� ��������." << std::endl;
    }
    else {
        std::cout << "������ �������� �����." << std::endl;
    }
}
void readFromFile() {
    std::string fileName;
    std::cout << "������� ��� ����� ��� ������: ";
    std::cin.ignore();
    std::getline(std::cin, fileName);

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::getline(file, S);
        file.close();
        std::cout << "���� ������� ��������." << std::endl;
    }
    else {
        std::cout << "������ �������� �����." << std::endl;
    }
}
int main() {
    int choice;

    while (true) {
        std::cout << "����:" << std::endl;
        std::cout << "(1) ���� ������ � ����������" << std::endl;
        std::cout << "(2) ����� ������ �� �����" << std::endl;
        std::cout << "(3) ����������� ������" << std::endl;
        std::cout << "(4) ������������ ������" << std::endl;
        std::cout << "(5) �������� ������ � ��������� ����" << std::endl;
        std::cout << "(6) ������� ������ �� ���������� �����" << std::endl;
        std::cout << "(0) ��������� ������" << std::endl;
        std::cout << "�������� ��������: ";
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
            std::cout << "����� �������!" << std::endl;
            return 0;
        default:
            std::cout << "������� ����������." << std::endl;
            break;
        }

        std::cout << std::endl;
    }
}