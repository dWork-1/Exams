#include "getInf.h"

getInf::getInf()
{
}

getInf::getInf(string path)
{
	input.open(path);
	if (input.fail()) {
		//������� ������ �� ���������� �����
	}

}

string getInf::get_exam()
{

	return string();
}
