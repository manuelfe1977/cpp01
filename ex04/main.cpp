#include <fstream>
#include <iostream>

std::string ft_replace(const std::string &line, const std::string s1, const std::string s2)
{
	int				pos = -1;
	int				n_pos = 0;
	int				exit = 0;
	unsigned long	init = 0;
	std::string		result;

	if (s1.length() > 0)
	{
		while (n_pos >= exit)
		{
			pos = line.find(s1, init);
			if (pos >= 0)
			{
				result.append(line.substr(init, pos - init));
				result.append(s2);
				init = pos + s1.length();
			}
			exit = init;
			n_pos = line.find(s1,init);
		}
	}
	result.append(line.substr(init, line.length() - init));
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "El número de argumentos necesario es tres." << std::endl;
	}
	else
	{
		std::fstream file;
		file.open(argv[1], std::ios::in);
		if (file.fail())
			std::cout << "No es posible abrir el archivo " << argv[1] << std::endl;
		else
		{
			std::string nuevo = argv[1];
			nuevo += ".replace";
			std::fstream newFile;
			newFile.open(nuevo.c_str(), std::ios::out);
			if (newFile.fail())
			{
				std::cout << "No es posible crear el archivo " << nuevo << std::endl;
				file.close();
			}
			else
			{
				std::string line;
				while (getline(file, line))
					newFile << ft_replace(line, argv[2], argv[3]) << std::endl;
				file.close();
				newFile.close();
			}
		}
	}
	return (0);
}
