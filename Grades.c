#include <stdio.h>
int main() {
int size;
printf("ENTER THE AMMOUNT OF GRADES\n-->");
scanf("%d", &size);
// Grade Array
float grades [size] ;
printf("Enter Grade\n-->");
int i;
for(i = 0; i < size; i++) {
    scanf("%f", &grades[i]);
    printf("-->");
}

float result;
for(i=0;i<size;i++) {
    result += grades[i];
}
result = result/size;
printf("YOUR AVERAGE GRADE IS : %f", result);
return 0;
}
