// array operation like addition subtraction multiplication
#include<stdio.h>
int main(){
    int arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    int row,col,r,c;
    printf("Enter numbers of rows:");
    scanf("%d",&r);
    printf("Enter numbers of col:");
    scanf("%d",&c);
    printf("Enter array1 elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter array2 elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }

    printf("Array1\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
    printf("\nArray2\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr2[row][col]);
        }
    }
// sum logic:
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        sum[row][col]=arr1[row][col]+arr2[row][col];
    }
}
//subtraction logic
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        sub[row][col]=arr1[row][col]-arr2[row][col];
    }
}
// multiplication logic:
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        mul[row][col]=0;
        for(int k=0;k<c;k++){
            mul[row][col]+=arr1[row][k]*arr2[k][col];
        }
    }
}

//printing sum result 
printf("\n Addition array \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",sum[row][col]);
        }
    }
    printf("\n subtraction array \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",sub[row][col]);
        }
    }
    printf("\n multiplication array \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",mul[row][col]);
        }
    }
}