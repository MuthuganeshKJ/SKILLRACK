#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    
    char mat[r+3][c+3][1001];
    
    
    for(int i=0; i<r+2; i++){
        for(int j=0; j<c+2; j++){
            strcpy(mat[i][j], "-");
        }
    }
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)  
            scanf("%s", &mat[i][j]);
            
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(isalpha(mat[i][j][0])){
                strcat(mat[i-1][j-1], mat[i][j]);
                strcat(mat[i-1][j], mat[i][j]);
                strcat(mat[i-1][j+1], mat[i][j]);
                strcat(mat[i][j-1], mat[i][j]);
                strcat(mat[i][j+1], mat[i][j]);
                strcat(mat[i+1][j-1], mat[i][j]);
                strcat(mat[i+1][j], mat[i][j]);
                strcat(mat[i+1][j+1], mat[i][j]);
            }
         
        }
    }
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++)
            printf("%s ", mat[i][j]);
        printf("\n");
    }
