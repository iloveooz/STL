	#include <iostream>
	#include <string>
	#include <map>

	int main()
	  {
		std::string cmd, name, phone;
		std::map< std::string, std::string > book;

		while( std::cin >> cmd )
		  {
			if ( cmd == "add" )
			  {
				std::cin >> name >> phone;
				book[ name ] = phone;
				std::cout << "Added" << std::endl;
			  }
			else if ( cmd == "find" )
			  {
				std::cin >> name;
				try {
				  std::string v = book.at( name );
				  std::cout << name << "'s phone is " << v << std::endl;
				}
				catch (const std::out_of_range& e) {
				  std::cout << name << " not found" << std::endl;
				}
			  }
			else if ( cmd == "del" )
			  {
				std::cin >> name;
				book.erase( name );
				std::cout << "Deleted" << std::endl;
			  }
			else if ( cmd == "view" )
			  {
				for( auto& kv : book )
				  std::cout << kv.first << "\t " << kv.second << std::endl;
			  }
			else if ( cmd == "quit" )
			  return 0;
			else
			  std::cerr << "Bad command '" << cmd << "'" << std::endl;
		}

		return 0;
	  }
