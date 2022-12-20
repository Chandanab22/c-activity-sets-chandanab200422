#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
}

int main(){
camel c;
 c = input();
find_weight(&c);
output(c);
return 0;
}

camel input(){
 camel c;
    printf("Enter the radius of camel\n");
    scanf("%f",&c.radius);
    printf("Enter the height of camel\n");
    scanf("%f",&c.height);
    printf("Enter the length of camel\n");
    scanf("%f",&c.length);
  return(c);
  }

void find_weight(camel *c){
    c->weight = 3.14 * c->radius * c->radius *c->radius * sqrt(c->height * c->length);
}

void output(Camel c);
printf("The weight of the camel with %2.2f,%2.2f,%2.2g is %2.4\n",c.radius,c.height,c.length,c.weight);
}