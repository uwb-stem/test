/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MEMSIZE 80

void carryOutLine (char* line, char* list) {
    
    //printf("first letter is -> %c\n", line[0]);
    
    switch(line[0]) {
        case 'A' :
            //printf("Allocate\n" );
            break;
        case 'F' :
            //printf("Free\n" );
            break;
        case 'S' :
            //printf("Show\n" );
            break;
        case 'R' :
            //printf("Read\n" );
            break;
        case 'C' :
            //printf("Compact\n" );
            break;
        case 'E' :
            //printf("Exit\n" );
            break;
        default :
            //printf("Invalid input.\n" );
    }
    
    list[5] = 'A';
    
}

int main(int argc, char* argv[]) {
    
    char memList[MEMSIZE]; 
    
    for (int i = 0 ; i < MEMSIZE ; i++) {
        memList[i] = '.'; 
    }
    
    printf("Hello World, here is a number: %d\n", MEMSIZE);
    printf("what is going on here -> %s\n", memList);
    
    //memList[5] = 'A';
    
    
    
    //source: https://stackoverflow.com/questions/9206091/going-through-a-text-file-line-by-line-in-c
    
    char const* const fileName = argv[1]; /* should check that argc > 1 */
    FILE* file = fopen(fileName, "r"); /* should check the result */
    char line[256];

    while (fgets(line, sizeof(line), file)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
        
        //send line to function, complete the commands
        carryOutLine(line, memList);
        //printf("%s\n", line); 
        printf("what is going on here -> %s\n", memList);
    }
    /* may check feof here to make a difference between eof and io failure -- network
       timeout for instance */

    fclose(file);
    
    //printf("what is going on here -> %s\n", memList);
    
    return 0;
}
