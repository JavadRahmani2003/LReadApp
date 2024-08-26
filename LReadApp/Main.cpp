#include "Main.h"

void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void ArrowKeys(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void FileMake()
{
	system("cls");
	FileCreate();


	
	system("pause");
}

void FileLoad()
{
	system("cls");


	system("pause");
}

void FileEdit()
{
	system("cls");


	system("pause");
}

void FileInfo()
{
	system("cls");


	system("pause");
}

void Credit()
{
	system("cls");


	system("pause");
}
void Quit()
{
	system("cls");


	system("pause");
}

int main()
{
	cout << "################################################################################\n";
	cout << "################################################################################";
	cout << "\n";
	cout << "Wellcome to LReadApp program text manager.";
	cout << "\n\n";
	cout << "Menu: \n\n";
	cout << "1- make a file: \n";
	cout << "2- open the file: \n";
	cout << "3- edit the file: \n";
	cout << "4- get info of file: \n";
	cout << "5- credit of application: \n";
	cout << "6- Quit the app: \n";
	cout << "\n\n";
	cout << "\t\t\t\tSelect a number: ";
	NumberSelection = _getch();
	cout << "\n\n";
	cout << "################################################################################\n";
	cout << "################################################################################";

	switch (NumberSelection)
	{
	case 49: // 1
		FileMake();
		break;
	case 50: // 2
		FileLoad();
		break;
	case 51: // 3
		FileEdit();
		break;
	case 52: // 4
		FileInfo();
		break;
	case 53: // 5
		Credit();
		break;
	case 54: // 6
		Quit();
		break;
	}

	system("pause");
}
