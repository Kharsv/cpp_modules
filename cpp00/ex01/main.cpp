#include <iostream>
#include <iomanip>

#define BOOK_SIZE 8
#define TABLE_SIZE 10

class Contact {
		public:
		Contact() {
			printable = false;
		}

		public:

		void Update() {
			std::cout << "--- New contact ---" << std::endl;
			std::cout << "Enter \"First name\": ";
			std::cin >> firstName;
			std::cout << "Enter \"Last name\": ";
			std::cin >> lastName;
			std::cout << "Enter \"Nickname\": ";
			std::cin >> nickName;
			std::cout << "Enter \"Phone number\": ";
			std::cin >> phoneNumber;
			std::cout << "Enter \"Darkest secret\": ";
			std::cin >> darkestSecret;
			printable = true;
		}

		void PrintInfo() const {
			if (printable) {
				std::cout << "First name = " << firstName << std::endl;
				std::cout << "Last name = " << lastName << std::endl;
				std::cout << "Nickname = " << nickName << std::endl;
				std::cout << "Phone number = " << phoneNumber << std::endl;
				std::cout << "Darkest secret = " << darkestSecret << std::endl;
			} else {
				std::cout << "ERROR: Contact not found" << std::endl;
			}
		}

		void PrintTable(int index) const {
			if (printable) {
				std::cout << '|';
				std::cout << std::right << std::setw(TABLE_SIZE) << std::setfill(' ') << index << '|';
				std::cout << std::right << std::setw(TABLE_SIZE) << std::setfill(' ') << GetFormat(firstName) << '|';
				std::cout << std::right << std::setw(TABLE_SIZE) << std::setfill(' ') << GetFormat(lastName) << '|';
				std::cout << std::right << std::setw(TABLE_SIZE) << std::setfill(' ') << GetFormat(nickName) << '|';
				std::cout << std::endl;
			}
		}

		private:
		bool printable;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		static std::string GetFormat(const std::string &string) {
			if (string.size() > TABLE_SIZE) {
				std::string tmp = string.substr(0, TABLE_SIZE);
				tmp[TABLE_SIZE - 1] = '.';
				return tmp;
			}
			return string;
		}
};

class PhoneBook {

		public:

		PhoneBook() {
			id = -1;
		}

		public:
		void Add() {
			contacts[GetNextId()].Update();
		}

		void Search() {
			std::cout << "--- Contact list ---" << std::endl;

			for (int i = 0; i < BOOK_SIZE; i++) {
				contacts[i].PrintTable(i + 1);
			}

			std::cout << "Choose index: ";
			int index = 0;
			if (!(std::cin >> index)) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "ERROR: Bad index format" << std::endl;
			} else if (index < 1 || index > BOOK_SIZE) {
				std::cout << "ERROR: Index out of scope" << std::endl;
			} else {
				contacts[index - 1].PrintInfo();
			}
		}

		private:
		Contact contacts[BOOK_SIZE];
		int id;

		int GetNextId() {
			id++;
			if (id == BOOK_SIZE)
				id = 0;
			return id;
		}
};

int main() {
	PhoneBook phoneBook;
	std::string str;

	while (true) {
		std::cout << "Enter command:  ";
		std::cin >> str;

		if (str == "ADD") {
			phoneBook.Add();
		} else if (str == "SEARCH") {
			phoneBook.Search();
		} else if (str == "EXIT") {
			return 0;
		} else {
			std::cout << "ERROR: Command not found" << std::endl;
		}
	}
}
