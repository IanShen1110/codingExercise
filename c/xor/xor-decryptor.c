#include<stdio.h>
#include<stdlib.h>
int xorDecry(FILE *enc,int fileLen,int key[],int keyLen){
    char *buf = (char*)malloc((fileLen+1)*sizeof(char));
    fread(buf, 1, fileLen, enc);
    FILE *dec = fopen("club_image_dec.png", "wb");
    if (!dec){ //Check if the file is created successfully
        fprintf(stderr, "Cannot create the file!");
        return 1;
    }
    for (int i = 0; i < fileLen; i++)
    {
        fread(buf + i, 1, 1, enc);
        *(buf + i) = *(buf + i) ^ *(key + (i % 4));
        fwrite((buf + i), 1, 1, dec);
    }
    fclose(dec);
    
}
int main(){
    FILE *enc = fopen("club_image_enc.png", "r");
    if (!enc){ //Check if the image is opened successfully
        fprintf(stderr, "Cannot open the file!");
        return 1;
    }
    int key[] = {67, 82, 83, 67};
    fseek(enc, 0, SEEK_END);
    int size = ftell(enc);
    fseek(enc, 0, SEEK_SET);
    //printf("szie = %ld", size);
    xorDecry(enc, size, key, sizeof(key)/sizeof(key[0]));
    fclose(enc);
}