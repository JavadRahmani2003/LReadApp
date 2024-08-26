#include <fstream>
#include <filesystem>

using namespace std;

namespace file
{
	string FName = "File";
	string FExtension = ".bin";

	string msg;

	ofstream Writer;

	void FileCreate(); // creates the file with txt extension

	void IsFileFound();// if file name wasn't currect
}