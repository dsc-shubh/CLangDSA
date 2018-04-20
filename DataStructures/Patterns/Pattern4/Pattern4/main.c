//
//  main.c
//  Pattern4
//
//  Created by Prashant Kumar on 4/20/18.
//  Copyright © 2018 Prashant Kumar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i = 1; i<=5; i++) {
        for (int j = i; j<5; j++) {
            printf(" ");
        }
        for (int j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//    *
//   **
//  ***
// ****
//*****
