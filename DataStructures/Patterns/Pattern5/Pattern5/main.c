//
//  main.c
//  Pattern5
//
//  Created by Prashant Kumar on 4/20/18.
//  Copyright © 2018 Prashant Kumar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for (int i = 1; i<=5; i++) {
        for (int j = 1; j<20-i; j++) {
            printf(" ");
        }
        for (int k = 1; k<= 2*i-1; k++) {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}
