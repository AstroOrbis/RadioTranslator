#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
	std::map<std::string, std::string> options;
	options.insert(std::make_pair("a", "alpha"));
	options.insert(std::make_pair("b", "bravo"));
	options.insert(std::make_pair("c", "charlie"));
	options.insert(std::make_pair("d", "delta"));
	options.insert(std::make_pair("e", "echo"));
	options.insert(std::make_pair("f", "foxtrot"));
	options.insert(std::make_pair("g", "golf"));
	options.insert(std::make_pair("h", "hotel"));
	options.insert(std::make_pair("i", "india"));
	options.insert(std::make_pair("j", "juliet"));
	options.insert(std::make_pair("k", "kilo"));
	options.insert(std::make_pair("l", "lima"));
	options.insert(std::make_pair("m", "mike"));
	options.insert(std::make_pair("n", "november"));
	options.insert(std::make_pair("o", "oscar"));
	options.insert(std::make_pair("p", "papa"));
	options.insert(std::make_pair("q", "quebec"));
	options.insert(std::make_pair("r", "romeo"));
	options.insert(std::make_pair("s", "sierra"));
	options.insert(std::make_pair("t", "tango"));
	options.insert(std::make_pair("u", "uniform"));
	options.insert(std::make_pair("v", "victor"));
	options.insert(std::make_pair("w", "whiskey"));
	options.insert(std::make_pair("x", "xray"));
	options.insert(std::make_pair("y", "yankee"));
	options.insert(std::make_pair("z", "zulu"));
	options.insert(std::make_pair("0", "zero"));
	options.insert(std::make_pair("1", "one"));
	options.insert(std::make_pair("2", "two"));
	options.insert(std::make_pair("3", "three"));
	options.insert(std::make_pair("4", "four"));
	options.insert(std::make_pair("5", "five"));
	options.insert(std::make_pair("6", "six"));
	options.insert(std::make_pair("7", "seven"));
	options.insert(std::make_pair("8", "eight"));
	options.insert(std::make_pair("9", "nine"));
	options.insert(std::make_pair(" ", " "));

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