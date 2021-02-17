/***
 * KP Utils
 */
#include <numeric>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "utilities.h"
#include "stdlib.h"

using namespace std;

//********************** private to this compilation unit **********************

vector<process_stats> specs;

/**
 * Compares process stats by process number
 * true if one.process_number < two.process_number
 * false otherwise
 */
bool sortProcessNumber(process_stats &one, process_stats &two){
	return one.process_number < two.process_number;
}

/**
 * Compares process stats by start time
 * true if one.start_time < two.start_time
 * false otherwise
 */
bool sortStartTime(process_stats &one, process_stats &two){
	return one.start_time < two.start_time;
}

/**
 * Compares process stats by cpu time
 * true if one.cpu_time < two.cpu_time
 * false otherwise
 */
bool sortCpuTime(process_stats &one, process_stats &two){
	return one.cpu_time < two.cpu_time;
}

/**
 * Compares process stats by io time
 * true if one.io_time < two.io_time
 * false otherwise
 */
bool sortIoTime(process_stats &one, process_stats &two){
	return one.io_time < two.io_time;
}

//if myString does not contain a string rep of number returns o
//if int not large enough has undefined behaviour, very fragile
int stringToInt(const char *myString) {
	return atoi(myString);
}

/**
 * Clears specs
 * attempt to open file "filename" and parse its rows
 * into process_stats structs and add these structs to specs
 *
 * if ignoreFirstRow == true: ignore first row
 *
 * returns SUCCESS for successful run
 * return COULD_NOT_OPEN_FILE for failure
 */
int loadData(const char* filename, bool ignoreFirstRow) {

	return SUCCESS;
}


//will sort according to user preference using the above sort methods
void sortData(SORT_ORDER mySortOrder) {

}

process_stats getNext() {
	process_stats myFirst;

	return myFirst;
}

//returns number of process_stats structs in the vector holding them
int getNumbRows(){
	return specs.size();
}


