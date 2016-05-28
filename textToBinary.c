//
//  textToBinary.c
//  program2
//
//  email: akurbanovas@albany.edu
//  Created by arnoldas kurbanovas on 2/24/16.
//  Copyright © 2016 arnoldas kurbanovas. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 255

//textToBinary();
void textToBinary(FILE * input_File, FILE * output_File){
    
    char strIn[MAXLEN+1];
    char * newStr = malloc(255); //temp
//    unsigned char length;
    unsigned int num_str;
 //   unsigned int minLen ;
 //   unsigned int maxLen = 0;
 //   unsigned int maxInt = 0;
 //   unsigned int minInt ;
    printf("pre while");
    while(fscanf(input_File, "%s\t%u", newStr, &num_str) != EOF){
        printf("%s\t%u\n",newStr, num_str);
        int len = strlen(newStr);
        //  fwrite(const void *, size_t size, size_t num_str, input_File)
        fwrite(&strIn, sizeof(unsigned char), (size_t) 1, output_File);
        fwrite(newStr, sizeof(unsigned char), len-1, output_File); // len vs len-1 ?????
        fwrite(&num_str, sizeof(unsigned int), (size_t)1, output_File);
        // textToBinary();
    }
}    

