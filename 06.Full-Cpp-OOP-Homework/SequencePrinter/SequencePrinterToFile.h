#ifndef SEQUENCE_PRINTER_TO_FILE_H
#define SEQUENCE_PRINTER_TO_FILE_H

#include "SequencePrinterBase.h"

class SequencePrinterToFile : public SequencePrinterBase
{
public:
	SequencePrinterToFile(std::string file);

	virtual void Print(void);
private:
	std::string file;
};
#endif // !SEQUENCE_PRINTER_TO_FILE_H