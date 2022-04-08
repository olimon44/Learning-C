#include <stdio.h>
int main() {
int size;
printf("ENTER THE AMMOUNT OF GRADES\n-->");
scanf("%d", &size);
printf("Enter Grade\n-->");
int i;
float result;
float current;
for(i = 0; i < size; i++) {
    scanf("%f", &current);
    result += current;
    printf("-->");
}
result = result/size;
printf("YOUR AVERAGE GRADE IS : %f\n", result);
system("pause");
return 0;
}
