#include<stdio.h>
#include<string.h>

/*
┌───┬───────┬───┐
│ A │ B   B │ C │
│   │       │   │
│ A │ B   B │ C │
├───┼───────┼───┤
│ D │ E   E │ F │
├───┼───┬───┼───┤
│ G │ H │ I │ J │
│   ├───┴───┤   │
│ G │       │ J │
└───┴───────┴───┘

+---+-------+---+
| A | B   B | C |
|               |
| A | B   B | C |
+---+-------+---+
| D | E   E | F |
+---+-------+---+
| G | H | I | J |
|   +---+---+   |
| G |       | J |
+---+-------+---+

*/

int main() {

	char matriz[5][4]={{'A','B','B','C'},{'A','B','B','C'},{'D','E','E','F'},
			  {'G','H','I','J'},{'G',' ',' ','J'}};
	
	printf(" ------------\n");
	for (int i=0;i<5;i++){ //filas
		printf("|");
		for(int j=0;j<4;j++){ //columnas
			//matriz[i][j]=0;
			printf("%2c ", matriz[i][j]); //me entrega la matriz ordenada
		}	
		printf("|\n");	
	}
	printf(" ------------\n");
	
	return 0;
}


































