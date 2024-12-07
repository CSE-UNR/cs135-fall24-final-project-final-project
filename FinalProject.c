//Eileen Hayes

#include<stdio.h>
#define fileName "madlib1.txt"
#define NUMROWS 100
#define STR_CAP 100

void ReadFile( FILE* file_pointer, char rows[][STR_CAP]);
int NumRows( FILE* file_pointer, char rows[][STR_CAP]);
void BlankWord( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP]);
int BlankNum( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP]);

	int main(){

	FILE* file_pointer;
	file_pointer = fopen(fileName, "r");
	
	if(file_pointer == NULL){
			printf("can not open file");
			return 0;
			}
	char rows[NUMROWS][STR_CAP];
	char blankword[STR_CAP];
	

		
		
		

			
			
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
	void BlankWord( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP] ){
		
		ReadFile( file_pointer, rows);
		int rowindex=NumRows(file_pointer,rows);
		
		int i=0;
		int j=0;	
			while(i<rowindex && rows[i][0] != '\0'){
				if( (i-1)%2 == 0){
				 blankword[j++]=rows[i][0];
			}
				i++;
			}
		blankword[j]='\0'; 
		
		}
//get size of blankword
	int BlankNum( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP]){
		BlankWord(file_pointer, rows, blankword);
			int index;
			for(index=0; blankword[index]!='\0'; index++){
			}
			return index;
			}
		

			
			
			
			
