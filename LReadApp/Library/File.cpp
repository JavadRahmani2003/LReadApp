#include "File.h"

using namespace file;

void file::FileCreate()
{
	Writer.open(FName + FExtension);
}

void file::IsFileFound()
{
	for (const auto& entry : filesystem::directory_iterator(FName))
	{
		if (entry.is_regular_file() && entry.path().extension() == FExtension)
		{
			msg = "File Found";
		}
		else
		{
			msg = "file not found.";
		}
	}
}
