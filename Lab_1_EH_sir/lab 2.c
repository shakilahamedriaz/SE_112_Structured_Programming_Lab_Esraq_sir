#include<stdio.h>
int main(){


double distance, m,feet,inch,cm;
scanf("%lf",&distance); //distance -KM


m =distance*1000;       //1km=1000 met
feet=distance*3280.84; //1km=3280.84 feet
inch=distance*39370.1; //1km=39370.1 inch
cm=distance*100000;    //1km=100000 cm

printf("Distance in meter from Mirpur to Ashulia: %.2lf\n",m);
printf("Distance in feet from Mirpur to Ashulia: %.2lf\n",feet);
printf("Distance in inches from Mirpur to Ashulia: %.2lf\n",inch);
printf("Distance in centimeter from Mirpur to Ashulia: %.2lf\n",cm);

return 0;
}

