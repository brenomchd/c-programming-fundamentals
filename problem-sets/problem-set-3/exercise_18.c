#include <stdio.h>
int main(void){

	int ings, mings;
    double ving, vi, vf, luct, mluct, mving;

    scanf("%lf %lf %lf", &ving, &vi, &vf);

	mluct = (ving * 120) - (200 + (120 * 0.05));

    while(vi <= vf){

		if(vi < ving){
			ings = 120 + (50*(ving - vi));
			luct = (vi * ings) - (200 + (ings * 0.05));
			printf("V: %.2lf, N: %d, L: %.2lf\n", vi, ings, luct);
			if(luct >= mluct){
				mluct = luct;
				mving = vi;
				mings = ings;
			}
		}

		else if(vi == ving){
			ings = 120;
			luct = (vi * ings) - (200 + (ings * 0.05));
			printf("V: %.2lf, N: %d, L: %.2lf\n", vi, ings, luct);
			if(luct >= mluct){
				mluct = luct;
				mving = vi;
				mings = ings;
			}
		}

		else if(vi > ving){
			ings =  120 - (60*(vi - ving));
			luct = (vi * ings) - (200 + (ings * 0.05));
			printf("V: %.2lf, N: %d, L: %.2lf\n", vi, ings, luct);
			if(luct >= mluct){
				mluct = luct;
				mving = vi;
				mings = ings;
			}
		}
		vi++;
    }

	if(mluct > 0){
		printf("Melhor valor final: %.2lf\n", mving);
    	printf("Lucro: %.2lf\n", mluct);
    	printf("Numero de ingressos: %d", mings);
	}
    else if(mluct <= 0){
		printf("Melhor valor final: 0.00\n");
    	printf("Lucro: 0.00\n");
    	printf("Numero de ingressos: 0");
	}


    return 0;
}
