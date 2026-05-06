#include <stdio.h>
int main(void) {

  int n, cat1, cat2, hip;

  scanf("%d" , &n);

  for (hip = 1; hip <= n; hip++){
    for (cat1 = 1; cat1 < hip; cat1++){
    	cat2 = cat1;
		while (cat1 * cat1 + cat2 * cat2 < hip * hip){
			cat2++;
		}
    	if (cat1 * cat1 + cat2 * cat2 == hip * hip){
			printf("hipotenusa = %d, catetos %d e %d\n", hip, cat1, cat2);
      }
    }
  }

  return 0;
}

