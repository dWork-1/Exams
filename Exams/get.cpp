#include "get.h"

get::get(string path)
{
	this->path = path;
	input.open(path);
	if (input.fail()) {
		status = false;
	}
}

void get::close_stream()
{
	if (!status) {
		return;
	}
	input.close();
}
