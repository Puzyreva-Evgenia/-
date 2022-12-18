#include "structures.h"
#include<iostream>
int main() {
	Struct1 struct1;
	struct1.SetName("Struct1");
	struct1.SetID(1);

	Struct3 struct3;
	struct3.SetName("Struct3");
	struct3.SetID(3);

	struct1.SetStruct2("Struct2", 2, struct3);
	std::cout << struct1.GetStruct2().GetStruct3().GetID();
}
