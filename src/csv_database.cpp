#include "csv_database.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::string CSVDatabase::trim(const std::string& text) {
    size_t start = text.find_first_not_of(" \t\r\n");
    size_t end = text.find_last_not_of(" \t\r\n");

    if (start == std::string::npos) {
        return "";
    }

    return text.substr(start, end - start + 1);
}

std::vector<std::string> CSVDatabase::split(const std::string& line, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(line);
    std::string item;

    while (std::getline(ss, item, delimiter)) {
        result.push_back(trim(item));
    }

    return result;
}

bool CSVDatabase::loadCSV(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << "Error: Cannot open CSV file." << std::endl;
        return false;
    }

    std::string line;

    // Read header
    if (std::getline(file, line)) {
        columns = split(line, ',');
    }

    // Read rows
    while (std::getline(file, line)) {
        std::vector<std::string> values = split(line, ',');
        std::map<std::string, std::string> row;

        for (size_t i = 0; i < columns.size() && i < values.size(); i++) {
            row[columns[i]] = values[i];
        }

        rows.push_back(row);
    }

    file.close();

    std::cout << "CSV loaded. Rows: " << rows.size() << std::endl;
    return true;
}

void CSVDatabase::executeQuery(const std::string& query) {
    std::cout << "Query execution will be implemented in the next tasks." << std::endl;
}