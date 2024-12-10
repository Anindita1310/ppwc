#define SUM 100
#include <stdio.h>
int main(){
SUM=200;
printf("%d", SUM);
return 0;
}
Output:error
  Since SUM was defined as 100 by the preprocessor, the compiler does not treat it as a variable. Instead, it treats SUM as a literal value (100), which is why the line SUM = 200; is invalid
. The compiler is expecting SUM to behave like a constant, not a modifiable variable.
