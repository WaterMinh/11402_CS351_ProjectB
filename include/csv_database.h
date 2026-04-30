#ifndef CSV_DATABASE_H
#define CSV_DATABASE_H

#include <string>
#include <vector>
#include <map>

class CSVDatabase {
private:
    std::vector<std::string> columns;
    std::vector<std::map<std::string, std::string>> rows;

    std::string trim(const std::string& text);
    std::vector<std::string> split(const std::string& line, char delimiter);

public:
    bool loadCSV(const std::string& filename);
    void executeQuery(const std::string& query);
};

#endif