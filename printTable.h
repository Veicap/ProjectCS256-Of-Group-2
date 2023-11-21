#ifndef __PRINTABLE_H__
#define __PRINTABLE_H__
#include <iostream>
#include <iomanip>
#include <string>

const char corner_char = '+';
const char row_char = '-';
const char column_char = '|';
const int group_width = 9;
const int nameofStudent_width = 18;
const int project_width = 20;
const std::string group = "Group";
const std::string studentName = "Student's name";


void printBorderOfTableProject() {
	std::cout << "\t"
		<< std::left << std::setfill(row_char)
		<< std::setw(group_width) << corner_char
		<< std::setw(nameofStudent_width) << corner_char;

}
void printBorderOfTableProject(int numberOfProject) {
	for (int i = 0; i < numberOfProject; i++) {
		std::cout << std::setw(project_width) << corner_char;
	}

}
void printBorderDownLine() {
	std::cout << corner_char << "\n";
}
void printTopicOfTableProject() {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< column_char << std::setw(group_width - 1) << group
		<< column_char << std::setw(nameofStudent_width - 1) << studentName;

}
void printTopicOfTableProject(std::string nameOfProject, int numberOfGroup) {

	std::cout << column_char << std::setw(project_width - 1) << nameOfProject;

}
void printRowOfTableProject(int order, std::string nameOfStudent) {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< column_char << std::setw(group_width - 1) << order
		<< column_char << std::setw(nameofStudent_width - 1) << nameOfStudent;

}
void printRowOfTableProject(std::string statement, int numberOfGroup) {
	std::cout << column_char << std::setw(project_width - 1) << statement;
}
void printRowOfTableProject(std::string nameOfStudent) {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< std::setw(group_width) << column_char
		<< column_char << std::setw(nameofStudent_width - 1) << nameOfStudent;

}
void printRowOfTableProject(int numberOfGroup) {
	std::cout << std::setw(project_width) << column_char;
}
void printColumnDownLine() {
	std::cout << column_char << "\n";
}
// Table of Group
void printRowOfTableGroup(std::string nameOfStudent) {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< std::setw(group_width) << column_char
		<< column_char << std::setw(nameofStudent_width - 1) << nameOfStudent
		<< column_char << "\n";
}

void printRowOfTableGroup(int order, std::string nameOfStudent) {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< column_char << std::setw(group_width - 1) << order
		<< column_char << std::setw(nameofStudent_width - 1) << nameOfStudent << column_char << "\n";
}
void printTopicOfTableGroup() {
	std::cout << "\t"
		<< std::left << std::setfill(' ')
		<< column_char << std::setw(group_width - 1) << group
		<< column_char << std::setw(nameofStudent_width - 1) << studentName << column_char << "\n";
}
void printBorderOfTableGroup() {
	std::cout << "\t"
		<< std::left << std::setfill(row_char)
		<< std::setw(group_width) << corner_char
		<< std::setw(nameofStudent_width) << corner_char << corner_char << "\n";
}


#endif // !__PRINTABLE_H__


