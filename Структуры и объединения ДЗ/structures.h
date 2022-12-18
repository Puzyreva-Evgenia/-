#pragma once
#include <string>
struct Struct3
{
private:
	std::string name;
	int id;
public:
	std::string GetName() {
		return name;
	}
	void SetName(std::string newName) {
		name = newName;
	}
	int  GetID() {
		return id;
	}
	void SetID(int newID) {
		id = newID;
	}
};
struct Struct2
{
private:
	Struct3 struct3;
	std::string name;
	int id;
public:
	Struct3 GetStruct3() {
		return struct3;
	}
	void SetStruct3(std::string name, int id)
	{
		struct3.SetName(name);
		struct3.SetID(id);
	}
	std::string GetName() {
		return name;
	}
	void SetName(std::string newName) {
		name = newName;
	}
	int  GetID() {
		return id;
	}
	void SetID(int newID) {
		id = newID;
	}
};
struct Struct1
{
private:
	Struct2 struct2;
	std::string name;
	int id;
public:
	Struct2 GetStruct2() {
		return struct2;
	}
	void SetStruct2(std::string name, int id, Struct3 struct3)
	{
		struct2.SetName(name);
		struct2.SetID(id);
		struct2.SetStruct3(struct3.GetName(), struct3.GetID());
	}
	std::string GetName() {
		return name;
	}
	void SetName(std::string newName) {
		name = newName;
	}
	int  GetID() {
		return id;
	}
	void SetID(int newID) {
		id = newID;
	}
};

