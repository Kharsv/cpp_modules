#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error" << std::endl;
		return (0);
	}

	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	size_t size = s1.size();

	std::ifstream fileToRead(file);
	if (fileToRead.is_open()) {
		std::ofstream fileToWrite(file + ".replace");
		if (fileToWrite.is_open()) {
			std::string line;
			size_t pos;
			while (std::getline(fileToRead, line)) {
				pos = line.find(s1, 0);
				if (pos != std::string::npos) {
					line.erase(pos, size);
					line.insert(pos, s2);
				}
				fileToWrite << line << std::endl;

			}
			fileToWrite.close();

		}
		fileToRead.close();
	}


	return (0);
}