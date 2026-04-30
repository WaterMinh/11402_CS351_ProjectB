#include "csv_database.h"
#include <iostream>
#include <string>

int main() {
    CSVDatabase db;

    if (!db.loadCSV("data/students.csv")) {
        return 1;
    }

    std::string query;

    while (true) {
        std::cout << "SQL> ";
        std::getline(std::cin, query);

        if (query == "exit") {
            break;
        }

        db.executeQuery(query);
    }

    return 0;
}