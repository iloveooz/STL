	#include <iostream>
	#include <map>
	#include <string>

	void foo(std::map<std::string, std::string> myMap = {})
	{
		for(auto it = std::begin(myMap); it != std::end(myMap); ++it)
			std::cout << it->first << " : " << it->second << '\n';
	}

	int main(int, char*[])
	{
		const std::map<std::string, std::string> animalKids = {
			{ "antelope", "calf" }, { "ant", "antling" },
			{ "baboon", "infant" }, { "bear", "cub" },
			{ "bee", "larva" }, { "cat", "kitten" }
		};

		foo();
		foo(animalKids);

		return 0;
	}
