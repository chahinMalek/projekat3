#include <iostream>
//#include "fileparser.h"
//#include "functions.h"
#include "project.h"
#include <string>
using namespace std;

int main() {
    ///URADITI MEDIJANU IZLAZA ZA UBRZAVANJE ALGORITMA TRAZENJA NAJKRACEG PUTA
    try {
        Maze maze("maze.txt");
//        maze.printPasses();
//        maze.printMaze();
        cout << maze.shortestDistance('A',4,'J', 8) << endl;
        cout << maze.shortestDistanceBFS('A',4,'J', 8) << endl;
//        cout << maze.distance({1,0},{2,0}) << endl;
    } catch(const char err[]) {

        cout << err << endl;
    }

    return 0;
}
