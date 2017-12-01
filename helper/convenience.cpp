
#include <string>
#include <iostream>
#include <math.h>

using namespace std;


int parseByteString(string byteString){
	string suffixes [4] = {"b", "kb", "mb", "gb"};
	int size [4] = {1, 1024, (int)pow(1024, 2), (int)pow(1024, 3)};

	for(string suffix : suffixes){
		int position = byteString.find(suffix);
		string test = byteString.replace(position, position+suffix.length(), suffix);
	}

	return 0;
}
