//Eileen Hayes

#include<stdio.h>
#define fileName "madlib1.txt"
#define NUMROWS 100
#define STR_CAP 100

void ReadFile( FILE* file_pointer, char rows[][STR_CAP]);
int NumRows( FILE* file_pointer, char rows[][STR_CAP]);
void BlankWord( FILE*file_pointer, char rows[][STR_CAP]);
void displayword( FILE* file_pointer, char rows[][STR_CAP]);

	int main(){

	FILE* file_pointer;
	file_pointer = fopen(fileName, "r");
	
	if(file_pointer == NULL){
			printf("can not open file");
			return 0;
			}
	char rows[NUMROWS][STR_CAP];
	displayword(file_pointer, rows);
	
	

			
			
	return 0;
	}

//read file
	void ReadFile( FILE* file_pointer, char rows[][STR_CAP]){
		
		for(int i=0; i<NUMROWS; i++){
			fgets(rows[i], STR_CAP, file_pointer);
			}
	 	}
// read number of rows
	int NumRows( FILE* file_pointer, char rows[][STR_CAP]){
		ReadFile( file_pointer, rows);
		int rowindex=0;
		for(rowindex=0; rows[rowindex][0]!='\0'; rowindex++){
		}
	
		return rowindex;
		}
//determine blank word
	void BlankWord( FILE*file_pointer, char rows[][STR_CAP]){
		
		ReadFile( file_pointer, rows);
		int rowindex=NumRows(file_pointer,rows);
		char blankword[rowindex];
		for(int i=0; i<rowindex; i++){
			if(i%2 == 0){
				for(int k=0; k<i; k++){
					rows[i][0]=blankword[k];
					}
				}
			}
		}
		
//display what kind of word
	void displayword( FILE* file_pointer, char rows[][STR_CAP]){
		ReadFile( file_pointer, rows);
		int rowindex=NumRows(file_pointer, rows);
		BlankWord( file_pointer, rows);
		char blankword[rowindex];
		for(int i=0; i<rowindex; i++){
			printf("%c", blankword[i]);
			}
			}
			
			
			
			
