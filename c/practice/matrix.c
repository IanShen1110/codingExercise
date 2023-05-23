// C language
 
#include<stdio.h>
int R,C,M;
int ok; //1: R,C  0: C,R 
int matrix[15][15];
void swap(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void flip(int R,int C){
    int tmp[15][15];
    for(int i=0,j=R-1; j>=0; i++,j--){
        for(int k=0;k<C;k++){
            tmp[i][k]=matrix[j][k];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            matrix[i][j]=tmp[i][j];
        }
    }
}
void rotate(int R,int C){
    int tmp[15][15];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            tmp[j][i] = matrix[i][j];
        }
    }
    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++){
            matrix[i][j]=tmp[i][j];
        }
    }
    flip(C,R);
    ok = !ok;
}
int main(){
    while(scanf("%d%d%d",&R,&C,&M)!=EOF){
        ok=1;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        int operates[15];
        for(int i=0;i<M;i++){
            scanf("%d",&operates[i]);
        }
        for(int i=0,j=M-1; i<j; i++,j--){
            swap(&operates[i],&operates[j]);
        } 
        for(int i=0;i<M;i++){
            if(!operates[i]){
                if(ok) rotate(R,C);
                else rotate(C,R);
            }
            else{
                if(ok) flip(R,C);
                else flip(C,R);
            }
        }
        if(ok){
            printf("%d %d\n",R,C);
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    if(j==(C-1)) printf("%d",matrix[i][j]);
                    else printf("%d ",matrix[i][j]);
                }
                printf("\n");
            }
        }
        else{
            printf("%d %d\n",C,R);
            for(int i=0;i<C;i++){
                for(int j=0;j<R;j++){
                    if(j==(R-1)) printf("%d",matrix[i][j]);
                    else printf("%d ",matrix[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}