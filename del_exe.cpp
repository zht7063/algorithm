#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main()
{
    try
    {
        fs::path current_dir = fs::current_path(); // current directory
        std::cout << "Scanning directory: " << current_dir << std::endl;

        // Recursively iterate through directories
        for (auto &entry : fs::recursive_directory_iterator(current_dir))
        {
            if (entry.is_regular_file() && entry.path().extension() == ".exe")
            {
                try
                {
                    std::cout << "Deleting: " << entry.path() << std::endl;
                    fs::remove(entry.path()); // delete file
                }
                catch (const fs::filesystem_error &e)
                {
                    std::cerr << "Failed to delete " << entry.path()
                              << ": " << e.what() << std::endl;
                }
            }
        }

        std::cout << "Cleanup finished." << std::endl;
    }
    catch (const fs::filesystem_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
