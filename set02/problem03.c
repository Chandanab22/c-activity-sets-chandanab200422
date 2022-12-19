#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};
int main(){
 camel c;
  printf("enter the radius, height, length\n");
  scanf("%f%f%f", &c.radius, &c.height, &c.lenght);
  return(c);
  }

void find_weight(camel *c){
    c->weight = 3.14 * c->radius * c->radius *
}

typedef struct camel Camel;

Camel input();
float find_weight(Camel c); 