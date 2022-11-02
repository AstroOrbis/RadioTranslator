#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
	std::map<std::string, std::string> options;
	options.insert(std::make_pair("a", "al-FAH"));
	options.insert(std::make_pair("b", "BRAH-voh"));
	options.insert(std::make_pair("c", "CHAR-lee"));
	options.insert(std::make_pair("d", "DEL-tah"));
	options.insert(std::make_pair("e", "ECK-oh"));
	options.insert(std::make_pair("f", "FOKS-trot"));
	options.insert(std::make_pair("g", "GOLF"));
	options.insert(std::make_pair("h", "hoh-TELL"));
	options.insert(std::make_pair("i", "IN-dee-ah"));
	options.insert(std::make_pair("j", "JEW-lee-ett"));
	options.insert(std::make_pair("k", "KEY-loh"));
	options.insert(std::make_pair("l", "LEE-mah"));
	options.insert(std::make_pair("m", "MIKE"));
	options.insert(std::make_pair("n", "no-VEM-ber"));
	options.insert(std::make_pair("o", "OSS-cah"));
	options.insert(std::make_pair("p", "pah-PAH"));
	options.insert(std::make_pair("q", "keh-BECK"));
	options.insert(std::make_pair("r", "ROW-me-oh"));
	options.insert(std::make_pair("s", "see-AIR-rah"));
	options.insert(std::make_pair("t", "TANG-go"));
	options.insert(std::make_pair("u", "YOU-nee-form"));
	options.insert(std::make_pair("v", "VIK-tah"));
	options.insert(std::make_pair("w", "WISS-key"));
	options.insert(std::make_pair("x", "ECKS-ray"));
	options.insert(std::make_pair("y", "YANG-key"));
	options.insert(std::make_pair("z", "ZOO-loo"));
	options.insert(std::make_pair("0", "ZEH-RO"));
	options.insert(std::make_pair("1", "WUN"));
	options.insert(std::make_pair("2", "TOO"));
	options.insert(std::make_pair("3", "TREE"));
	options.insert(std::make_pair("4", "FOW-ER"));
	options.insert(std::make_pair("5", "FIFE"));
	options.insert(std::make_pair("6", "SIX"));
	options.insert(std::make_pair("7", "SEV-UHN"));
	options.insert(std::make_pair("8", "AIT"));
	options.insert(std::make_pair("9", "NINE-ER"));
	options.insert(std::make_pair(" ", " "));
	options.insert(std::make_pair("@", "AT-SIGN"));
	options.insert(std::make_pair(".", "."));
	options.insert(std::make_pair(",", ","));

	std::string input;
	std::cout << "Enter input: ";
	std::getline(std::cin, input);
	std::cout << "\n\n";


	for (int i = 0; i < input.length(); i++) {
		input[i] = tolower(input[i]);
	}

	std::vector<std::string> words;
	std::string word;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' ') {
			words.push_back(word);
			word = "";
		}
		else {
			word += input[i];
		}
	}

	words.push_back(word);

	std::vector<std::string> translatedWords;
	for (int i = 0; i < words.size(); i++) {
		std::string translatedWord;
		for (int j = 0; j < words[i].length(); j++) {
			translatedWord += options[std::string(1, words[i][j])] + " ";
		}
		translatedWords.push_back(translatedWord);
	}

	for (int i = 0; i < translatedWords.size(); i++) {
		translatedWords[i][0] = toupper(translatedWords[i][0]);
	}

	for (int i = 0; i < translatedWords.size(); i++) {
		std::cout << translatedWords[i] << "\n" << std::endl;
	}
}
