#include "one_rm_calc.h"
#include <unistd.h>

static void PrintUsage(const char *progName){
    printf("Usage: %s [-h] [ -w weight] [ -r reps] \n"
           "\t-h: Display this help info.\n"
           "\t-w: Set weight lifted\n"
		   "\t-r: Set number of reps\n"
           , progName);
}

int main(int argc, char *argv[]){
    int weight = 0, reps = 0;
    char ch = 0;
    
    if (argc < 5){
        printf("Options are missing, argc: %d should be 5\n", argc);
        PrintUsage(argv[0]);
        return -1;
    }

    while ((ch = getopt(argc, argv, "w:r:h")) != -1) {
        switch(ch) {
            case 'w':
                weight = atoi(optarg);
                break;
				
			case 'r':
				reps = atoi(optarg);
				break;
				
            case 'h':
			default: 
                PrintUsage(argv[0]);
                return 0;			
        }
    }

    OneRMCalc * m_calc = new OneRMCalc(reps, weight);

    printf("1RM via Brzycki formula: %d\n", (int)m_calc->calcBryzcki());
    printf("1RM via Epley formula: %d\n", (int)m_calc->calcEpley());
    printf("1RM via Lander formula: %d\n", (int)m_calc->calcLander());
    printf("1RM via Lombardi formula: %d\n", (int)m_calc->calcLombardi());
    printf("1RM via Mayhew formula: %d\n", (int)m_calc->calcMayhew());
    printf("1RM via O'Connor formula: %d\n", (int)m_calc->calcOConner());
    printf("1RM via Wathan formula: %d\n", (int)m_calc->calcWathan());

    //Cleanup
    delete m_calc;
    return 0;
}