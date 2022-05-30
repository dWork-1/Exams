#include "getInf.h"

getInf::getInf()
{
}

getInf::getInf(string path)
{
	input.open(path);
	if (input.fail()) {
		//Вывести ошибку об отсудствии файла
	}

}

string getInf::get_exam()
{

	return string();
}
