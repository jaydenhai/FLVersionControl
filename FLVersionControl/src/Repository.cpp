
#include "Repository.h"
#include <iostream>

namespace fs = std::filesystem;

Repository::Repository(const std::string& path)
    : projectPath(path),
      repoPath(projectPath / ".flvc") {}

bool Repository::init() {
    if (!fs::is_directory(projectPath)) {
        std::cout << "Invalid project directory\n";
        return false;
    }

    if (fs::exists(repoPath)) {
        std::cout << "Repository already exists\n";
        return false;
    }

    fs::create_directories(repoPath / "commits");

    std::cout << "Repository initialized\n";
    return true;
}
