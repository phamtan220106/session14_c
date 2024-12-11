#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dem=0;
    printf("nhap vao mot chuoi bat ki:\n");
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0; i<length;i++){
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
            dem++;
        }
    }
    printf("co %d chu cai trong mang.\n",dem);
    printf("Hello world!\n");
    return 0;
}
