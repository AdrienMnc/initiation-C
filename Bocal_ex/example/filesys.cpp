#include <iostream>
#include <filesystem>

int main()
{
    std::filesystem::path path_dir = "/chemin/vers/le/repertoire";
    std::filesystem::path source;

    // permet de verifier tout un dossier
    for (const auto& entry : std::filesystem::directory_iterator(path_dir)){
        if (entry.is_regular_file()) // Vérifie que c'est un fichier
        {
            std::cout << entry.path().filename() << '\n';
            source  =  std::filesystem::absolute(entry.path());
        }
    }

    std::string dest = "/chemin/vers/le/fichier/destination";
    std::filesystem::copy(source, dest);

    std::filesystem::perms p = std::filesystem::perms::owner_read | std::filesystem::perms::owner_write;
    std::filesystem::permissions(dest, p);
    std::filesystem::remove(source);

    return 0;
}
