#include <stdio.h>
#include <string.h>

int main() {   //we will create a struct of name table tht will have  columns and rows as its datamembers . 
    char *table_names[] = {"table1", "table2", "table3"}; // List of table names
    int num_tables = sizeof(table_names) / sizeof(table_names[0]); // Number of tables

    // Loop through each table
    for (int i = 0; i < num_tables; i++) {
        printf("Table: %s\n", table_names[i]);

        // Hardcoded matrix data for the table
        char matrix[3][3][10] = {
            {{"id"}, {"name"}, {"marks"}},
            {{"1"}, {"om"}, {"87"}},
            {{"2"}, {"atharv"}, {"64"}}
        };

        // Print the matrix data
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%s ", matrix[j][k]);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

