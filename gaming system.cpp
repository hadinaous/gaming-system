#include <iostream>
#include <string>
using namespace std;
	std::string username;
	std::string password;
	std::string username_input;
	std::string password_input;
void authorization()
{
	do
	{
		cout << "login";
		cout << "Enter your username: ";
		std::cin >> username_input;
		cout << "enter your password: ";
		std::cin >> password_input;
	} while (username_input != username && password_input != password);
	cout << "wellcome!\n";
}
	void authentication()
	{
		do
		{
			cout << "regestration\n";
			cout << "Enter your username: ";
			std::cin >> username;
			cout << "enter your password: ";
			std::cin >> password;
		} while (username == "" && password == "");
		cout << "done!\n";
		authorization();
		
	}
void main()
{
	authentication();
	system("pause");
}