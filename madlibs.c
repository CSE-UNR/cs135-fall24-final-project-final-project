///Eileen Hayes///Solomon Olshen///Mone Morishima///

#include<stdio.h>
#define fileName "madlib2.txt"
#define NUMROWS 100
#define STR_CAP 100

void ReadFile( FILE* file_pointer, char rows[][STR_CAP]);
int NumRows( FILE* file_pointer, char rows[][STR_CAP]);
void BlankWord( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP]);
int BlankNum( FILE*file_pointer, char rows[][STR_CAP], char blankword[STR_CAP]);
void userinput(int num_inputs, char rows[][STR_CAP]);
void write(char rows[][STR_CAP], int numrows);


	int main(){

	FILE* file_pointer;
	file_pointer = fopen(fileName, "r");
	
	if(file_pointer == NULL){
			printf("can not open file");
			return 0;
			}
	int num_inputs;
	char rows[NUMROWS][STR_CAP];
	char blankword[STR_CAP];
	
	
	num_inputs = BlankNum(file_pointer, rows, blankword);
	
	int numrows = NumRows(file_pointer, rows);
	
	userinput(num_inputs, rows);
	
	write(rows, numrows);
	
	fclose(file_pointer);
			
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
		int rowindex = NumRows(file_pointer,rows);
		
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
			
	void userinput(int num_inputs, char rows[][STR_CAP]){
	
	char type;
	int count = 0;
	char userIN[STR_CAP];
	
	
	for(int i = 0; i + 1 < num_inputs; i++){

	type = rows[count][STR_CAP];
	if(type == 'A'){
	printf("Enter an Adjective: ");
	
		}
	else if(type == 'N'){
	printf("Enter an Noun: ");
	
		}
	else if(type == 'V'){
	printf("Enter an Verb: ");
	
		}
	
	fgets(userIN, STR_CAP, stdin);
for(int j = 0; userIN[j] != '\0'; j++){
		if(userIN[j] == '\n'){
	userIN[j] = '\0';
			}
		if(userIN[j] == '\n'){
	userIN[j] = '\0';
			}
	rows[count + 1][j] = userIN[j]; 
		}
	count += 2;
	}
}

	void write(char rows[][STR_CAP], int numrows){
	
	
	
	for(int i = 0; i < numrows; i++){
		for(int j = 0; j < STR_CAP; j++){
	if(rows[i][j] == '\n'){
	rows[i][j] = '\0';
			}
		if(rows[i][j] == '\n'){
	rows[i][j] = '\0';
			}
	}
	if(*rows[i+1] == '.' || *rows[i+1] == ',' || *rows[i+1] == '!'){
		printf("%s", rows[i]);
					}
	else{
		printf("%s ", rows[i]);
					}
		}
	printf("\n");
	}
			
			
			
			
