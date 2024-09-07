#include<stdio.h>
int main(){
    /*
fopen(): Opens a file and returns a file pointer.
fclose(): Closes a file.
fread(): Reads data from a file.
fwrite(): Writes data to a file.
fscanf(): Reads formatted data from a file.
fprintf(): Writes formatted data to a file.
fgetc(): Reads a single character from a file.
fputc(): Writes a single character to a file.
feof(): Checks when the end of the file is reached.
fseek(): Sets the file pointer to a specific location.
ftell(): Returns the position of the file pointer.

r: Opens the file in read mode only.
w: Opens the file in write mode only. The existing file content is deleted.
a: Opens the file in append mode. New data is added to the end of the file.
r+: Opens the file in both read and write mode.
w+: Opens the file in both read and write mode. The existing file content is deleted.
a+: Opens the file in both read and write mode. New data is added to the end of the file.
    */

    FILE* fptr;
    fptr=fopen("data.txt","w");
    
    if (fptr==NULL)
    {
        printf("File open unsuccesful\n");
    }else{
        printf("File open succesful\n");
    }
    
    fclose(fptr);

    return 0;
}