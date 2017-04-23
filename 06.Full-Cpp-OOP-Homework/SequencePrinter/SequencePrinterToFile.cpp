#include "SequencePrinterToFile.h"

#include <fstream>

SequencePrinterToFile::SequencePrinterToFile(std::string file)
	:file(file)
{
}

void SequencePrinterToFile::Print(void)
{
	std::ofstream fileStream;

	fileStream.open(this->file);

	if (fileStream.is_open( ))
	{
		fileStream << this->sequence->ToString( );
	}

	fileStream.close( );
}
