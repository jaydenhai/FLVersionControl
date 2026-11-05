//
// Created by owner on 11/5/2026.
//

#ifndef FLVERSIONCONTROL_REPOSITORY_H
#define FLVERSIONCONTROL_REPOSITORY_H

#pragma once

#include <string>
#include <filesystem>

class Repository {
private:
    std::filesystem::path projectPath;
    std::filesystem::path repoPath;

public:
    explicit Repository(const std::string& path);

    bool init();
    bool commit(const std::string& message);
    void history() const;
    bool restore(const std::string& commitId);
};


#endif //FLVERSIONCONTROL_REPOSITORY_H
