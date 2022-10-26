#include<stdio.h>


Acs-FS/Fds:
fprintfifp, "\nArea of the stator core %f m"2",Acs);

Dcs=Acs/LI;

fprintfifp, "nDepth of the stator core %f m",Dcs);

Des1=Dcs*1000

fprintf(fp, "\nThe depth of core used is %f mm",Dcs1);

Do=(D*1000)+(2*(dss1+Dcs1));

fprintf(fp, "\nouter diameter of stator laminations %0.3f mm",Do);

//fclose(fp);

clrscr();

return 0;

}

vold rd()

{
                                                       /rotordesign/

clrscr();

key=3;

//FILE *fp;

//fp=fopen("C:\\machine\\IM\\RD.txt","wt");

printf("\t\t\t\tROTOR DESIGN");

fprintf(fp,"\n\n\n\n                                    ROTOR DESIGN");

                                                                               /*Air Gap*/
printf("\t\t\n\nAIR GAP");

fprintfifp,"\n\n\n\n

Ig=0.2+12 (sqrt(DU));                                      AIR GAP");

fprintf(fp,"InLength of the air gap %0.3f mm",lg);

Dr=(D*1000)-(2*Ig);

fprintf(fp, "\nDiameter of the rotor core %0.3f mm",Dr);

clrscr();

printf("\t\t\t\tROTOR SLOT");

fprintf(fp,"\n\n\n\n                                                          /*Rotor slots"/

fprintf(fp,"\nThe number of rotor slots is chosen s.t. smooth starting and acceler ating condition are obtained. This is secured by adopting

one slot less or one slot more per pole pairs, In the rotor than slots");

fprintf(fp,"\nTaking the rotor slot pair of pole more than the stator slots.");

Sr=Ss+p/2;

fprintf(fp,"\nNumber of rotor slots %0.0f",Sn);

ysr=(pi*Dr)/Sr;

clrscr();

fprintf(fp,"\nRotor pole pitch %0.3f mm",ysr);

clrscr();

bars*/

printf("\t\t\t\tROTOR BAR");                                                                    /*Rotor

fprintf(fp,"\n\n\n\n                                                ROTOR BARS");

Ibr=(2*m*Kws*int(Ts1)*Is*p_f)/Sr;

fprintf(fp, "\nCurrent in each rotor bar %f",Ibr);

printf("\nEnter a current density for rotor bars (range 4-7A/mm^2) in A/mm"^-2: ");

scanf("%f",&Idr);

fprintf(fp, "\nTaking a current density for rotor bars %0.3f A/mm^2: ",Idr;

Abr=Ibr/idr;

fprintf(fp, "\nArea of each bar %0.3f mm^2", Abr);

printf("\nArea of the rotor bar %0.3f mm^2.\n",Abr);

printf("\nEnter the depth of the rotor bar(in mm): ");

scanf("%f",&Dbr);

fprintf(fp,"\nThe depth of the rotor bar is %0.3f mm.",Dbr);

Wbr=Abr/Dbr;

fprintf(fp, "\nThe width of the rotor bar is %0.3f mm.".Wbr);

fprintfifp, "\nA rotor bar %0.3f mm wide and %0.3f mm deep is used.\n*,Wbr,Dbr);

wbr1=Wbr+1;

Dbr1=Dbr+3;

fprintf(fp,"\nThe dimension of rotor slots is :\nWidth=%0.3f mm and depth=%0.3f mm.",Wbг1,Dbr1);

fprintf(fp, "\nBefore proceeding further the flux density at root of the teeth must be checked.\n");

AAbr=pl*((D*1000)-(2*13)/Sr;

fprintf(fp, "\nSlot pitch at the root of teeth %0.3f mm.",AAbr);

Wbrt=AAbr-Wbr1;

fprintf(fp,"\nSlot width at the root of teeth %0.3f mm.",Wbrt);

Fbrd=(F*p*1000)/Sr*Li*Wbrt);

fprintf(fp,"\nFlux density at the root of the rotor teeth (max. value is 1.7 Wb/m^2) is %0.3f Wb/m^2.",Fbrd);

fprintf(fp, "\nThis is within limit and therefore the mmf required for rotor teeth would not be excessive.");

fprintf(fp,"\nThis bars are skewed by one slot pitch extending the bars by about 20mm beyond the core one each side and taking 10 mm as increase in the length

because skewing");

Lbr=(L*1000)+2*20+10;

fprintf(fp, "\nLength of each bar is %0.3f mm.",Lbr);

Rbr=(.021*(Lbr/1000))/Abr;

fprintf(fp, "\nResistance of each bar is %f Ohm.",Rbr);

PLC=Sr*Ibr*ibr*Rbr;

fprintf(fp,"\nTotal copper loss in bars is %0.3f W",PLC);

clrscr();
