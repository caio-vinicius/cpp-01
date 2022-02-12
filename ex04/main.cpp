/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#define AMOUNT_OF_ARGUMENTS 3

#include <iostream>
#include <fstream>

std::string     *readEntireFile(std::ifstream &ifile) {
    std::string *content = new std::string;
    std::string line;
    while (std::getline (ifile, line)) {
        *content += line;
        if (!ifile.eof())
            *content += "\n";
    }
    return (content);
}

void            strReplace(std::string *str, std::string str1, std::string str2) {
    std::string before;
    std::string after;
    int position;

    position = str->find(str1);
    while (position >= 0) {
        before = str->substr(0, position);
        after = str->substr(position + str1.length(), str->length());
        *str = before + str2 + after;
        position = str->find(str1, position + str2.length());
    }
}

void            usage() {
    std::cout << \
        "Usage:" << "\n\n" << \
        "./sedisforlosers FILENAME STR1 STR2" << "\n\n" << \
        "Replace STR1 text to STR2 text in the file FILENAME." << "\n\n" << \
        "FILENAME\t" << "File in current directory." << "\n" << \
        "STR1\t\t" << "Replaced text." << "\n" << \
        "STR2\t\t" << "Replacement text." << \
    std::endl;
}

int             sed_is_for_losers(int argc, char **argv) {
    if (argc != AMOUNT_OF_ARGUMENTS + 1) {
        usage();
        return (0);
    }
    std::string filename;
    std::string str1; // search in file
    std::string str2; // replace when find the search string in file

    filename = argv[1], str1 = argv[2], str2 = argv[3];
    std::ofstream   ofile((filename + ".replace").c_str());
    std::ifstream   ifile(filename.c_str());
    std::string     *content;
    if (!ifile.is_open())
        std::cout << "Unable to open file `" << filename << "`." << std::endl;
    content = readEntireFile(ifile);
    strReplace(content, str1, str2);
    ofile << *content;
    delete content;
    ofile.close();
    ifile.close();
    return (1);
}

int             main(int argc, char **argv) {
    if (!sed_is_for_losers(argc, argv))
        return (1);
    return (0);
}
