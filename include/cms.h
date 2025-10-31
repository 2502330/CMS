#ifndef CMS_H
#define CMS_H

#define NAME_LENGTH 255
#define PROGRAMME_LENGTH 255
#define ASCENDING 1
#define DESCENDING -1

typedef struct Student {
    unsigned int id;
    char name[NAME_LENGTH];
    char programme[PROGRAMME_LENGTH];
    float mark;
} Student;

// Global array to store all records
extern Student records[];
extern int recordCount;

// Database functions
void openDatabase(const char *filename);
void saveDatabase(const char *filename);

// CUD functions
void insertRecord();
void updateRecord();
void deleteRecord();

// Display functions
void queryRecord();
void showAllRecords();

// Sort functions
void sortById(const int order);
void sortByMark(const int order);

// Summary functions
void showSummary();
void showGradeDistribution();

// Help functions
void showCommands();

#endif