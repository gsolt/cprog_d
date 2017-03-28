/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		21-13 NPS						*
* V2.1.2	2007.05.07	Gergely Zsolt		21-39 NPS						*
* V2.1.3	2007.05.11	Gergely Zsolt		Cseteny, kapcsoloallomas		*
* V2.1.4	2007.06.12	Gergely Zsolt		Csorna, szélerõmûpark			*
* V2.1.5	2007.06.12	Gergely Zsolt		Gyõr, Csókás u.					*
* V2.1.6	2007.06.14	Gergely Zsolt		Csorna, szélerõmûpark,MOSCAD-L	*
* V2.1.6	2007.06.29	Gergely Zsolt		Csetény módosítás				*
* V2.1.7	2007.07.09	Matus Zsolt			51-97 NPS						*
			2007.07.09	Matus Zsolt			58-738 NPS						*
			2007.07.09	Matus Zsolt			51-44 NPS						*
* V2.1.7.5	2007.07.12	Gergely Zsolt		Gyõr, Ipari Park, AHM 			*			
* V2.1.8	2007.09.07	Gergely Zsolt		50-24 NPS						*
			2007.09.07	Gergely Zsolt		51-02 NPS						*
			2007.09.07	Gergely Zsolt		51-26 NPS						*
			2007.09.07	Gergely Zsolt		51-81 NPS						*	
* V2.1.9	2007.09.17. Gergely Zsolt		Veszprém, Szeglethy				*					
* V2.1.10	2007.09.20. Gergely Zsolt		Veszprém, OBI					*	
* V2.1.11	2007.09.26. Gergely Zsolt		Veszprém, Patak tér				*
											11-34 TMOK2 ZE												
* V2.1.12	2007.11.16. Gergely Zsolt		Veszprém, Kádár utca			*
* V2.1.13	2007.11.19. Gergely Zsolt		20-37 NPS						*
* V2.1.14	2007.11.21. Gergely Zsolt		Szentgotthárd átjátszó			*
* V2.1.15	2007.11.22. Gergely Zsolt		Pápa, TESCO						*
* V2.1.8	2007.11.28. Gergely Zsolt		Pápa: Fenyvesi, Malomkert		*
* V2.1.9	2007.11.28. Gergely Zsolt		Pápa: Fenyvesi, Malomkert		*
* V2.1.10	2007.11.29. Gergely Zsolt		Pápa: Huszár út, Kórház			*
* V2.1.11	2008.02.26. Gergely Zsolt		Nick, vízierõmû			*
* V2.1.12	2008.05.20. Gergely Zsolt		Gyõr, Polgármesteri hivatal		*
* V2.1.13	2008.05.26. Gergely Zsolt		Esztergom, Béke tér				*
											Esztergom, Borászat
											Liszt F. tér
											Erzsébet tér
* V2.1.14	2008.06.02. Gergely Zsolt		Gyõr, Batthyanyi tér		*											
* V2.1.15	2008.06.12. Gergely Zsolt		Gyõr, Petõfi tér		*	
* V2.1.16	2008.06.27. Gergely Zsolt		PM6: 10-27, 10-39, 10-49, 10-66		*	
* V2.1.17	2008.08.01. Gergely Zsolt		Gyõr, Petõfi tér		*	
* V2.1.25	2008.08.18. Gergely Zsolt		OK2: 		*	
* V2.1.26	2008.08.27. Gergely Zsolt		87-96, 87-25 NPS-NPS 		*	
* V2.1.27	2008.08.28. Gergely Zsolt		11-67, 20-27, 81-95 OK2 		*	
* V2.1.28	2008.09.09. Gergely Zsolt		42-26, 79-047, 52-61, 52-92, 37-30 OK2 		*	
* V2.1.29	2008.09.10. Gergely Zsolt		Gyõr IGM, Büchl			 		*	
* V2.1.30	2008.09.15. Gergely Zsolt		OK2			 		*	
* V2.1.32	2008.10.12. Gergely Zsolt		Gyõr, Árkád		 		*	
* V2.1.33	2008.10.14. Gergely Zsolt		37-12		 		*	
* V2.1.34	2008.10.16. Gergely Zsolt		70-09,  90-28		 		*	
* V2.1.35	2008.10.16. Gergely Zsolt		Gyõr, ETO		 		*	
* V2.1.36	2008.10.16. Gergely Zsolt		72-99		 		*	
* V2.1.37	2008.11.16. Gergely Zsolt		Sopron: Fényi, Tercia, Damjanich		 		*	
* V2.1.38	2008.11.18. Gergely Zsolt		Pápakovácsi, szélerõmû	 		*	
* V2.1.40	2008.11.24. Gergely Zsolt		Balatonfüred, 5 db. kábelköri		 		*	
* V2.1.41	2009.01.18. Gergely Zsolt		Vasvár, állomás		 		*	
* V2.1.42	2009.02.11. Gergely Zsolt		12-46, 14-48		 		*	
* V2.1.43	2009.02.23. Gergely Zsolt		6. db kábelköri		 		*	
* V2.1.44	2009.02.25. Gergely Zsolt		17. db TMOK		 		*	
* V2.1.45	2009.11.02. Gergely Zsolt		37-05		 		*	
* V2.1.46	2009.11.18. Gergely Zsolt		42-43, 42-14		 		*	
* V2.1.47	2009.11.23. Gergely Zsolt		71-04		 		*	
* V2.1.48	2010.02.08. Gergely Zsolt		42-44	 	 		*	


****************************************************************************
* NAME           :  PARS_D3.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        : 
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
   {0      , 0 }
};*/
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
sT[0].sCP[0].sCPR[0].nDCStart  = 10;    sT[0].sCP[0].sCPR[0].nDCNum  = 1;    sT[0].sCP[0].sCPR[0].nSCStart  = 11;    sT[0].sCP[0].sCPR[0].nAckStart  =0;    sT[0].sCP[0].sCPR[0].nAckNum  =0;   sT[0].sCP[0].sCPR[0].nSPOffsetCS  = 34;   sT[0].sCP[0].sCPR[0].nSPOffsetLek  = 35; 	
sT[0].sCP[0].sCPR[1].nDCStart  = 12;    sT[0].sCP[0].sCPR[1].nDCNum  = 1;    sT[0].sCP[0].sCPR[1].nSCStart  = 13;    sT[0].sCP[0].sCPR[1].nAckStart  =0;    sT[0].sCP[0].sCPR[1].nAckNum  =0;   sT[0].sCP[0].sCPR[1].nSPOffsetCS  = 50;   sT[0].sCP[0].sCPR[1].nSPOffsetLek  = 51; 	
sT[0].sCP[0].sCPR[2].nDCStart  = 14;    sT[0].sCP[0].sCPR[2].nDCNum  = 1;    sT[0].sCP[0].sCPR[2].nSCStart  = 15;    sT[0].sCP[0].sCPR[2].nAckStart  =0;    sT[0].sCP[0].sCPR[2].nAckNum  =0;   sT[0].sCP[0].sCPR[2].nSPOffsetCS  = 66;   sT[0].sCP[0].sCPR[2].nSPOffsetLek  = 67; 	
sT[0].sCP[0].sCPR[3].nDCStart  = 16;    sT[0].sCP[0].sCPR[3].nDCNum  = 1;    sT[0].sCP[0].sCPR[3].nSCStart  = 17;    sT[0].sCP[0].sCPR[3].nAckStart  =0;    sT[0].sCP[0].sCPR[3].nAckNum  =0;   sT[0].sCP[0].sCPR[3].nSPOffsetCS  = 82;   sT[0].sCP[0].sCPR[3].nSPOffsetLek  = 83; 	
sT[0].sCP[0].sCPR[4].nDCStart  = 18;    sT[0].sCP[0].sCPR[4].nDCNum  = 1;    sT[0].sCP[0].sCPR[4].nSCStart  = 19;    sT[0].sCP[0].sCPR[4].nAckStart  =0;    sT[0].sCP[0].sCPR[4].nAckNum  =0;   sT[0].sCP[0].sCPR[4].nSPOffsetCS  = 98;   sT[0].sCP[0].sCPR[4].nSPOffsetLek  = 99; 	
sT[0].sCP[0].sCPR[5].nDCStart  = 20;    sT[0].sCP[0].sCPR[5].nDCNum  = 1;    sT[0].sCP[0].sCPR[5].nSCStart  = 21;    sT[0].sCP[0].sCPR[5].nAckStart  =0;    sT[0].sCP[0].sCPR[5].nAckNum  =0;   sT[0].sCP[0].sCPR[5].nSPOffsetCS  = 114;  sT[0].sCP[0].sCPR[5].nSPOffsetLek  = 115; 	
sT[0].sCP[0].sCPR[6].nDCStart  = 22;    sT[0].sCP[0].sCPR[6].nDCNum  = 1;    sT[0].sCP[0].sCPR[6].nSCStart  = 23;    sT[0].sCP[0].sCPR[6].nAckStart  =0;    sT[0].sCP[0].sCPR[6].nAckNum  =0;   sT[0].sCP[0].sCPR[6].nSPOffsetCS  = 130;  sT[0].sCP[0].sCPR[6].nSPOffsetLek  = 131; 	
sT[0].sCP[0].sCPR[7].nDCStart  = 24;    sT[0].sCP[0].sCPR[7].nDCNum  = 1;    sT[0].sCP[0].sCPR[7].nSCStart  = 25;    sT[0].sCP[0].sCPR[7].nAckStart  =0;    sT[0].sCP[0].sCPR[7].nAckNum  =0;   sT[0].sCP[0].sCPR[7].nSPOffsetCS  = 146;  sT[0].sCP[0].sCPR[7].nSPOffsetLek  = 147; 	
sT[0].sCP[0].sCPR[8].nDCStart  = 26;    sT[0].sCP[0].sCPR[8].nDCNum  = 1;    sT[0].sCP[0].sCPR[8].nSCStart  = 27;    sT[0].sCP[0].sCPR[8].nAckStart  =28;   sT[0].sCP[0].sCPR[8].nAckNum  =1;   sT[0].sCP[0].sCPR[8].nSPOffsetCS  = 162;  sT[0].sCP[0].sCPR[8].nSPOffsetLek  = 163; 	
sT[0].sCP[0].sCPR[9].nDCStart  = 29;    sT[0].sCP[0].sCPR[9].nDCNum  = 4;    sT[0].sCP[0].sCPR[9].nSCStart  = 34;    sT[0].sCP[0].sCPR[9].nAckStart  =33;   sT[0].sCP[0].sCPR[9].nAckNum  =1;   sT[0].sCP[0].sCPR[9].nSPOffsetCS  = 199;  sT[0].sCP[0].sCPR[9].nSPOffsetLek  = 200; 	
sT[0].sCP[0].sCPR[10].nDCStart = 35;    sT[0].sCP[0].sCPR[10].nDCNum = 4;    sT[0].sCP[0].sCPR[10].nSCStart = 39;    sT[0].sCP[0].sCPR[10].nAckStart =0;    sT[0].sCP[0].sCPR[10].nAckNum =0;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 213;  sT[0].sCP[0].sCPR[10].nSPOffsetLek = 214; 	
sT[0].sCP[0].sCPR[11].nDCStart = 40;    sT[0].sCP[0].sCPR[11].nDCNum = 2;    sT[0].sCP[0].sCPR[11].nSCStart = 44;    sT[0].sCP[0].sCPR[11].nAckStart =0;    sT[0].sCP[0].sCPR[11].nAckNum =0;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 245;  sT[0].sCP[0].sCPR[11].nSPOffsetLek = 246; sT[0].sCP[0].sCPR[11].nSPOffsetCS2 = 247;   sT[0].sCP[0].sCPR[11].nSPOffsetLek2 = 248; sT[0].sCP[0].sCPR[11].nSCNum  = 2;	
sT[0].sCP[0].sCPR[12].nDCStart = 46;    sT[0].sCP[0].sCPR[12].nDCNum = 1;    sT[0].sCP[0].sCPR[12].nSCStart = 47;    sT[0].sCP[0].sCPR[12].nAckStart  =28;  sT[0].sCP[0].sCPR[12].nAckNum =0;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 263;  sT[0].sCP[0].sCPR[12].nSPOffsetLek = 264; 	
sT[0].sCP[0].sCPR[13].nDCStart = 48;    sT[0].sCP[0].sCPR[13].nDCNum = 4;    sT[0].sCP[0].sCPR[13].nSCStart = 52;    sT[0].sCP[0].sCPR[13].nAckStart  =0;   sT[0].sCP[0].sCPR[13].nAckNum =0;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 280;  sT[0].sCP[0].sCPR[13].nSPOffsetLek = 281; 	
sT[0].sCP[0].sCPR[14].nDCStart = 53;    sT[0].sCP[0].sCPR[14].nDCNum = 1;    sT[0].sCP[0].sCPR[14].nSCStart = 54;    sT[0].sCP[0].sCPR[14].nAckStart  =0;   sT[0].sCP[0].sCPR[14].nAckNum =0;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 296;  sT[0].sCP[0].sCPR[14].nSPOffsetLek = 297; 	
sT[0].sCP[0].sCPR[15].nDCStart = 55;    sT[0].sCP[0].sCPR[15].nDCNum = 1;    sT[0].sCP[0].sCPR[15].nSCStart = 56;    sT[0].sCP[0].sCPR[15].nAckStart  =0;   sT[0].sCP[0].sCPR[15].nAckNum =0;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 312;  sT[0].sCP[0].sCPR[15].nSPOffsetLek = 313; 	
sT[0].sCP[0].sCPR[16].nDCStart = 57;    sT[0].sCP[0].sCPR[16].nDCNum = 4;    sT[0].sCP[0].sCPR[16].nSCStart = 61;    sT[0].sCP[0].sCPR[16].nAckStart  =0;   sT[0].sCP[0].sCPR[16].nAckNum =0;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 328;  sT[0].sCP[0].sCPR[16].nSPOffsetLek = 329; 	
sT[0].sCP[0].sCPR[17].nDCStart = 62;    sT[0].sCP[0].sCPR[17].nDCNum = 4;    sT[0].sCP[0].sCPR[17].nSCStart = 67;    sT[0].sCP[0].sCPR[17].nAckStart  =66;  sT[0].sCP[0].sCPR[17].nAckNum =1;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 365;  sT[0].sCP[0].sCPR[17].nSPOffsetLek = 366; 	
sT[0].sCP[0].sCPR[18].nDCStart = 68;    sT[0].sCP[0].sCPR[18].nDCNum = 4;    sT[0].sCP[0].sCPR[18].nSCStart = 73;    sT[0].sCP[0].sCPR[18].nAckStart  =72;  sT[0].sCP[0].sCPR[18].nAckNum =1;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 402;  sT[0].sCP[0].sCPR[18].nSPOffsetLek = 403; 	
sT[0].sCP[0].sCPR[19].nDCStart = 74;    sT[0].sCP[0].sCPR[19].nDCNum = 4;    sT[0].sCP[0].sCPR[19].nSCStart = 78;    sT[0].sCP[0].sCPR[19].nAckStart  =0;   sT[0].sCP[0].sCPR[19].nAckNum =0;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 419;  sT[0].sCP[0].sCPR[19].nSPOffsetLek = 420; 	
sT[0].sCP[0].sCPR[20].nDCStart = 79;    sT[0].sCP[0].sCPR[20].nDCNum = 1;    sT[0].sCP[0].sCPR[20].nSCStart = 80;    sT[0].sCP[0].sCPR[20].nAckStart  =786; sT[0].sCP[0].sCPR[20].nAckNum =1;   sT[0].sCP[0].sCPR[20].nSPOffsetCS  =435;  sT[0].sCP[0].sCPR[20].nSPOffsetLek  =436; 	
sT[0].sCP[0].sCPR[21].nDCStart = 81;    sT[0].sCP[0].sCPR[21].nDCNum = 1;    sT[0].sCP[0].sCPR[21].nSCStart = 82;    sT[0].sCP[0].sCPR[21].nAckStart  =787; sT[0].sCP[0].sCPR[21].nAckNum =1;   sT[0].sCP[0].sCPR[21].nSPOffsetCS  =451;  sT[0].sCP[0].sCPR[21].nSPOffsetLek  =452; 	
sT[0].sCP[0].sCPR[22].nDCStart = 83;    sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart = 84;    sT[0].sCP[0].sCPR[22].nAckStart  =791; sT[0].sCP[0].sCPR[22].nAckNum =1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS  =467;  sT[0].sCP[0].sCPR[22].nSPOffsetLek  =468; 	
sT[0].sCP[0].sCPR[23].nDCStart = 85;    sT[0].sCP[0].sCPR[23].nDCNum = 1;    sT[0].sCP[0].sCPR[23].nSCStart = 86;    sT[0].sCP[0].sCPR[23].nAckStart  =0;   sT[0].sCP[0].sCPR[23].nAckNum =0;   sT[0].sCP[0].sCPR[23].nSPOffsetCS  =483;  sT[0].sCP[0].sCPR[23].nSPOffsetLek  =484; 	
sT[0].sCP[0].sCPR[24].nDCStart = 87;    sT[0].sCP[0].sCPR[24].nDCNum = 1;    sT[0].sCP[0].sCPR[24].nSCStart = 88;    sT[0].sCP[0].sCPR[24].nAckStart  =0;   sT[0].sCP[0].sCPR[24].nAckNum =0;   sT[0].sCP[0].sCPR[24].nSPOffsetCS  =499;  sT[0].sCP[0].sCPR[24].nSPOffsetLek  =500; 	
sT[0].sCP[0].sCPR[25].nDCStart = 89;    sT[0].sCP[0].sCPR[25].nDCNum = 4;    sT[0].sCP[0].sCPR[25].nSCStart = 93;    sT[0].sCP[0].sCPR[25].nAckStart  =0;   sT[0].sCP[0].sCPR[25].nAckNum =0;   sT[0].sCP[0].sCPR[25].nSPOffsetCS  =515;  sT[0].sCP[0].sCPR[25].nSPOffsetLek = 516; 	
sT[0].sCP[0].sCPR[26].nDCStart = 94;    sT[0].sCP[0].sCPR[26].nDCNum = 1;    sT[0].sCP[0].sCPR[26].nSCStart = 95;    sT[0].sCP[0].sCPR[26].nAckStart  =789; sT[0].sCP[0].sCPR[26].nAckNum =1;   sT[0].sCP[0].sCPR[26].nSPOffsetCS  =531;  sT[0].sCP[0].sCPR[26].nSPOffsetLek  =532; 	
sT[0].sCP[0].sCPR[27].nDCStart = 96;    sT[0].sCP[0].sCPR[27].nDCNum = 1;    sT[0].sCP[0].sCPR[27].nSCStart = 97;    sT[0].sCP[0].sCPR[27].nAckStart  =0;   sT[0].sCP[0].sCPR[27].nAckNum =0;   sT[0].sCP[0].sCPR[27].nSPOffsetCS  =547;  sT[0].sCP[0].sCPR[27].nSPOffsetLek  =548; 	
sT[0].sCP[0].sCPR[28].nDCStart = 98;    sT[0].sCP[0].sCPR[28].nDCNum = 1;    sT[0].sCP[0].sCPR[28].nSCStart = 99;    sT[0].sCP[0].sCPR[28].nAckStart  =0;   sT[0].sCP[0].sCPR[28].nAckNum =0;   sT[0].sCP[0].sCPR[28].nSPOffsetCS  =563;  sT[0].sCP[0].sCPR[28].nSPOffsetLek  =564; 	
sT[0].sCP[0].sCPR[29].nDCStart =100;    sT[0].sCP[0].sCPR[29].nDCNum = 1;    sT[0].sCP[0].sCPR[29].nSCStart =101;    sT[0].sCP[0].sCPR[29].nAckStart  =788; sT[0].sCP[0].sCPR[29].nAckNum =1;   sT[0].sCP[0].sCPR[29].nSPOffsetCS  =579;  sT[0].sCP[0].sCPR[29].nSPOffsetLek  =580; 	
sT[0].sCP[0].sCPR[30].nDCStart =102;    sT[0].sCP[0].sCPR[30].nDCNum = 1;    sT[0].sCP[0].sCPR[30].nSCStart =103;    sT[0].sCP[0].sCPR[30].nAckStart  =790; sT[0].sCP[0].sCPR[30].nAckNum =1;   sT[0].sCP[0].sCPR[30].nSPOffsetCS  =595;  sT[0].sCP[0].sCPR[30].nSPOffsetLek  =596; 	
sT[0].sCP[0].sCPR[31].nDCStart =104;    sT[0].sCP[0].sCPR[31].nDCNum = 4;    sT[0].sCP[0].sCPR[31].nSCStart =108;    sT[0].sCP[0].sCPR[31].nAckStart  =0;   sT[0].sCP[0].sCPR[31].nAckNum =0;   sT[0].sCP[0].sCPR[31].nSPOffsetCS  =611;  sT[0].sCP[0].sCPR[31].nSPOffsetLek = 612; 	
sT[0].sCP[0].sCPR[32].nDCStart =109;    sT[0].sCP[0].sCPR[32].nDCNum = 4;    sT[0].sCP[0].sCPR[32].nSCStart =113;    sT[0].sCP[0].sCPR[32].nAckStart  =0;   sT[0].sCP[0].sCPR[32].nAckNum =0;   sT[0].sCP[0].sCPR[32].nSPOffsetCS  =627;  sT[0].sCP[0].sCPR[32].nSPOffsetLek = 628; 	
sT[0].sCP[0].sCPR[33].nDCStart =114;    sT[0].sCP[0].sCPR[33].nDCNum = 4;    sT[0].sCP[0].sCPR[33].nSCStart =118;    sT[0].sCP[0].sCPR[33].nAckStart  =0;   sT[0].sCP[0].sCPR[33].nAckNum =0;   sT[0].sCP[0].sCPR[33].nSPOffsetCS  =645;  sT[0].sCP[0].sCPR[33].nSPOffsetLek = 646; 	
sT[0].sCP[0].sCPR[34].nDCStart =119;    sT[0].sCP[0].sCPR[34].nDCNum = 1;    sT[0].sCP[0].sCPR[34].nSCStart =120;    sT[0].sCP[0].sCPR[34].nAckStart  =121; sT[0].sCP[0].sCPR[34].nAckNum =1;   sT[0].sCP[0].sCPR[34].nSPOffsetCS  =661;  sT[0].sCP[0].sCPR[34].nSPOffsetLek  =662; 	
sT[0].sCP[0].sCPR[35].nDCStart =122;    sT[0].sCP[0].sCPR[35].nDCNum = 5;    sT[0].sCP[0].sCPR[35].nSCStart =128;    sT[0].sCP[0].sCPR[35].nAckStart  =0;   sT[0].sCP[0].sCPR[35].nAckNum =0;   sT[0].sCP[0].sCPR[35].nSPOffsetCS  =679;  sT[0].sCP[0].sCPR[35].nSPOffsetLek = 680; 	
sT[0].sCP[0].sCPR[36].nDCStart =129;    sT[0].sCP[0].sCPR[36].nDCNum = 1;    sT[0].sCP[0].sCPR[36].nSCStart =130;    sT[0].sCP[0].sCPR[36].nAckStart  =0; 	sT[0].sCP[0].sCPR[36].nAckNum =0;   sT[0].sCP[0].sCPR[36].nSPOffsetCS  =695;  sT[0].sCP[0].sCPR[36].nSPOffsetLek  =696; 	
sT[0].sCP[0].sCPR[37].nDCStart =0;	    sT[0].sCP[0].sCPR[37].nDCNum = 0;    sT[0].sCP[0].sCPR[37].nSCStart =131;    sT[0].sCP[0].sCPR[37].nAckStart  =0; 	sT[0].sCP[0].sCPR[37].nAckNum =0;   sT[0].sCP[0].sCPR[37].nSPOffsetCS  =702;  sT[0].sCP[0].sCPR[37].nSPOffsetLek  =703; 	
sT[0].sCP[0].sCPR[38].nDCStart =132;    sT[0].sCP[0].sCPR[38].nDCNum = 4;    sT[0].sCP[0].sCPR[38].nSCStart =136;    sT[0].sCP[0].sCPR[38].nAckStart  =0;   sT[0].sCP[0].sCPR[38].nAckNum =0;   sT[0].sCP[0].sCPR[38].nSPOffsetCS  =718;  sT[0].sCP[0].sCPR[38].nSPOffsetLek = 719; 	
sT[0].sCP[0].sCPR[39].nDCStart =142;    sT[0].sCP[0].sCPR[39].nDCNum = 4;    sT[0].sCP[0].sCPR[39].nSCStart =146;    sT[0].sCP[0].sCPR[39].nAckStart  =0;   sT[0].sCP[0].sCPR[39].nAckNum =0;   sT[0].sCP[0].sCPR[39].nSPOffsetCS  =750;  sT[0].sCP[0].sCPR[39].nSPOffsetLek = 751; 	
sT[0].sCP[0].sCPR[40].nDCStart =137;    sT[0].sCP[0].sCPR[40].nDCNum = 4;    sT[0].sCP[0].sCPR[40].nSCStart =141;    sT[0].sCP[0].sCPR[40].nAckStart  =0;   sT[0].sCP[0].sCPR[40].nAckNum =0;   sT[0].sCP[0].sCPR[40].nSPOffsetCS  =734;  sT[0].sCP[0].sCPR[40].nSPOffsetLek = 735; 	
sT[0].sCP[0].sCPR[41].nDCStart =147;    sT[0].sCP[0].sCPR[41].nDCNum = 4;    sT[0].sCP[0].sCPR[41].nSCStart =151;    sT[0].sCP[0].sCPR[41].nAckStart  =0;   sT[0].sCP[0].sCPR[41].nAckNum =0;   sT[0].sCP[0].sCPR[41].nSPOffsetCS  =766;  sT[0].sCP[0].sCPR[41].nSPOffsetLek = 767; 	
sT[0].sCP[0].sCPR[42].nDCStart =152;    sT[0].sCP[0].sCPR[42].nDCNum = 4;    sT[0].sCP[0].sCPR[42].nSCStart =156;    sT[0].sCP[0].sCPR[42].nAckStart  =0;   sT[0].sCP[0].sCPR[42].nAckNum =0;   sT[0].sCP[0].sCPR[42].nSPOffsetCS  =782;  sT[0].sCP[0].sCPR[42].nSPOffsetLek = 783; 	
sT[0].sCP[0].sCPR[43].nDCStart =157;    sT[0].sCP[0].sCPR[43].nDCNum = 4;    sT[0].sCP[0].sCPR[43].nSCStart =162;    sT[0].sCP[0].sCPR[43].nAckStart  =161; sT[0].sCP[0].sCPR[43].nAckNum =1;   sT[0].sCP[0].sCPR[43].nSPOffsetCS  =819;  sT[0].sCP[0].sCPR[43].nSPOffsetLek = 820; 	
sT[0].sCP[0].sCPR[44].nDCStart =163;    sT[0].sCP[0].sCPR[44].nDCNum = 4;    sT[0].sCP[0].sCPR[44].nSCStart =168;    sT[0].sCP[0].sCPR[44].nAckStart  =167; sT[0].sCP[0].sCPR[44].nAckNum =1;   sT[0].sCP[0].sCPR[44].nSPOffsetCS  =856;  sT[0].sCP[0].sCPR[44].nSPOffsetLek = 857; 	
sT[0].sCP[0].sCPR[45].nDCStart =169;    sT[0].sCP[0].sCPR[45].nDCNum = 4;    sT[0].sCP[0].sCPR[45].nSCStart =173;    sT[0].sCP[0].sCPR[45].nAckStart  =0; 	sT[0].sCP[0].sCPR[45].nAckNum =0;   sT[0].sCP[0].sCPR[45].nSPOffsetCS  =872;  sT[0].sCP[0].sCPR[45].nSPOffsetLek = 873; 	
sT[0].sCP[0].sCPR[46].nDCStart =174;    sT[0].sCP[0].sCPR[46].nDCNum = 4;    sT[0].sCP[0].sCPR[46].nSCStart =178;    sT[0].sCP[0].sCPR[46].nAckStart  =0; 	sT[0].sCP[0].sCPR[46].nAckNum =0;   sT[0].sCP[0].sCPR[46].nSPOffsetCS  =888;  sT[0].sCP[0].sCPR[46].nSPOffsetLek = 889; 	
sT[0].sCP[0].sCPR[47].nDCStart =179;    sT[0].sCP[0].sCPR[47].nDCNum = 4;    sT[0].sCP[0].sCPR[47].nSCStart =183;    sT[0].sCP[0].sCPR[47].nAckStart  =0; 	sT[0].sCP[0].sCPR[47].nAckNum =0;   sT[0].sCP[0].sCPR[47].nSPOffsetCS  =904;  sT[0].sCP[0].sCPR[47].nSPOffsetLek = 905; 	
sT[0].sCP[0].sCPR[48].nDCStart =184;    sT[0].sCP[0].sCPR[48].nDCNum = 4;    sT[0].sCP[0].sCPR[48].nSCStart =188;    sT[0].sCP[0].sCPR[48].nAckStart  =0; 	sT[0].sCP[0].sCPR[48].nAckNum =0;   sT[0].sCP[0].sCPR[48].nSPOffsetCS  =920;  sT[0].sCP[0].sCPR[48].nSPOffsetLek = 921; 	
sT[0].sCP[0].sCPR[49].nDCStart =189;    sT[0].sCP[0].sCPR[49].nDCNum = 4;    sT[0].sCP[0].sCPR[49].nSCStart =193;    sT[0].sCP[0].sCPR[49].nAckStart  =0; 	sT[0].sCP[0].sCPR[49].nAckNum =0;   sT[0].sCP[0].sCPR[49].nSPOffsetCS  =936;  sT[0].sCP[0].sCPR[49].nSPOffsetLek = 937; 	
sT[0].sCP[0].sCPR[50].nDCStart =194;    sT[0].sCP[0].sCPR[50].nDCNum = 4;    sT[0].sCP[0].sCPR[50].nSCStart =198;    sT[0].sCP[0].sCPR[50].nAckStart  =0; 	sT[0].sCP[0].sCPR[50].nAckNum =0;   sT[0].sCP[0].sCPR[50].nSPOffsetCS  =952;  sT[0].sCP[0].sCPR[50].nSPOffsetLek = 953; 	
sT[0].sCP[0].sCPR[51].nDCStart =199;    sT[0].sCP[0].sCPR[51].nDCNum = 1;    sT[0].sCP[0].sCPR[51].nSCStart =200;    sT[0].sCP[0].sCPR[51].nAckStart  =201; sT[0].sCP[0].sCPR[51].nAckNum =1;   sT[0].sCP[0].sCPR[51].nSPOffsetCS  =968;  sT[0].sCP[0].sCPR[51].nSPOffsetLek = 969; 	
sT[0].sCP[0].sCPR[52].nDCStart =202;    sT[0].sCP[0].sCPR[52].nDCNum = 1;    sT[0].sCP[0].sCPR[52].nSCStart =203;    sT[0].sCP[0].sCPR[52].nAckStart  =204; sT[0].sCP[0].sCPR[52].nAckNum =1;   sT[0].sCP[0].sCPR[52].nSPOffsetCS  =984;  sT[0].sCP[0].sCPR[52].nSPOffsetLek = 985; 	
sT[0].sCP[0].sCPR[53].nDCStart =205;    sT[0].sCP[0].sCPR[53].nDCNum = 1;    sT[0].sCP[0].sCPR[53].nSCStart =206;    sT[0].sCP[0].sCPR[53].nAckStart  =0; 	sT[0].sCP[0].sCPR[53].nAckNum =0;   sT[0].sCP[0].sCPR[53].nSPOffsetCS  =1000; sT[0].sCP[0].sCPR[53].nSPOffsetLek = 1001; 	
sT[0].sCP[0].sCPR[54].nDCStart =208;    sT[0].sCP[0].sCPR[54].nDCNum = 1;    sT[0].sCP[0].sCPR[54].nSCStart =209;    sT[0].sCP[0].sCPR[54].nAckStart  =210; sT[0].sCP[0].sCPR[54].nAckNum =1;   sT[0].sCP[0].sCPR[54].nSPOffsetCS  =1016; sT[0].sCP[0].sCPR[54].nSPOffsetLek = 1017; 	
sT[0].sCP[0].sCPR[55].nDCStart =211;    sT[0].sCP[0].sCPR[55].nDCNum = 4;    sT[0].sCP[0].sCPR[55].nSCStart =215;    sT[0].sCP[0].sCPR[55].nAckStart  =0; 	sT[0].sCP[0].sCPR[55].nAckNum =0;   sT[0].sCP[0].sCPR[55].nSPOffsetCS  =1032;  sT[0].sCP[0].sCPR[55].nSPOffsetLek =1033; 	

sT[0].sCP[0].sCPR[56].nDCStart =216;    sT[0].sCP[0].sCPR[56].nDCNum = 1;    sT[0].sCP[0].sCPR[56].nSCStart =217;    sT[0].sCP[0].sCPR[56].nAckStart  =0; 	sT[0].sCP[0].sCPR[56].nAckNum =0;   sT[0].sCP[0].sCPR[56].nSPOffsetCS  =1048; sT[0].sCP[0].sCPR[56].nSPOffsetLek = 1049; 	
sT[0].sCP[0].sCPR[57].nDCStart =219;    sT[0].sCP[0].sCPR[57].nDCNum = 1;    sT[0].sCP[0].sCPR[57].nSCStart =220;    sT[0].sCP[0].sCPR[57].nAckStart  =0; 	sT[0].sCP[0].sCPR[57].nAckNum =0;   sT[0].sCP[0].sCPR[57].nSPOffsetCS  =1064; sT[0].sCP[0].sCPR[57].nSPOffsetLek = 1065; 	
sT[0].sCP[0].sCPR[58].nDCStart =222;    sT[0].sCP[0].sCPR[58].nDCNum = 1;    sT[0].sCP[0].sCPR[58].nSCStart =223;    sT[0].sCP[0].sCPR[58].nAckStart  =224; sT[0].sCP[0].sCPR[58].nAckNum =1;   sT[0].sCP[0].sCPR[58].nSPOffsetCS  =1080; sT[0].sCP[0].sCPR[58].nSPOffsetLek = 1081; 	
sT[0].sCP[0].sCPR[59].nDCStart =225;    sT[0].sCP[0].sCPR[59].nDCNum = 1;    sT[0].sCP[0].sCPR[59].nSCStart =226;    sT[0].sCP[0].sCPR[59].nAckStart  =227; sT[0].sCP[0].sCPR[59].nAckNum =1;   sT[0].sCP[0].sCPR[59].nSPOffsetCS  =1096; sT[0].sCP[0].sCPR[59].nSPOffsetLek = 1097; 	
sT[0].sCP[0].sCPR[60].nDCStart =228;    sT[0].sCP[0].sCPR[60].nDCNum = 1;    sT[0].sCP[0].sCPR[60].nSCStart =229;    sT[0].sCP[0].sCPR[60].nAckStart  =0; 	sT[0].sCP[0].sCPR[60].nAckNum =0;   sT[0].sCP[0].sCPR[60].nSPOffsetCS  =1112; sT[0].sCP[0].sCPR[60].nSPOffsetLek = 1113; 	
sT[0].sCP[0].sCPR[61].nDCStart =231;    sT[0].sCP[0].sCPR[61].nDCNum = 1;    sT[0].sCP[0].sCPR[61].nSCStart =232;    sT[0].sCP[0].sCPR[61].nAckStart  =233; sT[0].sCP[0].sCPR[61].nAckNum =1;   sT[0].sCP[0].sCPR[61].nSPOffsetCS  =1128; sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1129; 	
sT[0].sCP[0].sCPR[62].nDCStart =234;    sT[0].sCP[0].sCPR[62].nDCNum = 1;    sT[0].sCP[0].sCPR[62].nSCStart =235;    sT[0].sCP[0].sCPR[62].nAckStart  =236; sT[0].sCP[0].sCPR[62].nAckNum =1;   sT[0].sCP[0].sCPR[62].nSPOffsetCS  =1144; sT[0].sCP[0].sCPR[62].nSPOffsetLek = 1145; 	
sT[0].sCP[0].sCPR[63].nDCStart =237;    sT[0].sCP[0].sCPR[63].nDCNum = 1;    sT[0].sCP[0].sCPR[63].nSCStart =238;    sT[0].sCP[0].sCPR[63].nAckStart  =0; 	sT[0].sCP[0].sCPR[63].nAckNum =0;   sT[0].sCP[0].sCPR[63].nSPOffsetCS  =1160; sT[0].sCP[0].sCPR[63].nSPOffsetLek = 1161; 	
sT[0].sCP[0].sCPR[64].nDCStart =240;    sT[0].sCP[0].sCPR[64].nDCNum = 1;    sT[0].sCP[0].sCPR[64].nSCStart =241;    sT[0].sCP[0].sCPR[64].nAckStart  =242; sT[0].sCP[0].sCPR[64].nAckNum =1;   sT[0].sCP[0].sCPR[64].nSPOffsetCS  =1176; sT[0].sCP[0].sCPR[64].nSPOffsetLek = 1177; 	
sT[0].sCP[0].sCPR[65].nDCStart =243;    sT[0].sCP[0].sCPR[65].nDCNum = 1;    sT[0].sCP[0].sCPR[65].nSCStart =244;    sT[0].sCP[0].sCPR[65].nAckStart  =245; sT[0].sCP[0].sCPR[65].nAckNum =1;   sT[0].sCP[0].sCPR[65].nSPOffsetCS  =1192; sT[0].sCP[0].sCPR[65].nSPOffsetLek = 1193; 	
sT[0].sCP[0].sCPR[66].nDCStart =246;    sT[0].sCP[0].sCPR[66].nDCNum = 1;    sT[0].sCP[0].sCPR[66].nSCStart =247;    sT[0].sCP[0].sCPR[66].nAckStart  =248; sT[0].sCP[0].sCPR[66].nAckNum =1;   sT[0].sCP[0].sCPR[66].nSPOffsetCS  =1208; sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1209; 	
sT[0].sCP[0].sCPR[67].nDCStart =249;    sT[0].sCP[0].sCPR[67].nDCNum = 1;    sT[0].sCP[0].sCPR[67].nSCStart =250;    sT[0].sCP[0].sCPR[67].nAckStart  =0; 	sT[0].sCP[0].sCPR[67].nAckNum =0;   sT[0].sCP[0].sCPR[67].nSPOffsetCS  =1224; sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1225; 	

sT[0].sCP[0].sCPR[68].nDCStart =252;    sT[0].sCP[0].sCPR[68].nDCNum = 2;    sT[0].sCP[0].sCPR[68].nSCStart =256;    sT[0].sCP[0].sCPR[68].nAckStart =0;    sT[0].sCP[0].sCPR[68].nAckNum =0;   sT[0].sCP[0].sCPR[68].nSPOffsetCS =1256;  sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1257; sT[0].sCP[0].sCPR[68].nSPOffsetCS2 =1258;   sT[0].sCP[0].sCPR[68].nSPOffsetLek2 = 1259; sT[0].sCP[0].sCPR[68].nSCNum  = 2;	

sT[0].sCP[0].sCPR[69].nDCStart =258;    sT[0].sCP[0].sCPR[69].nDCNum = 1;    sT[0].sCP[0].sCPR[69].nSCStart =259;    sT[0].sCP[0].sCPR[69].nAckStart  =260; sT[0].sCP[0].sCPR[69].nAckNum =1;   sT[0].sCP[0].sCPR[69].nSPOffsetCS  =1274; sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1275; 	
sT[0].sCP[0].sCPR[70].nDCStart =261;    sT[0].sCP[0].sCPR[70].nDCNum = 1;    sT[0].sCP[0].sCPR[70].nSCStart =262;    sT[0].sCP[0].sCPR[70].nAckStart  =263; sT[0].sCP[0].sCPR[70].nAckNum =1;   sT[0].sCP[0].sCPR[70].nSPOffsetCS  =1290; sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1291; 	
sT[0].sCP[0].sCPR[71].nDCStart =264;    sT[0].sCP[0].sCPR[71].nDCNum = 1;    sT[0].sCP[0].sCPR[71].nSCStart =265;    sT[0].sCP[0].sCPR[71].nAckStart  =  0; sT[0].sCP[0].sCPR[71].nAckNum =0;   sT[0].sCP[0].sCPR[71].nSPOffsetCS  =1306; sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1307; 	

sT[0].sCP[0].sCPR[72].nDCStart =267;    sT[0].sCP[0].sCPR[72].nDCNum = 1;    sT[0].sCP[0].sCPR[72].nSCStart =268;    sT[0].sCP[0].sCPR[72].nAckStart  =  0; sT[0].sCP[0].sCPR[72].nAckNum =0;   sT[0].sCP[0].sCPR[72].nSPOffsetCS  =1322; sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1323; 	
sT[0].sCP[0].sCPR[73].nDCStart =270;    sT[0].sCP[0].sCPR[73].nDCNum = 1;    sT[0].sCP[0].sCPR[73].nSCStart =271;    sT[0].sCP[0].sCPR[73].nAckStart  =272; sT[0].sCP[0].sCPR[73].nAckNum =1;   sT[0].sCP[0].sCPR[73].nSPOffsetCS  =1338; sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1339; 	
sT[0].sCP[0].sCPR[74].nDCStart =273;    sT[0].sCP[0].sCPR[74].nDCNum = 1;    sT[0].sCP[0].sCPR[74].nSCStart =274;    sT[0].sCP[0].sCPR[74].nAckStart  =275; sT[0].sCP[0].sCPR[74].nAckNum =1;   sT[0].sCP[0].sCPR[74].nSPOffsetCS  =1354; sT[0].sCP[0].sCPR[74].nSPOffsetLek = 1355; 	
sT[0].sCP[0].sCPR[75].nDCStart =276;    sT[0].sCP[0].sCPR[75].nDCNum = 1;    sT[0].sCP[0].sCPR[75].nSCStart =277;    sT[0].sCP[0].sCPR[75].nAckStart  =278; sT[0].sCP[0].sCPR[75].nAckNum =1;   sT[0].sCP[0].sCPR[75].nSPOffsetCS  =1370; sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1371; 	
sT[0].sCP[0].sCPR[76].nDCStart =279;    sT[0].sCP[0].sCPR[76].nDCNum = 1;    sT[0].sCP[0].sCPR[76].nSCStart =280;    sT[0].sCP[0].sCPR[76].nAckStart  =281; sT[0].sCP[0].sCPR[76].nAckNum =1;   sT[0].sCP[0].sCPR[76].nSPOffsetCS  =1386; sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1387; 	

sT[0].sCP[0].sCPR[77].nDCStart =282;    sT[0].sCP[0].sCPR[77].nDCNum = 4;    sT[0].sCP[0].sCPR[77].nSCStart =286;    sT[0].sCP[0].sCPR[77].nAckStart  =0; 	sT[0].sCP[0].sCPR[77].nAckNum =0;   sT[0].sCP[0].sCPR[77].nSPOffsetCS  =1402;  sT[0].sCP[0].sCPR[77].nSPOffsetLek =1403; 	
sT[0].sCP[0].sCPR[78].nDCStart =287;    sT[0].sCP[0].sCPR[78].nDCNum = 4;    sT[0].sCP[0].sCPR[78].nSCStart =291;    sT[0].sCP[0].sCPR[78].nAckStart  =0; 	sT[0].sCP[0].sCPR[78].nAckNum =0;   sT[0].sCP[0].sCPR[78].nSPOffsetCS  =1418;  sT[0].sCP[0].sCPR[78].nSPOffsetLek =1419; 	

sT[0].sCP[0].sCPR[79].nDCStart =292;    sT[0].sCP[0].sCPR[79].nDCNum = 1;    sT[0].sCP[0].sCPR[79].nSCStart =293;    sT[0].sCP[0].sCPR[79].nAckStart  =294; sT[0].sCP[0].sCPR[79].nAckNum =1;   sT[0].sCP[0].sCPR[79].nSPOffsetCS  =1434; sT[0].sCP[0].sCPR[79].nSPOffsetLek = 1435; 	
sT[0].sCP[0].sCPR[80].nDCStart =295;    sT[0].sCP[0].sCPR[80].nDCNum = 1;    sT[0].sCP[0].sCPR[80].nSCStart =296;    sT[0].sCP[0].sCPR[80].nAckStart  =297; sT[0].sCP[0].sCPR[80].nAckNum =1;   sT[0].sCP[0].sCPR[80].nSPOffsetCS  =1450; sT[0].sCP[0].sCPR[80].nSPOffsetLek = 1451; 	
sT[0].sCP[0].sCPR[81].nDCStart =298;    sT[0].sCP[0].sCPR[81].nDCNum = 1;    sT[0].sCP[0].sCPR[81].nSCStart =299;    sT[0].sCP[0].sCPR[81].nAckStart  =300; sT[0].sCP[0].sCPR[81].nAckNum =1;   sT[0].sCP[0].sCPR[81].nSPOffsetCS  =1466; sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1467; 	
sT[0].sCP[0].sCPR[82].nDCStart =301;    sT[0].sCP[0].sCPR[82].nDCNum = 1;    sT[0].sCP[0].sCPR[82].nSCStart =302;    sT[0].sCP[0].sCPR[82].nAckStart  =303; sT[0].sCP[0].sCPR[82].nAckNum =1;   sT[0].sCP[0].sCPR[82].nSPOffsetCS  =1482; sT[0].sCP[0].sCPR[82].nSPOffsetLek = 1483; 	
sT[0].sCP[0].sCPR[83].nDCStart =304;    sT[0].sCP[0].sCPR[83].nDCNum = 1;    sT[0].sCP[0].sCPR[83].nSCStart =305;    sT[0].sCP[0].sCPR[83].nAckStart  =306; sT[0].sCP[0].sCPR[83].nAckNum =1;   sT[0].sCP[0].sCPR[83].nSPOffsetCS  =1498; sT[0].sCP[0].sCPR[83].nSPOffsetLek = 1499; 	
sT[0].sCP[0].sCPR[84].nDCStart =307;    sT[0].sCP[0].sCPR[84].nDCNum = 1;    sT[0].sCP[0].sCPR[84].nSCStart =308;    sT[0].sCP[0].sCPR[84].nAckStart  =309; sT[0].sCP[0].sCPR[84].nAckNum =1;   sT[0].sCP[0].sCPR[84].nSPOffsetCS  =1514; sT[0].sCP[0].sCPR[84].nSPOffsetLek = 1515; 	
sT[0].sCP[0].sCPR[85].nDCStart =310;    sT[0].sCP[0].sCPR[85].nDCNum = 1;    sT[0].sCP[0].sCPR[85].nSCStart =311;    sT[0].sCP[0].sCPR[85].nAckStart  =312; sT[0].sCP[0].sCPR[85].nAckNum =1;   sT[0].sCP[0].sCPR[85].nSPOffsetCS  =1530; sT[0].sCP[0].sCPR[85].nSPOffsetLek = 1531; 	
sT[0].sCP[0].sCPR[86].nDCStart =313;    sT[0].sCP[0].sCPR[86].nDCNum = 1;    sT[0].sCP[0].sCPR[86].nSCStart =314;    sT[0].sCP[0].sCPR[86].nAckStart  =315; sT[0].sCP[0].sCPR[86].nAckNum =1;   sT[0].sCP[0].sCPR[86].nSPOffsetCS  =1546; sT[0].sCP[0].sCPR[86].nSPOffsetLek = 1547; 	
sT[0].sCP[0].sCPR[87].nDCStart =316;    sT[0].sCP[0].sCPR[87].nDCNum = 1;    sT[0].sCP[0].sCPR[87].nSCStart =317;    sT[0].sCP[0].sCPR[87].nAckStart  =318; sT[0].sCP[0].sCPR[87].nAckNum =1;   sT[0].sCP[0].sCPR[87].nSPOffsetCS  =1562; sT[0].sCP[0].sCPR[87].nSPOffsetLek = 1563; 	
sT[0].sCP[0].sCPR[88].nDCStart =319;    sT[0].sCP[0].sCPR[88].nDCNum = 1;    sT[0].sCP[0].sCPR[88].nSCStart =320;    sT[0].sCP[0].sCPR[88].nAckStart  =321; sT[0].sCP[0].sCPR[88].nAckNum =1;   sT[0].sCP[0].sCPR[88].nSPOffsetCS  =1578; sT[0].sCP[0].sCPR[88].nSPOffsetLek = 1579; 	
sT[0].sCP[0].sCPR[89].nDCStart =322;    sT[0].sCP[0].sCPR[89].nDCNum = 1;    sT[0].sCP[0].sCPR[89].nSCStart =323;    sT[0].sCP[0].sCPR[89].nAckStart  =324; sT[0].sCP[0].sCPR[89].nAckNum =1;   sT[0].sCP[0].sCPR[89].nSPOffsetCS  =1594; sT[0].sCP[0].sCPR[89].nSPOffsetLek = 1595; 	
sT[0].sCP[0].sCPR[90].nDCStart =325;    sT[0].sCP[0].sCPR[90].nDCNum = 1;    sT[0].sCP[0].sCPR[90].nSCStart =326;    sT[0].sCP[0].sCPR[90].nAckStart  =327; sT[0].sCP[0].sCPR[90].nAckNum =1;   sT[0].sCP[0].sCPR[90].nSPOffsetCS  =1610; sT[0].sCP[0].sCPR[90].nSPOffsetLek = 1611; 	
sT[0].sCP[0].sCPR[91].nDCStart =328;    sT[0].sCP[0].sCPR[91].nDCNum = 1;    sT[0].sCP[0].sCPR[91].nSCStart =329;    sT[0].sCP[0].sCPR[91].nAckStart  =330; sT[0].sCP[0].sCPR[91].nAckNum =1;   sT[0].sCP[0].sCPR[91].nSPOffsetCS  =1626; sT[0].sCP[0].sCPR[91].nSPOffsetLek = 1627; 	
sT[0].sCP[0].sCPR[92].nDCStart =331;    sT[0].sCP[0].sCPR[92].nDCNum = 1;    sT[0].sCP[0].sCPR[92].nSCStart =332;    sT[0].sCP[0].sCPR[92].nAckStart  =333; sT[0].sCP[0].sCPR[92].nAckNum =1;   sT[0].sCP[0].sCPR[92].nSPOffsetCS  =1642; sT[0].sCP[0].sCPR[92].nSPOffsetLek = 1643; 	
sT[0].sCP[0].sCPR[93].nDCStart =334;    sT[0].sCP[0].sCPR[93].nDCNum = 1;    sT[0].sCP[0].sCPR[93].nSCStart =335;    sT[0].sCP[0].sCPR[93].nAckStart  =336; sT[0].sCP[0].sCPR[93].nAckNum =1;   sT[0].sCP[0].sCPR[93].nSPOffsetCS  =1658; sT[0].sCP[0].sCPR[93].nSPOffsetLek = 1659; 	
sT[0].sCP[0].sCPR[94].nDCStart =337;    sT[0].sCP[0].sCPR[94].nDCNum = 1;    sT[0].sCP[0].sCPR[94].nSCStart =338;    sT[0].sCP[0].sCPR[94].nAckStart  =339; sT[0].sCP[0].sCPR[94].nAckNum =1;   sT[0].sCP[0].sCPR[94].nSPOffsetCS  =1674; sT[0].sCP[0].sCPR[94].nSPOffsetLek = 1675; 	
sT[0].sCP[0].sCPR[95].nDCStart =340;    sT[0].sCP[0].sCPR[95].nDCNum = 1;    sT[0].sCP[0].sCPR[95].nSCStart =341;    sT[0].sCP[0].sCPR[95].nAckStart  =342; sT[0].sCP[0].sCPR[95].nAckNum =1;   sT[0].sCP[0].sCPR[95].nSPOffsetCS  =1690; sT[0].sCP[0].sCPR[95].nSPOffsetLek = 1691; 	
sT[0].sCP[0].sCPR[96].nDCStart =343;    sT[0].sCP[0].sCPR[96].nDCNum = 1;    sT[0].sCP[0].sCPR[96].nSCStart =344;    sT[0].sCP[0].sCPR[96].nAckStart  =345; sT[0].sCP[0].sCPR[96].nAckNum =1;   sT[0].sCP[0].sCPR[96].nSPOffsetCS  =1706; sT[0].sCP[0].sCPR[96].nSPOffsetLek = 1707; 	
sT[0].sCP[0].sCPR[97].nDCStart =346;    sT[0].sCP[0].sCPR[97].nDCNum = 1;    sT[0].sCP[0].sCPR[97].nSCStart =347;    sT[0].sCP[0].sCPR[97].nAckStart  =348; sT[0].sCP[0].sCPR[97].nAckNum =1;   sT[0].sCP[0].sCPR[97].nSPOffsetCS  =1722; sT[0].sCP[0].sCPR[97].nSPOffsetLek = 1723; 	
sT[0].sCP[0].sCPR[98].nDCStart =349;    sT[0].sCP[0].sCPR[98].nDCNum = 1;    sT[0].sCP[0].sCPR[98].nSCStart =350;    sT[0].sCP[0].sCPR[98].nAckStart  =351; sT[0].sCP[0].sCPR[98].nAckNum =1;   sT[0].sCP[0].sCPR[98].nSPOffsetCS  =1738; sT[0].sCP[0].sCPR[98].nSPOffsetLek = 1739; 	
sT[0].sCP[0].sCPR[99].nDCStart =352;    sT[0].sCP[0].sCPR[99].nDCNum = 1;    sT[0].sCP[0].sCPR[99].nSCStart =353;    sT[0].sCP[0].sCPR[99].nAckStart  =354; sT[0].sCP[0].sCPR[99].nAckNum =1;   sT[0].sCP[0].sCPR[99].nSPOffsetCS  =1754; sT[0].sCP[0].sCPR[99].nSPOffsetLek = 1755; 	
sT[0].sCP[0].sCPR[100].nDCStart=355;    sT[0].sCP[0].sCPR[100].nDCNum= 1;    sT[0].sCP[0].sCPR[100].nSCStart=356;    sT[0].sCP[0].sCPR[100].nAckStart =357; sT[0].sCP[0].sCPR[100].nAckNum=1;   sT[0].sCP[0].sCPR[100].nSPOffsetCS =1770; sT[0].sCP[0].sCPR[100].nSPOffsetLek= 1771; 	
sT[0].sCP[0].sCPR[101].nDCStart=358;    sT[0].sCP[0].sCPR[101].nDCNum= 1;    sT[0].sCP[0].sCPR[101].nSCStart=359;    sT[0].sCP[0].sCPR[101].nAckStart =360; sT[0].sCP[0].sCPR[101].nAckNum=1;   sT[0].sCP[0].sCPR[101].nSPOffsetCS =1786; sT[0].sCP[0].sCPR[101].nSPOffsetLek= 1787; 	
sT[0].sCP[0].sCPR[102].nDCStart=361;    sT[0].sCP[0].sCPR[102].nDCNum= 1;    sT[0].sCP[0].sCPR[102].nSCStart=362;    sT[0].sCP[0].sCPR[102].nAckStart =363; sT[0].sCP[0].sCPR[102].nAckNum=1;   sT[0].sCP[0].sCPR[102].nSPOffsetCS =1802; sT[0].sCP[0].sCPR[102].nSPOffsetLek= 1803; 	
sT[0].sCP[0].sCPR[103].nDCStart=364;    sT[0].sCP[0].sCPR[103].nDCNum= 4;    sT[0].sCP[0].sCPR[103].nSCStart=368;    sT[0].sCP[0].sCPR[103].nAckStart =  0; sT[0].sCP[0].sCPR[103].nAckNum=0;   sT[0].sCP[0].sCPR[103].nSPOffsetCS =1818; sT[0].sCP[0].sCPR[103].nSPOffsetLek= 1819; 	
sT[0].sCP[0].sCPR[104].nDCStart=369;    sT[0].sCP[0].sCPR[104].nDCNum= 4;    sT[0].sCP[0].sCPR[104].nSCStart=373;    sT[0].sCP[0].sCPR[104].nAckStart =  0; sT[0].sCP[0].sCPR[104].nAckNum=0;   sT[0].sCP[0].sCPR[104].nSPOffsetCS =1834; sT[0].sCP[0].sCPR[104].nSPOffsetLek= 1835; 	
sT[0].sCP[0].sCPR[105].nDCStart=374;    sT[0].sCP[0].sCPR[105].nDCNum= 4;    sT[0].sCP[0].sCPR[105].nSCStart=378;    sT[0].sCP[0].sCPR[105].nAckStart =  0; sT[0].sCP[0].sCPR[105].nAckNum=0;   sT[0].sCP[0].sCPR[105].nSPOffsetCS =1850; sT[0].sCP[0].sCPR[105].nSPOffsetLek= 1851; 	

sT[0].sCP[0].sCPR[106].nDCStart=379;    sT[0].sCP[0].sCPR[106].nDCNum= 1;    sT[0].sCP[0].sCPR[106].nSCStart=380;    sT[0].sCP[0].sCPR[106].nAckStart =381; sT[0].sCP[0].sCPR[106].nAckNum=1;   sT[0].sCP[0].sCPR[106].nSPOffsetCS =1866; sT[0].sCP[0].sCPR[106].nSPOffsetLek= 1867; 	
sT[0].sCP[0].sCPR[107].nDCStart=382;    sT[0].sCP[0].sCPR[107].nDCNum= 1;    sT[0].sCP[0].sCPR[107].nSCStart=383;    sT[0].sCP[0].sCPR[107].nAckStart =384; sT[0].sCP[0].sCPR[107].nAckNum=1;   sT[0].sCP[0].sCPR[107].nSPOffsetCS =1882; sT[0].sCP[0].sCPR[107].nSPOffsetLek= 1883; 	
sT[0].sCP[0].sCPR[108].nDCStart=385;    sT[0].sCP[0].sCPR[108].nDCNum= 1;    sT[0].sCP[0].sCPR[108].nSCStart=386;    sT[0].sCP[0].sCPR[108].nAckStart =387; sT[0].sCP[0].sCPR[108].nAckNum=1;   sT[0].sCP[0].sCPR[108].nSPOffsetCS =1898; sT[0].sCP[0].sCPR[108].nSPOffsetLek= 1899; 	
sT[0].sCP[0].sCPR[109].nDCStart=388;    sT[0].sCP[0].sCPR[109].nDCNum= 1;    sT[0].sCP[0].sCPR[109].nSCStart=389;    sT[0].sCP[0].sCPR[109].nAckStart =390; sT[0].sCP[0].sCPR[109].nAckNum=1;   sT[0].sCP[0].sCPR[109].nSPOffsetCS =1914; sT[0].sCP[0].sCPR[109].nSPOffsetLek= 1915; 	
sT[0].sCP[0].sCPR[110].nDCStart=391;    sT[0].sCP[0].sCPR[110].nDCNum= 1;    sT[0].sCP[0].sCPR[110].nSCStart=392;    sT[0].sCP[0].sCPR[110].nAckStart =393; sT[0].sCP[0].sCPR[110].nAckNum=1;   sT[0].sCP[0].sCPR[110].nSPOffsetCS =1930; sT[0].sCP[0].sCPR[110].nSPOffsetLek= 1931; 	
sT[0].sCP[0].sCPR[111].nDCStart=394;    sT[0].sCP[0].sCPR[111].nDCNum= 1;    sT[0].sCP[0].sCPR[111].nSCStart=395;    sT[0].sCP[0].sCPR[111].nAckStart =396; sT[0].sCP[0].sCPR[111].nAckNum=1;   sT[0].sCP[0].sCPR[111].nSPOffsetCS =1946; sT[0].sCP[0].sCPR[111].nSPOffsetLek= 1947; 	
sT[0].sCP[0].sCPR[112].nDCStart=397;    sT[0].sCP[0].sCPR[112].nDCNum= 1;    sT[0].sCP[0].sCPR[112].nSCStart=398;    sT[0].sCP[0].sCPR[112].nAckStart =399; sT[0].sCP[0].sCPR[112].nAckNum=1;   sT[0].sCP[0].sCPR[112].nSPOffsetCS =1962; sT[0].sCP[0].sCPR[112].nSPOffsetLek= 1963; 	
sT[0].sCP[0].sCPR[113].nDCStart=400;    sT[0].sCP[0].sCPR[113].nDCNum= 1;    sT[0].sCP[0].sCPR[113].nSCStart=401;    sT[0].sCP[0].sCPR[113].nAckStart =402; sT[0].sCP[0].sCPR[113].nAckNum=1;   sT[0].sCP[0].sCPR[113].nSPOffsetCS =1978; sT[0].sCP[0].sCPR[113].nSPOffsetLek= 1979; 	
sT[0].sCP[0].sCPR[114].nDCStart=403;    sT[0].sCP[0].sCPR[114].nDCNum= 1;    sT[0].sCP[0].sCPR[114].nSCStart=404;    sT[0].sCP[0].sCPR[114].nAckStart =405; sT[0].sCP[0].sCPR[114].nAckNum=1;   sT[0].sCP[0].sCPR[114].nSPOffsetCS =1994; sT[0].sCP[0].sCPR[114].nSPOffsetLek= 1995; 	
sT[0].sCP[0].sCPR[115].nDCStart=406;    sT[0].sCP[0].sCPR[115].nDCNum= 1;    sT[0].sCP[0].sCPR[115].nSCStart=407;    sT[0].sCP[0].sCPR[115].nAckStart =408; sT[0].sCP[0].sCPR[115].nAckNum=1;   sT[0].sCP[0].sCPR[115].nSPOffsetCS =2010; sT[0].sCP[0].sCPR[115].nSPOffsetLek= 2011; 	
sT[0].sCP[0].sCPR[116].nDCStart=409;    sT[0].sCP[0].sCPR[116].nDCNum= 1;    sT[0].sCP[0].sCPR[116].nSCStart=410;    sT[0].sCP[0].sCPR[116].nAckStart =411; sT[0].sCP[0].sCPR[116].nAckNum=1;   sT[0].sCP[0].sCPR[116].nSPOffsetCS =2026; sT[0].sCP[0].sCPR[116].nSPOffsetLek= 2027; 	

sT[0].sCP[0].sCPR[117].nDCStart=412;    sT[0].sCP[0].sCPR[117].nDCNum= 4;    sT[0].sCP[0].sCPR[117].nSCStart=417;    sT[0].sCP[0].sCPR[117].nAckStart =  0; sT[0].sCP[0].sCPR[117].nAckNum=0;   sT[0].sCP[0].sCPR[117].nSPOffsetCS =2494; sT[0].sCP[0].sCPR[117].nSPOffsetLek= 2495; 	

sT[0].sCP[0].sCPR[118].nDCStart=418;    sT[0].sCP[0].sCPR[118].nDCNum= 1;    sT[0].sCP[0].sCPR[118].nSCStart=419;    sT[0].sCP[0].sCPR[118].nAckStart =420; sT[0].sCP[0].sCPR[118].nAckNum=1;   sT[0].sCP[0].sCPR[118].nSPOffsetCS =2163; sT[0].sCP[0].sCPR[118].nSPOffsetLek= 2164; 	
sT[0].sCP[0].sCPR[119].nDCStart=421;    sT[0].sCP[0].sCPR[119].nDCNum= 1;    sT[0].sCP[0].sCPR[119].nSCStart=422;    sT[0].sCP[0].sCPR[119].nAckStart =423; sT[0].sCP[0].sCPR[119].nAckNum=1;   sT[0].sCP[0].sCPR[119].nSPOffsetCS =2179; sT[0].sCP[0].sCPR[119].nSPOffsetLek= 2180; 	
sT[0].sCP[0].sCPR[120].nDCStart=424;    sT[0].sCP[0].sCPR[120].nDCNum= 1;    sT[0].sCP[0].sCPR[120].nSCStart=425;    sT[0].sCP[0].sCPR[120].nAckStart =426; sT[0].sCP[0].sCPR[120].nAckNum=1;   sT[0].sCP[0].sCPR[120].nSPOffsetCS =2195; sT[0].sCP[0].sCPR[120].nSPOffsetLek= 2196; 	

sT[0].sCP[0].sCPR[121].nDCStart=427;    sT[0].sCP[0].sCPR[121].nDCNum= 4;    sT[0].sCP[0].sCPR[121].nSCStart=432;    sT[0].sCP[0].sCPR[121].nAckStart =431; sT[0].sCP[0].sCPR[121].nAckNum=1;   sT[0].sCP[0].sCPR[121].nSPOffsetCS =2232; sT[0].sCP[0].sCPR[121].nSPOffsetLek= 2233; 	
sT[0].sCP[0].sCPR[122].nDCStart=448;    sT[0].sCP[0].sCPR[122].nDCNum= 1;    sT[0].sCP[0].sCPR[122].nSCStart=449;    sT[0].sCP[0].sCPR[122].nAckStart =450;	sT[0].sCP[0].sCPR[122].nAckNum=1;   sT[0].sCP[0].sCPR[122].nSPOffsetCS =2298; sT[0].sCP[0].sCPR[122].nSPOffsetLek= 2299; 	
sT[0].sCP[0].sCPR[123].nDCStart=433;    sT[0].sCP[0].sCPR[123].nDCNum= 4;    sT[0].sCP[0].sCPR[123].nSCStart=437;    sT[0].sCP[0].sCPR[123].nAckStart =0; 	sT[0].sCP[0].sCPR[123].nAckNum=0;   sT[0].sCP[0].sCPR[123].nSPOffsetCS =2248; sT[0].sCP[0].sCPR[123].nSPOffsetLek= 2249; 	
sT[0].sCP[0].sCPR[124].nDCStart=438;    sT[0].sCP[0].sCPR[124].nDCNum= 4;    sT[0].sCP[0].sCPR[124].nSCStart=442;    sT[0].sCP[0].sCPR[124].nAckStart =0; 	sT[0].sCP[0].sCPR[124].nAckNum=0;   sT[0].sCP[0].sCPR[124].nSPOffsetCS =2264; sT[0].sCP[0].sCPR[124].nSPOffsetLek= 2265; 	
sT[0].sCP[0].sCPR[125].nDCStart=443;    sT[0].sCP[0].sCPR[125].nDCNum= 4;    sT[0].sCP[0].sCPR[125].nSCStart=447;    sT[0].sCP[0].sCPR[125].nAckStart =0; 	sT[0].sCP[0].sCPR[125].nAckNum=0;   sT[0].sCP[0].sCPR[125].nSPOffsetCS =2282; sT[0].sCP[0].sCPR[125].nSPOffsetLek= 2283; 	
sT[0].sCP[0].sCPR[126].nDCStart=454;    sT[0].sCP[0].sCPR[126].nDCNum= 4;    sT[0].sCP[0].sCPR[126].nSCStart=459;    sT[0].sCP[0].sCPR[126].nAckStart =458;	sT[0].sCP[0].sCPR[126].nAckNum=1;   sT[0].sCP[0].sCPR[126].nSPOffsetCS =2351; sT[0].sCP[0].sCPR[126].nSPOffsetLek= 2352; 	
sT[0].sCP[0].sCPR[127].nDCStart=460;    sT[0].sCP[0].sCPR[127].nDCNum= 1;    sT[0].sCP[0].sCPR[127].nSCStart=461;    sT[0].sCP[0].sCPR[127].nAckStart =0; 	sT[0].sCP[0].sCPR[127].nAckNum=0;   sT[0].sCP[0].sCPR[127].nSPOffsetCS =2367; sT[0].sCP[0].sCPR[127].nSPOffsetLek= 2368; 	

sT[0].sCP[0].sCPR[128].nDCStart=463;    sT[0].sCP[0].sCPR[128].nDCNum= 4;    sT[0].sCP[0].sCPR[128].nSCStart=467;    sT[0].sCP[0].sCPR[128].nAckStart =0; 	sT[0].sCP[0].sCPR[128].nAckNum=0;   sT[0].sCP[0].sCPR[128].nSPOffsetCS =2042; sT[0].sCP[0].sCPR[128].nSPOffsetLek= 2043; 	
sT[0].sCP[0].sCPR[129].nDCStart=468;    sT[0].sCP[0].sCPR[129].nDCNum= 4;    sT[0].sCP[0].sCPR[129].nSCStart=472;    sT[0].sCP[0].sCPR[129].nAckStart =0; 	sT[0].sCP[0].sCPR[129].nAckNum=0;   sT[0].sCP[0].sCPR[129].nSPOffsetCS =2058; sT[0].sCP[0].sCPR[129].nSPOffsetLek= 2059; 	
sT[0].sCP[0].sCPR[130].nDCStart=473;    sT[0].sCP[0].sCPR[130].nDCNum= 4;    sT[0].sCP[0].sCPR[130].nSCStart=477;    sT[0].sCP[0].sCPR[130].nAckStart =0; 	sT[0].sCP[0].sCPR[130].nAckNum=0;   sT[0].sCP[0].sCPR[130].nSPOffsetCS =2074; sT[0].sCP[0].sCPR[130].nSPOffsetLek= 2075; 	
sT[0].sCP[0].sCPR[131].nDCStart=478;    sT[0].sCP[0].sCPR[131].nDCNum= 4;    sT[0].sCP[0].sCPR[131].nSCStart=482;    sT[0].sCP[0].sCPR[131].nAckStart =0; 	sT[0].sCP[0].sCPR[131].nAckNum=0;   sT[0].sCP[0].sCPR[131].nSPOffsetCS =2090; sT[0].sCP[0].sCPR[131].nSPOffsetLek= 2091; 	
sT[0].sCP[0].sCPR[132].nDCStart=483;    sT[0].sCP[0].sCPR[132].nDCNum= 4;    sT[0].sCP[0].sCPR[132].nSCStart=487;    sT[0].sCP[0].sCPR[132].nAckStart =0; 	sT[0].sCP[0].sCPR[132].nAckNum=0;   sT[0].sCP[0].sCPR[132].nSPOffsetCS =2106; sT[0].sCP[0].sCPR[132].nSPOffsetLek= 2107; 	
sT[0].sCP[0].sCPR[133].nDCStart=451;    sT[0].sCP[0].sCPR[133].nDCNum= 1;    sT[0].sCP[0].sCPR[133].nSCStart=452;    sT[0].sCP[0].sCPR[133].nAckStart =453;	sT[0].sCP[0].sCPR[133].nAckNum=1;   sT[0].sCP[0].sCPR[133].nSPOffsetCS =2314; sT[0].sCP[0].sCPR[133].nSPOffsetLek= 2315; 	
sT[0].sCP[0].sCPR[134].nDCStart=855;    sT[0].sCP[0].sCPR[134].nDCNum= 8;    sT[0].sCP[0].sCPR[134].nSCStart=863;    sT[0].sCP[0].sCPR[134].nAckStart =0;	sT[0].sCP[0].sCPR[134].nAckNum=0;   sT[0].sCP[0].sCPR[134].nSPOffsetCS =2124; sT[0].sCP[0].sCPR[134].nSPOffsetLek= 2125; 	
sT[0].sCP[0].sCPR[135].nDCStart=493;    sT[0].sCP[0].sCPR[135].nDCNum= 1;    sT[0].sCP[0].sCPR[135].nSCStart=494;    sT[0].sCP[0].sCPR[135].nAckStart =495;	sT[0].sCP[0].sCPR[135].nAckNum=1;   sT[0].sCP[0].sCPR[135].nSPOffsetCS =2516; sT[0].sCP[0].sCPR[135].nSPOffsetLek= 2517; 	
sT[0].sCP[0].sCPR[136].nDCStart=496;    sT[0].sCP[0].sCPR[136].nDCNum= 1;    sT[0].sCP[0].sCPR[136].nSCStart=497;    sT[0].sCP[0].sCPR[136].nAckStart =0;	sT[0].sCP[0].sCPR[136].nAckNum=0;   sT[0].sCP[0].sCPR[136].nSPOffsetCS =2532; sT[0].sCP[0].sCPR[136].nSPOffsetLek= 2533; 	

sT[0].sCP[0].sCPR[137].nDCStart=500;    sT[0].sCP[0].sCPR[137].nDCNum= 4;    sT[0].sCP[0].sCPR[137].nSCStart=504;    sT[0].sCP[0].sCPR[137].nAckStart =0;	sT[0].sCP[0].sCPR[137].nAckNum=0;   sT[0].sCP[0].sCPR[137].nSPOffsetCS =2548; sT[0].sCP[0].sCPR[137].nSPOffsetLek= 2549; 	
sT[0].sCP[0].sCPR[138].nDCStart=505;    sT[0].sCP[0].sCPR[138].nDCNum= 4;    sT[0].sCP[0].sCPR[138].nSCStart=509;    sT[0].sCP[0].sCPR[138].nAckStart =0;	sT[0].sCP[0].sCPR[138].nAckNum=0;   sT[0].sCP[0].sCPR[138].nSPOffsetCS =2564; sT[0].sCP[0].sCPR[138].nSPOffsetLek= 2565; 	
sT[0].sCP[0].sCPR[139].nDCStart=510;    sT[0].sCP[0].sCPR[139].nDCNum= 4;    sT[0].sCP[0].sCPR[139].nSCStart=514;    sT[0].sCP[0].sCPR[139].nAckStart =0;	sT[0].sCP[0].sCPR[139].nAckNum=0;   sT[0].sCP[0].sCPR[139].nSPOffsetCS =2582; sT[0].sCP[0].sCPR[139].nSPOffsetLek= 2583; 	
sT[0].sCP[0].sCPR[140].nDCStart=515;    sT[0].sCP[0].sCPR[140].nDCNum= 4;    sT[0].sCP[0].sCPR[140].nSCStart=519;    sT[0].sCP[0].sCPR[140].nAckStart =0;	sT[0].sCP[0].sCPR[140].nAckNum=0;   sT[0].sCP[0].sCPR[140].nSPOffsetCS =2600; sT[0].sCP[0].sCPR[140].nSPOffsetLek= 2601; 	
sT[0].sCP[0].sCPR[141].nDCStart=520;    sT[0].sCP[0].sCPR[141].nDCNum= 4;    sT[0].sCP[0].sCPR[141].nSCStart=524;    sT[0].sCP[0].sCPR[141].nAckStart =0;	sT[0].sCP[0].sCPR[141].nAckNum=0;   sT[0].sCP[0].sCPR[141].nSPOffsetCS =2616; sT[0].sCP[0].sCPR[141].nSPOffsetLek= 2617; 	
sT[0].sCP[0].sCPR[142].nDCStart=525;    sT[0].sCP[0].sCPR[142].nDCNum= 4;    sT[0].sCP[0].sCPR[142].nSCStart=529;    sT[0].sCP[0].sCPR[142].nAckStart =0;	sT[0].sCP[0].sCPR[142].nAckNum=0;   sT[0].sCP[0].sCPR[142].nSPOffsetCS =2632; sT[0].sCP[0].sCPR[142].nSPOffsetLek= 2633; 	

sT[0].sCP[0].sCPR[143].nDCStart=530;    sT[0].sCP[0].sCPR[143].nDCNum= 1;    sT[0].sCP[0].sCPR[143].nSCStart=531;    sT[0].sCP[0].sCPR[143].nAckStart =532;	sT[0].sCP[0].sCPR[143].nAckNum=1;   sT[0].sCP[0].sCPR[143].nSPOffsetCS =2648; sT[0].sCP[0].sCPR[143].nSPOffsetLek= 2649; 	
sT[0].sCP[0].sCPR[144].nDCStart=533;    sT[0].sCP[0].sCPR[144].nDCNum= 1;    sT[0].sCP[0].sCPR[144].nSCStart=534;    sT[0].sCP[0].sCPR[144].nAckStart =535;	sT[0].sCP[0].sCPR[144].nAckNum=1;   sT[0].sCP[0].sCPR[144].nSPOffsetCS =2664; sT[0].sCP[0].sCPR[144].nSPOffsetLek= 2665; 	
sT[0].sCP[0].sCPR[145].nDCStart=536;    sT[0].sCP[0].sCPR[145].nDCNum= 1;    sT[0].sCP[0].sCPR[145].nSCStart=537;    sT[0].sCP[0].sCPR[145].nAckStart =538;	sT[0].sCP[0].sCPR[145].nAckNum=1;   sT[0].sCP[0].sCPR[145].nSPOffsetCS =2680; sT[0].sCP[0].sCPR[145].nSPOffsetLek= 2681; 	
sT[0].sCP[0].sCPR[146].nDCStart=539;    sT[0].sCP[0].sCPR[146].nDCNum= 1;    sT[0].sCP[0].sCPR[146].nSCStart=540;    sT[0].sCP[0].sCPR[146].nAckStart =541;	sT[0].sCP[0].sCPR[146].nAckNum=1;   sT[0].sCP[0].sCPR[146].nSPOffsetCS =2696; sT[0].sCP[0].sCPR[146].nSPOffsetLek= 2697; 	
sT[0].sCP[0].sCPR[147].nDCStart=542;    sT[0].sCP[0].sCPR[147].nDCNum= 1;    sT[0].sCP[0].sCPR[147].nSCStart=543;    sT[0].sCP[0].sCPR[147].nAckStart =544;	sT[0].sCP[0].sCPR[147].nAckNum=1;   sT[0].sCP[0].sCPR[147].nSPOffsetCS =2712; sT[0].sCP[0].sCPR[147].nSPOffsetLek= 2713; 	
sT[0].sCP[0].sCPR[148].nDCStart=545;    sT[0].sCP[0].sCPR[148].nDCNum= 1;    sT[0].sCP[0].sCPR[148].nSCStart=546;    sT[0].sCP[0].sCPR[148].nAckStart =547;	sT[0].sCP[0].sCPR[148].nAckNum=1;   sT[0].sCP[0].sCPR[148].nSPOffsetCS =2728; sT[0].sCP[0].sCPR[148].nSPOffsetLek= 2729; 	
sT[0].sCP[0].sCPR[149].nDCStart=548;    sT[0].sCP[0].sCPR[149].nDCNum= 1;    sT[0].sCP[0].sCPR[149].nSCStart=549;    sT[0].sCP[0].sCPR[149].nAckStart =550;	sT[0].sCP[0].sCPR[149].nAckNum=1;   sT[0].sCP[0].sCPR[149].nSPOffsetCS =2744; sT[0].sCP[0].sCPR[149].nSPOffsetLek= 2745; 	
sT[0].sCP[0].sCPR[150].nDCStart=551;    sT[0].sCP[0].sCPR[150].nDCNum= 1;    sT[0].sCP[0].sCPR[150].nSCStart=552;    sT[0].sCP[0].sCPR[150].nAckStart =553;	sT[0].sCP[0].sCPR[150].nAckNum=1;   sT[0].sCP[0].sCPR[150].nSPOffsetCS =2760; sT[0].sCP[0].sCPR[150].nSPOffsetLek= 2761; 	
sT[0].sCP[0].sCPR[151].nDCStart=554;    sT[0].sCP[0].sCPR[151].nDCNum= 1;    sT[0].sCP[0].sCPR[151].nSCStart=555;    sT[0].sCP[0].sCPR[151].nAckStart =556;	sT[0].sCP[0].sCPR[151].nAckNum=1;   sT[0].sCP[0].sCPR[151].nSPOffsetCS =2776; sT[0].sCP[0].sCPR[151].nSPOffsetLek= 2777; 	
sT[0].sCP[0].sCPR[152].nDCStart=557;    sT[0].sCP[0].sCPR[152].nDCNum= 1;    sT[0].sCP[0].sCPR[152].nSCStart=558;    sT[0].sCP[0].sCPR[152].nAckStart =559;	sT[0].sCP[0].sCPR[152].nAckNum=1;   sT[0].sCP[0].sCPR[152].nSPOffsetCS =2792; sT[0].sCP[0].sCPR[152].nSPOffsetLek= 2793; 	
sT[0].sCP[0].sCPR[153].nDCStart=560;    sT[0].sCP[0].sCPR[153].nDCNum= 1;    sT[0].sCP[0].sCPR[153].nSCStart=561;    sT[0].sCP[0].sCPR[153].nAckStart =562;	sT[0].sCP[0].sCPR[153].nAckNum=1;   sT[0].sCP[0].sCPR[153].nSPOffsetCS =2808; sT[0].sCP[0].sCPR[153].nSPOffsetLek= 2809; 	
sT[0].sCP[0].sCPR[154].nDCStart=563;    sT[0].sCP[0].sCPR[154].nDCNum= 1;    sT[0].sCP[0].sCPR[154].nSCStart=564;    sT[0].sCP[0].sCPR[154].nAckStart =565;	sT[0].sCP[0].sCPR[154].nAckNum=1;   sT[0].sCP[0].sCPR[154].nSPOffsetCS =2824; sT[0].sCP[0].sCPR[154].nSPOffsetLek= 2825; 	
sT[0].sCP[0].sCPR[155].nDCStart=566;    sT[0].sCP[0].sCPR[155].nDCNum= 1;    sT[0].sCP[0].sCPR[155].nSCStart=567;    sT[0].sCP[0].sCPR[155].nAckStart =568;	sT[0].sCP[0].sCPR[155].nAckNum=1;   sT[0].sCP[0].sCPR[155].nSPOffsetCS =2840; sT[0].sCP[0].sCPR[155].nSPOffsetLek= 2841; 	
sT[0].sCP[0].sCPR[156].nDCStart=569;    sT[0].sCP[0].sCPR[156].nDCNum= 1;    sT[0].sCP[0].sCPR[156].nSCStart=570;    sT[0].sCP[0].sCPR[156].nAckStart =571;	sT[0].sCP[0].sCPR[156].nAckNum=1;   sT[0].sCP[0].sCPR[156].nSPOffsetCS =2856; sT[0].sCP[0].sCPR[156].nSPOffsetLek= 2857; 	
sT[0].sCP[0].sCPR[157].nDCStart=572;    sT[0].sCP[0].sCPR[157].nDCNum= 1;    sT[0].sCP[0].sCPR[157].nSCStart=573;    sT[0].sCP[0].sCPR[157].nAckStart =574;	sT[0].sCP[0].sCPR[157].nAckNum=1;   sT[0].sCP[0].sCPR[157].nSPOffsetCS =2872; sT[0].sCP[0].sCPR[157].nSPOffsetLek= 2873; 	
sT[0].sCP[0].sCPR[158].nDCStart=575;    sT[0].sCP[0].sCPR[158].nDCNum= 1;    sT[0].sCP[0].sCPR[158].nSCStart=576;    sT[0].sCP[0].sCPR[158].nAckStart =577;	sT[0].sCP[0].sCPR[158].nAckNum=1;   sT[0].sCP[0].sCPR[158].nSPOffsetCS =2888; sT[0].sCP[0].sCPR[158].nSPOffsetLek= 2889; 	
sT[0].sCP[0].sCPR[159].nDCStart=578;    sT[0].sCP[0].sCPR[159].nDCNum= 1;    sT[0].sCP[0].sCPR[159].nSCStart=579;    sT[0].sCP[0].sCPR[159].nAckStart =580;	sT[0].sCP[0].sCPR[159].nAckNum=1;   sT[0].sCP[0].sCPR[159].nSPOffsetCS =2904; sT[0].sCP[0].sCPR[159].nSPOffsetLek= 2905; 	
sT[0].sCP[0].sCPR[160].nDCStart=0;    	sT[0].sCP[0].sCPR[160].nDCNum= 0;    sT[0].sCP[0].sCPR[160].nSCStart=581;    sT[0].sCP[0].sCPR[160].nAckStart =0;	sT[0].sCP[0].sCPR[160].nAckNum=0;   sT[0].sCP[0].sCPR[160].nSPOffsetCS =2131; sT[0].sCP[0].sCPR[160].nSPOffsetLek= 2132; 	
sT[0].sCP[0].sCPR[161].nDCStart=582;    sT[0].sCP[0].sCPR[161].nDCNum= 1;    sT[0].sCP[0].sCPR[161].nSCStart=583;    sT[0].sCP[0].sCPR[161].nAckStart =0;	sT[0].sCP[0].sCPR[161].nAckNum=0;   sT[0].sCP[0].sCPR[161].nSPOffsetCS =2920; sT[0].sCP[0].sCPR[161].nSPOffsetLek= 2921; 	
sT[0].sCP[0].sCPR[162].nDCStart=585;    sT[0].sCP[0].sCPR[162].nDCNum= 1;    sT[0].sCP[0].sCPR[162].nSCStart=586;    sT[0].sCP[0].sCPR[162].nAckStart =587;	sT[0].sCP[0].sCPR[162].nAckNum=1;   sT[0].sCP[0].sCPR[162].nSPOffsetCS =2936; sT[0].sCP[0].sCPR[162].nSPOffsetLek= 2937; 	

sT[0].sCP[0].sCPR[163].nDCStart=588;    sT[0].sCP[0].sCPR[163].nDCNum= 1;    sT[0].sCP[0].sCPR[163].nSCStart=589;    sT[0].sCP[0].sCPR[163].nAckStart =590;	sT[0].sCP[0].sCPR[163].nAckNum=1;   sT[0].sCP[0].sCPR[163].nSPOffsetCS =2952; sT[0].sCP[0].sCPR[163].nSPOffsetLek= 2953; 	
sT[0].sCP[0].sCPR[164].nDCStart=591;    sT[0].sCP[0].sCPR[164].nDCNum= 1;    sT[0].sCP[0].sCPR[164].nSCStart=592;    sT[0].sCP[0].sCPR[164].nAckStart =593;	sT[0].sCP[0].sCPR[164].nAckNum=1;   sT[0].sCP[0].sCPR[164].nSPOffsetCS =2968; sT[0].sCP[0].sCPR[164].nSPOffsetLek= 2969; 	
sT[0].sCP[0].sCPR[165].nDCStart=594;    sT[0].sCP[0].sCPR[165].nDCNum= 1;    sT[0].sCP[0].sCPR[165].nSCStart=595;    sT[0].sCP[0].sCPR[165].nAckStart =596;	sT[0].sCP[0].sCPR[165].nAckNum=1;   sT[0].sCP[0].sCPR[165].nSPOffsetCS =2984; sT[0].sCP[0].sCPR[165].nSPOffsetLek= 2985; 	
sT[0].sCP[0].sCPR[166].nDCStart=597;    sT[0].sCP[0].sCPR[166].nDCNum= 1;    sT[0].sCP[0].sCPR[166].nSCStart=598;    sT[0].sCP[0].sCPR[166].nAckStart =599;	sT[0].sCP[0].sCPR[166].nAckNum=1;   sT[0].sCP[0].sCPR[166].nSPOffsetCS =3000; sT[0].sCP[0].sCPR[166].nSPOffsetLek= 3001; 	
sT[0].sCP[0].sCPR[167].nDCStart=600;    sT[0].sCP[0].sCPR[167].nDCNum= 1;    sT[0].sCP[0].sCPR[167].nSCStart=601;    sT[0].sCP[0].sCPR[167].nAckStart =602;	sT[0].sCP[0].sCPR[167].nAckNum=1;   sT[0].sCP[0].sCPR[167].nSPOffsetCS =3016; sT[0].sCP[0].sCPR[167].nSPOffsetLek= 3017; 	
sT[0].sCP[0].sCPR[168].nDCStart=603;    sT[0].sCP[0].sCPR[168].nDCNum= 1;    sT[0].sCP[0].sCPR[168].nSCStart=604;    sT[0].sCP[0].sCPR[168].nAckStart =605;	sT[0].sCP[0].sCPR[168].nAckNum=1;   sT[0].sCP[0].sCPR[168].nSPOffsetCS =3032; sT[0].sCP[0].sCPR[168].nSPOffsetLek= 3033; 	
sT[0].sCP[0].sCPR[169].nDCStart=606;    sT[0].sCP[0].sCPR[169].nDCNum= 1;    sT[0].sCP[0].sCPR[169].nSCStart=607;    sT[0].sCP[0].sCPR[169].nAckStart =608;	sT[0].sCP[0].sCPR[169].nAckNum=1;   sT[0].sCP[0].sCPR[169].nSPOffsetCS =3048; sT[0].sCP[0].sCPR[169].nSPOffsetLek= 3049; 	
sT[0].sCP[0].sCPR[170].nDCStart=609;    sT[0].sCP[0].sCPR[170].nDCNum= 1;    sT[0].sCP[0].sCPR[170].nSCStart=610;    sT[0].sCP[0].sCPR[170].nAckStart =611;	sT[0].sCP[0].sCPR[170].nAckNum=1;   sT[0].sCP[0].sCPR[170].nSPOffsetCS =3064; sT[0].sCP[0].sCPR[170].nSPOffsetLek= 3065; 	

sT[0].sCP[0].sCPR[171].nDCStart=612;    sT[0].sCP[0].sCPR[171].nDCNum= 4;    sT[0].sCP[0].sCPR[171].nSCStart=616;    sT[0].sCP[0].sCPR[171].nAckStart =0;	sT[0].sCP[0].sCPR[171].nAckNum=0;   sT[0].sCP[0].sCPR[171].nSPOffsetCS =3082; sT[0].sCP[0].sCPR[171].nSPOffsetLek= 3083; 	
sT[0].sCP[0].sCPR[172].nDCStart=864;    sT[0].sCP[0].sCPR[172].nDCNum= 8;    sT[0].sCP[0].sCPR[172].nSCStart=872;    sT[0].sCP[0].sCPR[172].nAckStart =0;	sT[0].sCP[0].sCPR[172].nAckNum=0;   sT[0].sCP[0].sCPR[172].nSPOffsetCS =3100; sT[0].sCP[0].sCPR[172].nSPOffsetLek= 3101; 	

sT[0].sCP[0].sCPR[173].nDCStart=622;    sT[0].sCP[0].sCPR[173].nDCNum= 1;    sT[0].sCP[0].sCPR[173].nSCStart=623;    sT[0].sCP[0].sCPR[173].nAckStart =624;	sT[0].sCP[0].sCPR[173].nAckNum=1;   sT[0].sCP[0].sCPR[173].nSPOffsetCS =3116; sT[0].sCP[0].sCPR[173].nSPOffsetLek= 3117; 	
sT[0].sCP[0].sCPR[174].nDCStart=625;    sT[0].sCP[0].sCPR[174].nDCNum= 1;    sT[0].sCP[0].sCPR[174].nSCStart=626;    sT[0].sCP[0].sCPR[174].nAckStart =627;	sT[0].sCP[0].sCPR[174].nAckNum=1;   sT[0].sCP[0].sCPR[174].nSPOffsetCS =3132; sT[0].sCP[0].sCPR[174].nSPOffsetLek= 3133; 	
sT[0].sCP[0].sCPR[175].nDCStart=628;    sT[0].sCP[0].sCPR[175].nDCNum= 1;    sT[0].sCP[0].sCPR[175].nSCStart=629;    sT[0].sCP[0].sCPR[175].nAckStart =630;	sT[0].sCP[0].sCPR[175].nAckNum=1;   sT[0].sCP[0].sCPR[175].nSPOffsetCS =3148; sT[0].sCP[0].sCPR[175].nSPOffsetLek= 3149; 	
sT[0].sCP[0].sCPR[176].nDCStart=631;    sT[0].sCP[0].sCPR[176].nDCNum= 1;    sT[0].sCP[0].sCPR[176].nSCStart=632;    sT[0].sCP[0].sCPR[176].nAckStart =633;	sT[0].sCP[0].sCPR[176].nAckNum=1;   sT[0].sCP[0].sCPR[176].nSPOffsetCS =3164; sT[0].sCP[0].sCPR[176].nSPOffsetLek= 3165; 	
sT[0].sCP[0].sCPR[177].nDCStart=634;    sT[0].sCP[0].sCPR[177].nDCNum= 1;    sT[0].sCP[0].sCPR[177].nSCStart=635;    sT[0].sCP[0].sCPR[177].nAckStart =636;	sT[0].sCP[0].sCPR[177].nAckNum=1;   sT[0].sCP[0].sCPR[177].nSPOffsetCS =3180; sT[0].sCP[0].sCPR[177].nSPOffsetLek= 3181; 	
sT[0].sCP[0].sCPR[178].nDCStart=637;    sT[0].sCP[0].sCPR[178].nDCNum= 1;    sT[0].sCP[0].sCPR[178].nSCStart=638;    sT[0].sCP[0].sCPR[178].nAckStart =639;	sT[0].sCP[0].sCPR[178].nAckNum=1;   sT[0].sCP[0].sCPR[178].nSPOffsetCS =3196; sT[0].sCP[0].sCPR[178].nSPOffsetLek= 3197; 	
sT[0].sCP[0].sCPR[179].nDCStart=640;    sT[0].sCP[0].sCPR[179].nDCNum= 1;    sT[0].sCP[0].sCPR[179].nSCStart=641;    sT[0].sCP[0].sCPR[179].nAckStart =642;	sT[0].sCP[0].sCPR[179].nAckNum=1;   sT[0].sCP[0].sCPR[179].nSPOffsetCS =3212; sT[0].sCP[0].sCPR[179].nSPOffsetLek= 3213; 	
sT[0].sCP[0].sCPR[180].nDCStart=643;    sT[0].sCP[0].sCPR[180].nDCNum= 1;    sT[0].sCP[0].sCPR[180].nSCStart=644;    sT[0].sCP[0].sCPR[180].nAckStart =645;	sT[0].sCP[0].sCPR[180].nAckNum=1;   sT[0].sCP[0].sCPR[180].nSPOffsetCS =3228; sT[0].sCP[0].sCPR[180].nSPOffsetLek= 3229; 	
sT[0].sCP[0].sCPR[181].nDCStart=646;    sT[0].sCP[0].sCPR[181].nDCNum= 1;    sT[0].sCP[0].sCPR[181].nSCStart=647;    sT[0].sCP[0].sCPR[181].nAckStart =648;	sT[0].sCP[0].sCPR[181].nAckNum=1;   sT[0].sCP[0].sCPR[181].nSPOffsetCS =3244; sT[0].sCP[0].sCPR[181].nSPOffsetLek= 3245; 	
sT[0].sCP[0].sCPR[182].nDCStart=649;    sT[0].sCP[0].sCPR[182].nDCNum= 1;    sT[0].sCP[0].sCPR[182].nSCStart=650;    sT[0].sCP[0].sCPR[182].nAckStart =651;	sT[0].sCP[0].sCPR[182].nAckNum=1;   sT[0].sCP[0].sCPR[182].nSPOffsetCS =3260; sT[0].sCP[0].sCPR[182].nSPOffsetLek= 3261; 	

sT[0].sCP[0].sCPR[183].nDCStart=664;    sT[0].sCP[0].sCPR[183].nDCNum= 1;    sT[0].sCP[0].sCPR[183].nSCStart=665;    sT[0].sCP[0].sCPR[183].nAckStart =666;	sT[0].sCP[0].sCPR[183].nAckNum=1;   sT[0].sCP[0].sCPR[183].nSPOffsetCS =3340; sT[0].sCP[0].sCPR[183].nSPOffsetLek= 3341; 	
sT[0].sCP[0].sCPR[184].nDCStart=682;    sT[0].sCP[0].sCPR[184].nDCNum= 1;    sT[0].sCP[0].sCPR[184].nSCStart=683;    sT[0].sCP[0].sCPR[184].nAckStart =684;	sT[0].sCP[0].sCPR[184].nAckNum=1;   sT[0].sCP[0].sCPR[184].nSPOffsetCS =3436; sT[0].sCP[0].sCPR[184].nSPOffsetLek= 3437; 	
sT[0].sCP[0].sCPR[185].nDCStart=724;    sT[0].sCP[0].sCPR[185].nDCNum= 4;    sT[0].sCP[0].sCPR[185].nSCStart=729;    sT[0].sCP[0].sCPR[185].nAckStart =728;	sT[0].sCP[0].sCPR[185].nAckNum=1;   sT[0].sCP[0].sCPR[185].nSPOffsetCS =3681; sT[0].sCP[0].sCPR[185].nSPOffsetLek= 3682; 	

sT[0].sCP[0].sCPR[186].nDCStart=652;    sT[0].sCP[0].sCPR[186].nDCNum= 1;    sT[0].sCP[0].sCPR[186].nSCStart=653;    sT[0].sCP[0].sCPR[186].nAckStart =654;	sT[0].sCP[0].sCPR[186].nAckNum=1;   sT[0].sCP[0].sCPR[186].nSPOffsetCS =3276; sT[0].sCP[0].sCPR[186].nSPOffsetLek= 3277; 	
sT[0].sCP[0].sCPR[187].nDCStart=655;    sT[0].sCP[0].sCPR[187].nDCNum= 1;    sT[0].sCP[0].sCPR[187].nSCStart=656;    sT[0].sCP[0].sCPR[187].nAckStart =657;	sT[0].sCP[0].sCPR[187].nAckNum=1;   sT[0].sCP[0].sCPR[187].nSPOffsetCS =3292; sT[0].sCP[0].sCPR[187].nSPOffsetLek= 3293; 	
sT[0].sCP[0].sCPR[188].nDCStart=658;    sT[0].sCP[0].sCPR[188].nDCNum= 1;    sT[0].sCP[0].sCPR[188].nSCStart=659;    sT[0].sCP[0].sCPR[188].nAckStart =660;	sT[0].sCP[0].sCPR[188].nAckNum=1;   sT[0].sCP[0].sCPR[188].nSPOffsetCS =3308; sT[0].sCP[0].sCPR[188].nSPOffsetLek= 3309; 	
sT[0].sCP[0].sCPR[189].nDCStart=661;    sT[0].sCP[0].sCPR[189].nDCNum= 1;    sT[0].sCP[0].sCPR[189].nSCStart=662;    sT[0].sCP[0].sCPR[189].nAckStart =663;	sT[0].sCP[0].sCPR[189].nAckNum=1;   sT[0].sCP[0].sCPR[189].nSPOffsetCS =3324; sT[0].sCP[0].sCPR[189].nSPOffsetLek= 3325; 	
sT[0].sCP[0].sCPR[190].nDCStart=667;    sT[0].sCP[0].sCPR[190].nDCNum= 1;    sT[0].sCP[0].sCPR[190].nSCStart=668;    sT[0].sCP[0].sCPR[190].nAckStart =669;	sT[0].sCP[0].sCPR[190].nAckNum=1;   sT[0].sCP[0].sCPR[190].nSPOffsetCS =3356; sT[0].sCP[0].sCPR[190].nSPOffsetLek= 3357; 	
sT[0].sCP[0].sCPR[191].nDCStart=670;    sT[0].sCP[0].sCPR[191].nDCNum= 1;    sT[0].sCP[0].sCPR[191].nSCStart=671;    sT[0].sCP[0].sCPR[191].nAckStart =672;	sT[0].sCP[0].sCPR[191].nAckNum=1;   sT[0].sCP[0].sCPR[191].nSPOffsetCS =3372; sT[0].sCP[0].sCPR[191].nSPOffsetLek= 3373; 	
sT[0].sCP[0].sCPR[192].nDCStart=673;    sT[0].sCP[0].sCPR[192].nDCNum= 1;    sT[0].sCP[0].sCPR[192].nSCStart=674;    sT[0].sCP[0].sCPR[192].nAckStart =675;	sT[0].sCP[0].sCPR[192].nAckNum=1;   sT[0].sCP[0].sCPR[192].nSPOffsetCS =3388; sT[0].sCP[0].sCPR[192].nSPOffsetLek= 3389; 	
sT[0].sCP[0].sCPR[193].nDCStart=676;    sT[0].sCP[0].sCPR[193].nDCNum= 1;    sT[0].sCP[0].sCPR[193].nSCStart=677;    sT[0].sCP[0].sCPR[193].nAckStart =678;	sT[0].sCP[0].sCPR[193].nAckNum=1;   sT[0].sCP[0].sCPR[193].nSPOffsetCS =3404; sT[0].sCP[0].sCPR[193].nSPOffsetLek= 3405; 	
sT[0].sCP[0].sCPR[194].nDCStart=679;    sT[0].sCP[0].sCPR[194].nDCNum= 1;    sT[0].sCP[0].sCPR[194].nSCStart=680;    sT[0].sCP[0].sCPR[194].nAckStart =681;	sT[0].sCP[0].sCPR[194].nAckNum=1;   sT[0].sCP[0].sCPR[194].nSPOffsetCS =3420; sT[0].sCP[0].sCPR[194].nSPOffsetLek= 3421; 	
sT[0].sCP[0].sCPR[195].nDCStart=685;    sT[0].sCP[0].sCPR[195].nDCNum= 1;    sT[0].sCP[0].sCPR[195].nSCStart=686;    sT[0].sCP[0].sCPR[195].nAckStart =687;	sT[0].sCP[0].sCPR[195].nAckNum=1;   sT[0].sCP[0].sCPR[195].nSPOffsetCS =3452; sT[0].sCP[0].sCPR[195].nSPOffsetLek= 3453; 	
sT[0].sCP[0].sCPR[196].nDCStart=688;    sT[0].sCP[0].sCPR[196].nDCNum= 1;    sT[0].sCP[0].sCPR[196].nSCStart=689;    sT[0].sCP[0].sCPR[196].nAckStart =690;	sT[0].sCP[0].sCPR[196].nAckNum=1;   sT[0].sCP[0].sCPR[196].nSPOffsetCS =3468; sT[0].sCP[0].sCPR[196].nSPOffsetLek= 3469; 	
sT[0].sCP[0].sCPR[197].nDCStart=691;    sT[0].sCP[0].sCPR[197].nDCNum= 1;    sT[0].sCP[0].sCPR[197].nSCStart=692;    sT[0].sCP[0].sCPR[197].nAckStart =693;	sT[0].sCP[0].sCPR[197].nAckNum=1;   sT[0].sCP[0].sCPR[197].nSPOffsetCS =3484; sT[0].sCP[0].sCPR[197].nSPOffsetLek= 3485; 	
sT[0].sCP[0].sCPR[198].nDCStart=694;    sT[0].sCP[0].sCPR[198].nDCNum= 1;    sT[0].sCP[0].sCPR[198].nSCStart=695;    sT[0].sCP[0].sCPR[198].nAckStart =696;	sT[0].sCP[0].sCPR[198].nAckNum=1;   sT[0].sCP[0].sCPR[198].nSPOffsetCS =3500; sT[0].sCP[0].sCPR[198].nSPOffsetLek= 3501; 	
sT[0].sCP[0].sCPR[199].nDCStart=697;    sT[0].sCP[0].sCPR[199].nDCNum= 1;    sT[0].sCP[0].sCPR[199].nSCStart=698;    sT[0].sCP[0].sCPR[199].nAckStart =699;	sT[0].sCP[0].sCPR[199].nAckNum=1;   sT[0].sCP[0].sCPR[199].nSPOffsetCS =3516; sT[0].sCP[0].sCPR[199].nSPOffsetLek= 3517; 	
sT[0].sCP[0].sCPR[200].nDCStart=700;    sT[0].sCP[0].sCPR[200].nDCNum= 1;    sT[0].sCP[0].sCPR[200].nSCStart=701;    sT[0].sCP[0].sCPR[200].nAckStart =702;	sT[0].sCP[0].sCPR[200].nAckNum=1;   sT[0].sCP[0].sCPR[200].nSPOffsetCS =3532; sT[0].sCP[0].sCPR[200].nSPOffsetLek= 3533; 	
sT[0].sCP[0].sCPR[201].nDCStart=703;    sT[0].sCP[0].sCPR[201].nDCNum= 1;    sT[0].sCP[0].sCPR[201].nSCStart=704;    sT[0].sCP[0].sCPR[201].nAckStart =705;	sT[0].sCP[0].sCPR[201].nAckNum=1;   sT[0].sCP[0].sCPR[201].nSPOffsetCS =3548; sT[0].sCP[0].sCPR[201].nSPOffsetLek= 3549; 	
sT[0].sCP[0].sCPR[202].nDCStart=706;    sT[0].sCP[0].sCPR[202].nDCNum= 1;    sT[0].sCP[0].sCPR[202].nSCStart=707;    sT[0].sCP[0].sCPR[202].nAckStart =708;	sT[0].sCP[0].sCPR[202].nAckNum=1;   sT[0].sCP[0].sCPR[202].nSPOffsetCS =3564; sT[0].sCP[0].sCPR[202].nSPOffsetLek= 3565; 	
sT[0].sCP[0].sCPR[203].nDCStart=709;    sT[0].sCP[0].sCPR[203].nDCNum= 1;    sT[0].sCP[0].sCPR[203].nSCStart=710;    sT[0].sCP[0].sCPR[203].nAckStart =711;	sT[0].sCP[0].sCPR[203].nAckNum=1;   sT[0].sCP[0].sCPR[203].nSPOffsetCS =3580; sT[0].sCP[0].sCPR[203].nSPOffsetLek= 3581; 	
sT[0].sCP[0].sCPR[204].nDCStart=712;    sT[0].sCP[0].sCPR[204].nDCNum= 1;    sT[0].sCP[0].sCPR[204].nSCStart=713;    sT[0].sCP[0].sCPR[204].nAckStart =714;	sT[0].sCP[0].sCPR[204].nAckNum=1;   sT[0].sCP[0].sCPR[204].nSPOffsetCS =3596; sT[0].sCP[0].sCPR[204].nSPOffsetLek= 3597; 	
sT[0].sCP[0].sCPR[205].nDCStart=715;    sT[0].sCP[0].sCPR[205].nDCNum= 1;    sT[0].sCP[0].sCPR[205].nSCStart=716;    sT[0].sCP[0].sCPR[205].nAckStart =717;	sT[0].sCP[0].sCPR[205].nAckNum=1;   sT[0].sCP[0].sCPR[205].nSPOffsetCS =3612; sT[0].sCP[0].sCPR[205].nSPOffsetLek= 3613; 	
sT[0].sCP[0].sCPR[206].nDCStart=718;    sT[0].sCP[0].sCPR[206].nDCNum= 1;    sT[0].sCP[0].sCPR[206].nSCStart=719;    sT[0].sCP[0].sCPR[206].nAckStart =720;	sT[0].sCP[0].sCPR[206].nAckNum=1;   sT[0].sCP[0].sCPR[206].nSPOffsetCS =3628; sT[0].sCP[0].sCPR[206].nSPOffsetLek= 3629; 	
sT[0].sCP[0].sCPR[207].nDCStart=721;    sT[0].sCP[0].sCPR[207].nDCNum= 1;    sT[0].sCP[0].sCPR[207].nSCStart=722;    sT[0].sCP[0].sCPR[207].nAckStart =723;	sT[0].sCP[0].sCPR[207].nAckNum=1;   sT[0].sCP[0].sCPR[207].nSPOffsetCS =3644; sT[0].sCP[0].sCPR[207].nSPOffsetLek= 3645; 	
sT[0].sCP[0].sCPR[208].nDCStart=730;    sT[0].sCP[0].sCPR[208].nDCNum= 1;    sT[0].sCP[0].sCPR[208].nSCStart=731;    sT[0].sCP[0].sCPR[208].nAckStart =732;	sT[0].sCP[0].sCPR[208].nAckNum=1;   sT[0].sCP[0].sCPR[208].nSPOffsetCS =3697; sT[0].sCP[0].sCPR[208].nSPOffsetLek= 3698; 	

sT[0].sCP[0].sCPR[209].nDCStart=733;    sT[0].sCP[0].sCPR[209].nDCNum= 4;    sT[0].sCP[0].sCPR[209].nSCStart=738;    sT[0].sCP[0].sCPR[209].nAckStart =737;	sT[0].sCP[0].sCPR[209].nAckNum=1;   sT[0].sCP[0].sCPR[209].nSPOffsetCS =3734; sT[0].sCP[0].sCPR[209].nSPOffsetLek= 3735; 	
sT[0].sCP[0].sCPR[210].nDCStart=739;    sT[0].sCP[0].sCPR[210].nDCNum= 1;    sT[0].sCP[0].sCPR[210].nSCStart=740;    sT[0].sCP[0].sCPR[210].nAckStart =741;	sT[0].sCP[0].sCPR[210].nAckNum=1;   sT[0].sCP[0].sCPR[210].nSPOffsetCS =3750; sT[0].sCP[0].sCPR[210].nSPOffsetLek= 3751; 	
sT[0].sCP[0].sCPR[211].nDCStart=742;    sT[0].sCP[0].sCPR[211].nDCNum= 1;    sT[0].sCP[0].sCPR[211].nSCStart=743;    sT[0].sCP[0].sCPR[211].nAckStart =744;	sT[0].sCP[0].sCPR[211].nAckNum=1;   sT[0].sCP[0].sCPR[211].nSPOffsetCS =3766; sT[0].sCP[0].sCPR[211].nSPOffsetLek= 3767; 	
sT[0].sCP[0].sCPR[212].nDCStart=745;    sT[0].sCP[0].sCPR[212].nDCNum= 1;    sT[0].sCP[0].sCPR[212].nSCStart=746;    sT[0].sCP[0].sCPR[212].nAckStart =747;	sT[0].sCP[0].sCPR[212].nAckNum=1;   sT[0].sCP[0].sCPR[212].nSPOffsetCS =3782; sT[0].sCP[0].sCPR[212].nSPOffsetLek= 3783; 	
sT[0].sCP[0].sCPR[213].nDCStart=748;    sT[0].sCP[0].sCPR[213].nDCNum= 1;    sT[0].sCP[0].sCPR[213].nSCStart=749;    sT[0].sCP[0].sCPR[213].nAckStart =750;	sT[0].sCP[0].sCPR[213].nAckNum=1;   sT[0].sCP[0].sCPR[213].nSPOffsetCS =3798; sT[0].sCP[0].sCPR[213].nSPOffsetLek= 3799; 	
sT[0].sCP[0].sCPR[214].nDCStart=751;    sT[0].sCP[0].sCPR[214].nDCNum= 1;    sT[0].sCP[0].sCPR[214].nSCStart=752;    sT[0].sCP[0].sCPR[214].nAckStart =753;	sT[0].sCP[0].sCPR[214].nAckNum=1;   sT[0].sCP[0].sCPR[214].nSPOffsetCS =3814; sT[0].sCP[0].sCPR[214].nSPOffsetLek= 3815; 	
sT[0].sCP[0].sCPR[215].nDCStart=754;    sT[0].sCP[0].sCPR[215].nDCNum= 1;    sT[0].sCP[0].sCPR[215].nSCStart=755;    sT[0].sCP[0].sCPR[215].nAckStart =756;	sT[0].sCP[0].sCPR[215].nAckNum=1;   sT[0].sCP[0].sCPR[215].nSPOffsetCS =3830; sT[0].sCP[0].sCPR[215].nSPOffsetLek= 3831; 	
sT[0].sCP[0].sCPR[216].nDCStart=757;    sT[0].sCP[0].sCPR[216].nDCNum= 1;    sT[0].sCP[0].sCPR[216].nSCStart=758;    sT[0].sCP[0].sCPR[216].nAckStart =759;	sT[0].sCP[0].sCPR[216].nAckNum=1;   sT[0].sCP[0].sCPR[216].nSPOffsetCS =3846; sT[0].sCP[0].sCPR[216].nSPOffsetLek= 3847; 	
sT[0].sCP[0].sCPR[217].nDCStart=760;    sT[0].sCP[0].sCPR[217].nDCNum= 1;    sT[0].sCP[0].sCPR[217].nSCStart=761;    sT[0].sCP[0].sCPR[217].nAckStart =762;	sT[0].sCP[0].sCPR[217].nAckNum=1;   sT[0].sCP[0].sCPR[217].nSPOffsetCS =3862; sT[0].sCP[0].sCPR[217].nSPOffsetLek= 3863; 	
sT[0].sCP[0].sCPR[218].nDCStart=763;    sT[0].sCP[0].sCPR[218].nDCNum= 1;    sT[0].sCP[0].sCPR[218].nSCStart=764;    sT[0].sCP[0].sCPR[218].nAckStart =765;	sT[0].sCP[0].sCPR[218].nAckNum=1;   sT[0].sCP[0].sCPR[218].nSPOffsetCS =3878; sT[0].sCP[0].sCPR[218].nSPOffsetLek= 3879; 	
sT[0].sCP[0].sCPR[219].nDCStart=766;    sT[0].sCP[0].sCPR[219].nDCNum= 1;    sT[0].sCP[0].sCPR[219].nSCStart=767;    sT[0].sCP[0].sCPR[219].nAckStart =768;	sT[0].sCP[0].sCPR[219].nAckNum=1;   sT[0].sCP[0].sCPR[219].nSPOffsetCS =3894; sT[0].sCP[0].sCPR[219].nSPOffsetLek= 3895; 	
sT[0].sCP[0].sCPR[220].nDCStart=769;    sT[0].sCP[0].sCPR[220].nDCNum= 1;    sT[0].sCP[0].sCPR[220].nSCStart=770;    sT[0].sCP[0].sCPR[220].nAckStart =771;	sT[0].sCP[0].sCPR[220].nAckNum=1;   sT[0].sCP[0].sCPR[220].nSPOffsetCS =3910; sT[0].sCP[0].sCPR[220].nSPOffsetLek= 3911; 	
sT[0].sCP[0].sCPR[221].nDCStart=772;    sT[0].sCP[0].sCPR[221].nDCNum= 1;    sT[0].sCP[0].sCPR[221].nSCStart=773;    sT[0].sCP[0].sCPR[221].nAckStart =774;	sT[0].sCP[0].sCPR[221].nAckNum=1;   sT[0].sCP[0].sCPR[221].nSPOffsetCS =3926; sT[0].sCP[0].sCPR[221].nSPOffsetLek= 3927; 	
sT[0].sCP[0].sCPR[222].nDCStart=775;    sT[0].sCP[0].sCPR[222].nDCNum= 4;    sT[0].sCP[0].sCPR[222].nSCStart=779;    sT[0].sCP[0].sCPR[222].nAckStart =0;	sT[0].sCP[0].sCPR[222].nAckNum=0;   sT[0].sCP[0].sCPR[222].nSPOffsetCS =3942; sT[0].sCP[0].sCPR[222].nSPOffsetLek= 3943; 	
sT[0].sCP[0].sCPR[223].nDCStart=780;    sT[0].sCP[0].sCPR[223].nDCNum= 4;    sT[0].sCP[0].sCPR[223].nSCStart=785;    sT[0].sCP[0].sCPR[223].nAckStart =784;	sT[0].sCP[0].sCPR[223].nAckNum=1;   sT[0].sCP[0].sCPR[223].nSPOffsetCS =3979; sT[0].sCP[0].sCPR[223].nSPOffsetLek= 3980; 	
sT[0].sCP[0].sCPR[224].nDCStart=792;    sT[0].sCP[0].sCPR[224].nDCNum= 1;    sT[0].sCP[0].sCPR[224].nSCStart=793;    sT[0].sCP[0].sCPR[224].nAckStart =794;	sT[0].sCP[0].sCPR[224].nAckNum=1;   sT[0].sCP[0].sCPR[224].nSPOffsetCS =3995; sT[0].sCP[0].sCPR[224].nSPOffsetLek= 3996; 	
sT[0].sCP[0].sCPR[225].nDCStart=795;    sT[0].sCP[0].sCPR[225].nDCNum= 1;    sT[0].sCP[0].sCPR[225].nSCStart=796;    sT[0].sCP[0].sCPR[225].nAckStart =0;	sT[0].sCP[0].sCPR[225].nAckNum=0;   sT[0].sCP[0].sCPR[225].nSPOffsetCS =4011; sT[0].sCP[0].sCPR[225].nSPOffsetLek= 4012; 	
sT[0].sCP[0].sCPR[226].nDCStart=798;    sT[0].sCP[0].sCPR[226].nDCNum= 1;    sT[0].sCP[0].sCPR[226].nSCStart=799;    sT[0].sCP[0].sCPR[226].nAckStart =800;	sT[0].sCP[0].sCPR[226].nAckNum=1;   sT[0].sCP[0].sCPR[226].nSPOffsetCS =4027; sT[0].sCP[0].sCPR[226].nSPOffsetLek= 4028; 	
sT[0].sCP[0].sCPR[227].nDCStart=801;    sT[0].sCP[0].sCPR[227].nDCNum= 1;    sT[0].sCP[0].sCPR[227].nSCStart=802;    sT[0].sCP[0].sCPR[227].nAckStart =803;	sT[0].sCP[0].sCPR[227].nAckNum=1;   sT[0].sCP[0].sCPR[227].nSPOffsetCS =4043; sT[0].sCP[0].sCPR[227].nSPOffsetLek= 4044; 	
sT[0].sCP[0].sCPR[228].nDCStart=804;    sT[0].sCP[0].sCPR[228].nDCNum= 1;    sT[0].sCP[0].sCPR[228].nSCStart=805;    sT[0].sCP[0].sCPR[228].nAckStart =806;	sT[0].sCP[0].sCPR[228].nAckNum=1;   sT[0].sCP[0].sCPR[228].nSPOffsetCS =4059; sT[0].sCP[0].sCPR[228].nSPOffsetLek= 4060; 	
sT[0].sCP[0].sCPR[229].nDCStart=807;    sT[0].sCP[0].sCPR[229].nDCNum= 4;    sT[0].sCP[0].sCPR[229].nSCStart=812;    sT[0].sCP[0].sCPR[229].nAckStart =811;	sT[0].sCP[0].sCPR[229].nAckNum=1;   sT[0].sCP[0].sCPR[229].nSPOffsetCS =4096; sT[0].sCP[0].sCPR[229].nSPOffsetLek= 4097; 	
sT[0].sCP[0].sCPR[230].nDCStart=813;    sT[0].sCP[0].sCPR[230].nDCNum= 1;    sT[0].sCP[0].sCPR[230].nSCStart=814;    sT[0].sCP[0].sCPR[230].nAckStart =815;	sT[0].sCP[0].sCPR[230].nAckNum=1;   sT[0].sCP[0].sCPR[230].nSPOffsetCS =4112; sT[0].sCP[0].sCPR[230].nSPOffsetLek= 4113; 	
sT[0].sCP[0].sCPR[231].nDCStart=816;    sT[0].sCP[0].sCPR[231].nDCNum= 1;    sT[0].sCP[0].sCPR[231].nSCStart=817;    sT[0].sCP[0].sCPR[231].nAckStart =818;	sT[0].sCP[0].sCPR[231].nAckNum=1;   sT[0].sCP[0].sCPR[231].nSPOffsetCS =4128; sT[0].sCP[0].sCPR[231].nSPOffsetLek= 4129; 	
sT[0].sCP[0].sCPR[232].nDCStart=819;    sT[0].sCP[0].sCPR[232].nDCNum= 4;    sT[0].sCP[0].sCPR[232].nSCStart=824;    sT[0].sCP[0].sCPR[232].nAckStart =823;	sT[0].sCP[0].sCPR[232].nAckNum=1;   sT[0].sCP[0].sCPR[232].nSPOffsetCS =4165; sT[0].sCP[0].sCPR[232].nSPOffsetLek= 4166; 	
sT[0].sCP[0].sCPR[233].nDCStart=825;    sT[0].sCP[0].sCPR[233].nDCNum= 4;    sT[0].sCP[0].sCPR[233].nSCStart=830;    sT[0].sCP[0].sCPR[233].nAckStart =829;	sT[0].sCP[0].sCPR[233].nAckNum=1;   sT[0].sCP[0].sCPR[233].nSPOffsetCS =4202; sT[0].sCP[0].sCPR[233].nSPOffsetLek= 4203; 	
sT[0].sCP[0].sCPR[234].nDCStart=831;    sT[0].sCP[0].sCPR[234].nDCNum= 1;    sT[0].sCP[0].sCPR[234].nSCStart=832;    sT[0].sCP[0].sCPR[234].nAckStart =833;	sT[0].sCP[0].sCPR[234].nAckNum=1;   sT[0].sCP[0].sCPR[234].nSPOffsetCS =4218; sT[0].sCP[0].sCPR[234].nSPOffsetLek= 4219; 	
sT[0].sCP[0].sCPR[235].nDCStart=834;    sT[0].sCP[0].sCPR[235].nDCNum= 1;    sT[0].sCP[0].sCPR[235].nSCStart=835;    sT[0].sCP[0].sCPR[235].nAckStart =836;	sT[0].sCP[0].sCPR[235].nAckNum=1;   sT[0].sCP[0].sCPR[235].nSPOffsetCS =4234; sT[0].sCP[0].sCPR[235].nSPOffsetLek= 4235; 	
sT[0].sCP[0].sCPR[236].nDCStart=837;    sT[0].sCP[0].sCPR[236].nDCNum= 4;    sT[0].sCP[0].sCPR[236].nSCStart=841;    sT[0].sCP[0].sCPR[236].nAckStart =0;	sT[0].sCP[0].sCPR[236].nAckNum=0;   sT[0].sCP[0].sCPR[236].nSPOffsetCS =4250; sT[0].sCP[0].sCPR[236].nSPOffsetLek= 4251; 	
sT[0].sCP[0].sCPR[237].nDCStart=842;    sT[0].sCP[0].sCPR[237].nDCNum= 1;    sT[0].sCP[0].sCPR[237].nSCStart=843;    sT[0].sCP[0].sCPR[237].nAckStart =0;	sT[0].sCP[0].sCPR[237].nAckNum=0;   sT[0].sCP[0].sCPR[237].nSPOffsetCS =4266; sT[0].sCP[0].sCPR[237].nSPOffsetLek= 4267; 	
sT[0].sCP[0].sCPR[238].nDCStart=845;    sT[0].sCP[0].sCPR[238].nDCNum= 4;    sT[0].sCP[0].sCPR[238].nSCStart=849;    sT[0].sCP[0].sCPR[238].nAckStart =0;	sT[0].sCP[0].sCPR[238].nAckNum=0;   sT[0].sCP[0].sCPR[238].nSPOffsetCS =4282; sT[0].sCP[0].sCPR[238].nSPOffsetLek= 4283; 	
sT[0].sCP[0].sCPR[239].nDCStart=850;    sT[0].sCP[0].sCPR[239].nDCNum= 4;    sT[0].sCP[0].sCPR[239].nSCStart=854;    sT[0].sCP[0].sCPR[239].nAckStart =0;	sT[0].sCP[0].sCPR[239].nAckNum=0;   sT[0].sCP[0].sCPR[239].nSPOffsetCS =4300; sT[0].sCP[0].sCPR[239].nSPOffsetLek= 4301; 	



/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}


/* 61-22 NPS -----------------------------------------------------------*/	
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 20;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 60-68 OK2 -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 36;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */

/* 60-70 OK2 -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 52;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 16;		/* Mérések IEC kezdõcíme */

/* 61-42 PM6 -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 68;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */

/* 61-43 OK2 -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 84;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 22;		/* Mérések IEC kezdõcíme */

/* 61-70 OK2 -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 100;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */

/* 62-78 OK2 -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 116;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */

/* 73-31 NPS -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 132;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 31;		/* Mérések IEC kezdõcíme */

/* 21-88  --------------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 148;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* Mérések IEC kezdõcíme */

/* Sopron, szennyviztelep -----------------------------------------------------------------------------------*/
sT[0].sTI[9].nType = TYP_TAL;	

		sT[0].sTAL[9].nIEC_SP       		= 164;
		sT[0].sTAL[9].nIEC_OsszevontHiba	= 196;
		sT[0].sTAL[9].nIEC_MT_KommHiba		= 197;
		sT[0].sTAL[9].nIEC_DP       		= 19;
		sT[0].sTAL[9].nIEC_DP_FSZ1  		= 23;
		sT[0].sTAL[9].nIEC_NM				= 37;
		sT[0].sTAL[9].nNMNum		  		= 9;

/* Vasvar, Járdányi út  ----------------------------------------------------------------*/
sT[0].sTI[10].nType = TYP_MOT;

	/*sT[0].sMOT[10].nTableNumPar		= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[10].nIEC_SP				= 201;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_SP_NUM			= 12;		/* Egybites értékek száma*/
	sT[0].sMOT[10].nIEC_DP				= 27;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP_NUM			= 6;   		/* Két bites értékek száma*/
	sT[0].sMOT[10].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[10].nNMNum				= 7;		/* Analóg mérések száma*/

/* 21-08, 21-78 -----------------------------------------------------------*/
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 215;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[11].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[11].nIEC_NM				= 53;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[11].nNMNum				= 4;		/* Analóg mérések száma*/

/* 21-29  --------------------------------------------------------------*/	
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 249;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP				= 35;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_NM				= 57;		/* Mérések IEC kezdõcíme */

/* Varpalota, Inota lakópark  ----------------------------------------------------------------*/
sT[0].sTI[13].nType = TYP_MOT;

	sT[0].sMOT[13].nIEC_SP				= 265;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_SP_NUM			= 15;		/* Egybites értékek száma*/
	sT[0].sMOT[13].nIEC_DP				= 36;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP_NUM			= 6;   		/* Két bites értékek száma*/
	sT[0].sMOT[13].nIEC_NM				= 60;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[13].nNMNum				= 12;		/* Analóg mérések száma*/

/* 21-13  --------------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 282;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 42;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 72;		/* Mérések IEC kezdõcíme */

/* 21-39  --------------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 298;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 43;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 75;		/* Mérések IEC kezdõcíme */

/* Csetény, kapcsolóállomás  ----------------------------------------------------------------*/
sT[0].sTI[16].nType = TYP_MOT;

	sT[0].sMOT[16].nIEC_SP				= 314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[16].nIEC_DP				= 44;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[16].nIEC_NM				= 110;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[16].nNMNum				= 3;		/* Analóg mérések száma*/

/* Csorna, szélerõmûpark -----------------------------------------------------------------------------------*/
sT[0].sTI[17].nType = TYP_TAL;	

		sT[0].sTAL[17].nIEC_SP       		= 330;
		sT[0].sTAL[17].nIEC_OsszevontHiba	= 362;
		sT[0].sTAL[17].nIEC_MT_KommHiba		= 363;
		sT[0].sTAL[17].nIEC_DP       		= 52;
		sT[0].sTAL[17].nIEC_DP_FSZ1  		= 56;
		sT[0].sTAL[17].nIEC_NM				= 80;
		sT[0].sTAL[17].nNMNum		  		= 11;
		sT[0].sTAL[17].nKommStatusNum		= 2;

/* Gyõr, Csókás utca -----------------------------------------------------------------------------------*/
sT[0].sTI[18].nType = TYP_TAL;	

		sT[0].sTAL[18].nIEC_SP       		= 367;
		sT[0].sTAL[18].nIEC_OsszevontHiba	= 399;
		sT[0].sTAL[18].nIEC_MT_KommHiba		= 400;
		sT[0].sTAL[18].nIEC_DP       		= 60;
		sT[0].sTAL[18].nIEC_DP_FSZ1  		= 64;
		sT[0].sTAL[18].nIEC_NM				= 91;
		sT[0].sTAL[18].nNMNum		  		= 4;
		sT[0].sTAL[18].nKommStatusNum		= 2;
		sT[0].sTAL[18].nIEC_DP_2BIT1 		= 68;
		sT[0].sTAL[18].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[18].nIEC_DP_2BIT_BENT1	= 913;

/* Csorna, szélerõmûpark, MOSCAD-L  ----------------------------------------------------------------*/
sT[0].sTI[19].nType = TYP_MOT;

	sT[0].sMOT[19].nIEC_SP				= 404;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[19].nIEC_DP				= 70;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[19].nIEC_NM				= 95;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[19].nNMNum				= 9;		/* Analóg mérések száma*/

/* 50-70  --------------------------------------------------------------*/	
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 421;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_DP				= 78;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_NM				= 104;		/* Mérések IEC kezdõcíme */

/* 50-79  --------------------------------------------------------------*/	
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 437;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_DP				= 79;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_NM				= 107;		/* Mérések IEC kezdõcíme */

/* 51-97  --------------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 453;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 80;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 113;		/* Mérések IEC kezdõcíme */

/* 58-738  --------------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 469;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 81;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 116;		/* Mérések IEC kezdõcíme */

/* 51-44  --------------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 485;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 82;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 119;		/* Mérések IEC kezdõcíme */
    
    
/* Gyõr, Ipari Park, AHM utca, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[25].nType = TYP_MOT;

	sT[0].sMOT[25].nIEC_SP				= 501;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[25].nIEC_DP				= 83;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[25].nIEC_NM				= 122;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[25].nNMNum				= 2;		/* Analóg mérések száma*/

/* 51-76  --------------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 517;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 91;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_NM				= 124;		/* Mérések IEC kezdõcíme */
    
/* 50-24  --------------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 533;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 92;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 127;		/* Mérések IEC kezdõcíme */
    
/* 51-02  --------------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 549;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 93;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 130;		/* Mérések IEC kezdõcíme */
    
/* 51-26  --------------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 565;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 94;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 133;		/* Mérések IEC kezdõcíme */


/* 51-81  --------------------------------------------------------------*/	
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 581;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP				= 95;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_NM				= 136;		/* Mérések IEC kezdõcíme */
 
 
/* Veszprém, Szeglethy, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[31].nType = TYP_MOT;

	sT[0].sMOT[31].nIEC_SP				= 597;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[31].nIEC_DP				= 96;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[31].nIEC_NM				= 139;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[31].nNMNum				= 2;		/* Analóg mérések száma*/
     
/* Veszprém, OBI, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[32].nType = TYP_MOT;

	sT[0].sMOT[32].nIEC_SP				= 613;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[32].nIEC_DP				= 104;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[32].nIEC_NM				= 141;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[32].nNMNum				= 2;		/* Analóg mérések száma*/

/* Veszprém, Patak tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[33].nType = TYP_MOT;

	sT[0].sMOT[33].nIEC_SP				= 629;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[33].nIEC_DP				= 112;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_DP_NUM			= 10;  		/* Két bites értékek száma*/
	sT[0].sMOT[33].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[33].nNMNum				= 0;		/* Analóg mérések száma*/

/* 11-34 ZE --------------------------------------------------------------*/	
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 647;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_DP				= 122;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_NM				= 143;		/* Mérések IEC kezdõcíme */

/* Veszprém, Kádár utca, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[35].nType = TYP_MOT;

	sT[0].sMOT[35].nIEC_SP				= 663;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[35].nIEC_DP				= 123;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP_NUM			= 10;  		/* Két bites értékek száma*/
	sT[0].sMOT[35].nIEC_NM				= 146;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[35].nNMNum				= 4;		/* Analóg mérések száma*/

/* 20-37 NPS --------------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 681;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 133;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 150;		/* Mérések IEC kezdõcíme */
	
/*  Szentgotthard átjátszó -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_MOT;	

	sT[0].sMOT[37].nIEC_SP			= 697;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/	
	sT[0].sMOT[37].nIEC_DP_NUM		= 0;
	sT[0].sMOT[37].nNMNum      		= 0;
	
/* Pápa, TESCO, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[38].nType = TYP_MOT;

	sT[0].sMOT[38].nIEC_SP				= 704;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[38].nIEC_DP				= 134;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[38].nIEC_NM				= 160;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[38].nNMNum				= 2;		/* Analóg mérések száma*/
	
/* Pápa, Malomkert II., MOSCAD-L -----------------------------------------------*/
sT[0].sTI[39].nType = TYP_MOT;

	sT[0].sMOT[39].nIEC_SP				= 736;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[39].nIEC_DP				= 150;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[39].nIEC_NM				= 164;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[39].nNMNum				= 2;		/* Analóg mérések száma*/
	
/* Pápa, Fenyvesi, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[40].nType = TYP_MOT;

	sT[0].sMOT[40].nIEC_SP				= 720;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[40].nIEC_DP				= 142;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[40].nIEC_NM				= 162;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[40].nNMNum				= 2;		/* Analóg mérések száma*/
 
/* Pápa, Huszár út, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[41].nType = TYP_MOT;

	sT[0].sMOT[41].nIEC_SP				= 752;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[41].nIEC_DP				= 158;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[41].nIEC_NM				= 166;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[41].nNMNum				= 2;		/* Analóg mérések száma*/

/* Pápa, Kórház, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[42].nType = TYP_MOT;

	sT[0].sMOT[42].nIEC_SP				= 768;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[42].nIEC_DP				= 166;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP_NUM			= 16;   	/* Két bites értékek száma*/
	sT[0].sMOT[42].nIEC_NM				= 168;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[42].nNMNum				= 2;		/* Analóg mérések száma*/

/* Nick, vízierõmû -----------------------------------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TAL;	

		sT[0].sTAL[43].nIEC_SP       		= 784;
		sT[0].sTAL[43].nIEC_OsszevontHiba	= 816;
		sT[0].sTAL[43].nIEC_MT_KommHiba		= 817;
		sT[0].sTAL[43].nIEC_DP       		= 182;
		sT[0].sTAL[43].nIEC_DP_FSZ1  		= 186;
		sT[0].sTAL[43].nIEC_NM				= 170;
		sT[0].sTAL[43].nNMNum		  		= 11;
   		sT[0].sTAL[43].nKommStatusNum		= 2;
  
/* Gyõr, Polgármesteri hivatal -----------------------------------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_TAL;	

		sT[0].sTAL[44].nIEC_SP       		= 821;
		sT[0].sTAL[44].nIEC_OsszevontHiba	= 853;
		sT[0].sTAL[44].nIEC_MT_KommHiba		= 854;
		sT[0].sTAL[44].nIEC_DP       		= 190;
		sT[0].sTAL[44].nIEC_DP_FSZ1  		= 194;
		sT[0].sTAL[44].nIEC_NM				= 181;
		sT[0].sTAL[44].nNMNum		  		= 4;
   		sT[0].sTAL[44].nKommStatusNum		= 2;
   		sT[0].sTAL[44].nIEC_DP_2BIT1 		= 198;
		sT[0].sTAL[44].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[44].nIEC_DP_2BIT_BENT1	= 913;
                     
/* Esztergom, Béke tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[45].nType = TYP_MOT;

	sT[0].sMOT[45].nIEC_SP				= 858;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[45].nIEC_DP				= 199;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP_NUM			= 10;   	/* Két bites értékek száma*/
	sT[0].sMOT[45].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[45].nNMNum				= 0;		/* Analóg mérések száma*/
                     
/* Esztergom, Borászat, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[46].nType = TYP_MOT;

	sT[0].sMOT[46].nIEC_SP				= 874;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[46].nIEC_DP				= 209;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP_NUM			= 10;   	/* Két bites értékek száma*/
	sT[0].sMOT[46].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[46].nNMNum				= 0;		/* Analóg mérések száma*/

/* Esztergom, Liszt F. tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[47].nType = TYP_MOT;

	sT[0].sMOT[47].nIEC_SP				= 890;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[47].nIEC_DP				= 219;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP_NUM			= 10;   	/* Két bites értékek száma*/
	sT[0].sMOT[47].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[47].nNMNum				= 0;		/* Analóg mérések száma*/

/* Esztergom, Erzsébet tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[48].nType = TYP_MOT;

	sT[0].sMOT[48].nIEC_SP				= 906;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[48].nIEC_DP				= 229;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP_NUM			= 10;   	/* Két bites értékek száma*/
	sT[0].sMOT[48].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[48].nNMNum				= 0;		/* Analóg mérések száma*/

/* Gyõr, Batthányi tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[49].nType = TYP_MOT;

	sT[0].sMOT[49].nIEC_SP				= 922;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[49].nIEC_DP				= 239;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[49].nIEC_NM				= 185;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[49].nNMNum				= 2;		/* Analóg mérések száma*/

/* Gyõr, Petõfi tér, MOSCAD-L -----------------------------------------------*/
sT[0].sTI[50].nType = TYP_MOT;

	sT[0].sMOT[50].nIEC_SP				= 938;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[50].nIEC_DP				= 250;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[50].nIEC_NM				= 187;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[50].nNMNum				= 2;		/* Analóg mérések száma*/
     
/* 10-27 PM6 --------------------------------------------------------------*/	
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 954;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_DP				= 258;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_NM				= 189;		/* Mérések IEC kezdõcíme */
     
/* 10-39 PM6 --------------------------------------------------------------*/	
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 970;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_DP				= 259;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_NM				= 192;		/* Mérések IEC kezdõcíme */
     
 /* 10-49 PM6 --------------------------------------------------------------*/	
sT[0].sTI[53].nType = TYP_TMOK;

	sT[0].sMOT[53].nIEC_SP				= 986;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_DP				= 260;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_NM				= 195;		/* Mérések IEC kezdõcíme */
    
 /* 10-66 PM6 --------------------------------------------------------------*/	
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 1002;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP				= 261;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_NM				= 198;		/* Mérések IEC kezdõcíme */
     
/* Gyõr, Borsodi mûhely, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[55].nType = TYP_MOT;

	sT[0].sMOT[55].nIEC_SP				= 1018;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[55].nIEC_DP				= 262;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[55].nIEC_NM				= 201;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[55].nNMNum				= 2;		/* Analóg mérések száma*/
     
 /* 10-46 OK2 --------------------------------------------------------------*/	
sT[0].sTI[56].nType = TYP_TMOK;

	sT[0].sMOT[56].nIEC_SP				= 1034;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_DP				= 270;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_NM				= 203;		/* Mérések IEC kezdõcíme */
  
 /* 10-76 OK2 --------------------------------------------------------------*/	
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 1050;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_DP				= 271;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_NM				= 206;		/* Mérések IEC kezdõcíme */
  
 /* 10-98 OK2 --------------------------------------------------------------*/	
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 1066;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP				= 272;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_NM				= 209;		/* Mérések IEC kezdõcíme */

 /* 10-99 OK2 --------------------------------------------------------------*/	
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 1082;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP				= 273;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_NM				= 212;		/* Mérések IEC kezdõcíme */

 /* 11-14 OK2 --------------------------------------------------------------*/	
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 1098;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP				= 274;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_NM				= 863;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[60].nNMNum      			= 4;
	
 /* 11-20 OK2 --------------------------------------------------------------*/	
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 1114;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP				= 275;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_NM				= 218;		/* Mérések IEC kezdõcíme */

 /* 11-57 OK2 --------------------------------------------------------------*/	
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1130;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP				= 276;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_NM				= 221;		/* Mérések IEC kezdõcíme */

 /* 11-72 OK2 --------------------------------------------------------------*/	
sT[0].sTI[63].nType = TYP_TMOK;

	sT[0].sMOT[63].nIEC_SP				= 1146;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_DP				= 277;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_NM				= 224;		/* Mérések IEC kezdõcíme */

 /* 11-76 OK2 --------------------------------------------------------------*/	
sT[0].sTI[64].nType = TYP_TMOK;

	sT[0].sMOT[64].nIEC_SP				= 1162;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_DP				= 278;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_NM				= 227;		/* Mérések IEC kezdõcíme */

 /* 11-97 OK2 --------------------------------------------------------------*/	
sT[0].sTI[65].nType = TYP_TMOK;

	sT[0].sMOT[65].nIEC_SP				= 1178;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_DP				= 279;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_NM				= 879;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[65].nNMNum      			= 4;		/* Mérések száma */


 /* 60-79 OK2 --------------------------------------------------------------*/	
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1194;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_DP				= 280;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_NM				= 233;		/* Mérések IEC kezdõcíme */

 /* 60-84 OK2 --------------------------------------------------------------*/	
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1210;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP				= 281;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_NM				= 236;		/* Mérések IEC kezdõcíme */

/* 87-96, 87-25 -----------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1226;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[68].nIEC_DP				= 282;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[68].nIEC_NM				= 239;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[68].nNMNum				= 4;		/* Analóg mérések száma*/

 /* 11-67 OK2 --------------------------------------------------------------*/	
sT[0].sTI[69].nType = TYP_TMOK;

	sT[0].sMOT[69].nIEC_SP				= 1260;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_DP				= 284;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_NM				= 243;		/* Mérések IEC kezdõcíme */

 /* 20-27 OK2 --------------------------------------------------------------*/	
sT[0].sTI[70].nType = TYP_TMOK;

	sT[0].sMOT[70].nIEC_SP				= 1276;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_DP				= 285;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_NM				= 246;		/* Mérések IEC kezdõcíme */
 /* 81-95 OK2 --------------------------------------------------------------*/	
sT[0].sTI[71].nType = TYP_TMOK;

	sT[0].sMOT[71].nIEC_SP				= 1292;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_DP				= 286;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_NM				= 249;		/* Mérések IEC kezdõcíme */
 /* 42-26 OK2 --------------------------------------------------------------*/	
sT[0].sTI[72].nType = TYP_TMOK;

	sT[0].sMOT[72].nIEC_SP				= 1308;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP				= 287;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_NM				= 252;		/* Mérések IEC kezdõcíme */
 /* 79-047 OK2 --------------------------------------------------------------*/	
sT[0].sTI[73].nType = TYP_TMOK;

	sT[0].sMOT[73].nIEC_SP				= 1324;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_DP				= 288;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_NM				= 255;		/* Mérések IEC kezdõcíme */
 /* 52-61 OK2 --------------------------------------------------------------*/	
sT[0].sTI[74].nType = TYP_TMOK;

	sT[0].sMOT[74].nIEC_SP				= 1340;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_DP				= 289;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_NM				= 258;		/* Mérések IEC kezdõcíme */
 /* 52-92 OK2 --------------------------------------------------------------*/	
sT[0].sTI[75].nType = TYP_TMOK;

	sT[0].sMOT[75].nIEC_SP				= 1356;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP				= 290;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_NM				= 261;		/* Mérések IEC kezdõcíme */
 /* 37-30 OK2 --------------------------------------------------------------*/	
sT[0].sTI[76].nType = TYP_TMOK;

	sT[0].sMOT[76].nIEC_SP				= 1372;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP				= 291;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_NM				= 264;		/* Mérések IEC kezdõcíme */

/* Gyõr, IGM, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[77].nType = TYP_MOT;

	sT[0].sMOT[77].nIEC_SP				= 1388;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[77].nIEC_DP				= 292;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[77].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[77].nNMNum				= 0;		/* Analóg mérések száma*/

/* Gyõr, Büchl, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[78].nType = TYP_MOT;

	sT[0].sMOT[78].nIEC_SP				= 1404;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[78].nIEC_DP				= 300;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[78].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[78].nNMNum				= 0;		/* Analóg mérések száma*/

 /* 10-41 OK2 --------------------------------------------------------------*/	
sT[0].sTI[79].nType = TYP_TMOK;

	sT[0].sMOT[79].nIEC_SP				= 1420;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_DP				= 308;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_NM				= 267;		/* Mérések IEC kezdõcíme */
 /* 10-44 OK2 --------------------------------------------------------------*/	
sT[0].sTI[80].nType = TYP_TMOK;

	sT[0].sMOT[80].nIEC_SP				= 1436;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_DP				= 309;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_NM				= 270;		/* Mérések IEC kezdõcíme */
 /* 10-53 OK2 --------------------------------------------------------------*/	
sT[0].sTI[81].nType = TYP_TMOK;

	sT[0].sMOT[81].nIEC_SP				= 1452;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP				= 310;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_NM				= 273;		/* Mérések IEC kezdõcíme */
 /* 10-64 OK2 --------------------------------------------------------------*/	
sT[0].sTI[82].nType = TYP_TMOK;

	sT[0].sMOT[82].nIEC_SP				= 1468;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP				= 311;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_NM				= 276;		/* Mérések IEC kezdõcíme */
 /* 10-67 OK2 --------------------------------------------------------------*/	
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 1484;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_DP				= 312;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_NM				= 279;		/* Mérések IEC kezdõcíme */
 /* 10-71 OK2 --------------------------------------------------------------*/	
sT[0].sTI[84].nType = TYP_TMOK;

	sT[0].sMOT[84].nIEC_SP				= 1500;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_DP				= 313;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_NM				= 282;		/* Mérések IEC kezdõcíme */
 /* 10-84 OK2 --------------------------------------------------------------*/	
sT[0].sTI[85].nType = TYP_TMOK;

	sT[0].sMOT[85].nIEC_SP				= 1516;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_DP				= 314;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_NM				= 285;		/* Mérések IEC kezdõcíme */
 /* 10-85 OK2 --------------------------------------------------------------*/	
sT[0].sTI[86].nType = TYP_TMOK;

	sT[0].sMOT[86].nIEC_SP				= 1532;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_DP				= 315;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_NM				= 288;		/* Mérések IEC kezdõcíme */
 /* 10-92 OK2 --------------------------------------------------------------*/	
sT[0].sTI[87].nType = TYP_TMOK;

	sT[0].sMOT[87].nIEC_SP				= 1548;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_DP				= 316;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_NM				= 291;		/* Mérések IEC kezdõcíme */
 /* 11-12 OK2 --------------------------------------------------------------*/	
sT[0].sTI[88].nType = TYP_TMOK;

	sT[0].sMOT[88].nIEC_SP				= 1564;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_DP				= 317;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_NM				= 294;		/* Mérések IEC kezdõcíme */
 /* 11-56 OK2 --------------------------------------------------------------*/	
sT[0].sTI[89].nType = TYP_TMOK;

	sT[0].sMOT[89].nIEC_SP				= 1580;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_DP				= 318;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_NM				= 297;		/* Mérések IEC kezdõcíme */
 /* 15-52 OK2 --------------------------------------------------------------*/	
sT[0].sTI[90].nType = TYP_TMOK;

	sT[0].sMOT[90].nIEC_SP				= 1596;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP				= 319;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_NM				= 300;		/* Mérések IEC kezdõcíme */
 /* 15-54 OK2 --------------------------------------------------------------*/	
sT[0].sTI[91].nType = TYP_TMOK;

	sT[0].sMOT[91].nIEC_SP				= 1612;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_DP				= 320;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_NM				= 303;		/* Mérések IEC kezdõcíme */
 /* 60-16 OK2 --------------------------------------------------------------*/	
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 1628;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP				= 321;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_NM				= 306;		/* Mérések IEC kezdõcíme */
 /* 61-10 OK2 --------------------------------------------------------------*/	
sT[0].sTI[93].nType = TYP_TMOK;

	sT[0].sMOT[93].nIEC_SP				= 1644;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_DP				= 322;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_NM				= 309;		/* Mérések IEC kezdõcíme */
 /* 61-56 OK2 --------------------------------------------------------------*/	
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 1660;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_DP				= 323;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_NM				= 312;		/* Mérések IEC kezdõcíme */
 /* 65-09 OK2 --------------------------------------------------------------*/	
sT[0].sTI[95].nType = TYP_TMOK;

	sT[0].sMOT[95].nIEC_SP				= 1676;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_DP				= 324;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_NM				= 315;		/* Mérések IEC kezdõcíme */
 /* 65-17 OK2 --------------------------------------------------------------*/	
sT[0].sTI[96].nType = TYP_TMOK;

	sT[0].sMOT[96].nIEC_SP				= 1692;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_DP				= 325;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_NM				= 318;		/* Mérések IEC kezdõcíme */
 /* 60-23 OK2 --------------------------------------------------------------*/	
sT[0].sTI[97].nType = TYP_TMOK;

	sT[0].sMOT[97].nIEC_SP				= 1708;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_DP				= 326;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_NM				= 321;		/* Mérések IEC kezdõcíme */
 /* 68-945 OK2 --------------------------------------------------------------*/	
sT[0].sTI[98].nType = TYP_TMOK;

	sT[0].sMOT[98].nIEC_SP				= 1724;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP				= 327;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_NM				= 324;		/* Mérések IEC kezdõcíme */
/* 21-68 OK2 --------------------------------------------------------------*/	
sT[0].sTI[99].nType = TYP_TMOK;

	sT[0].sMOT[99].nIEC_SP				= 1740;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP				= 328;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_NM				= 327;		/* Mérések IEC kezdõcíme */
/* 21-03 OK2 --------------------------------------------------------------*/	
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 1756;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP				= 329;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_NM				= 330;		/* Mérések IEC kezdõcíme */
/* 21-69 OK2 --------------------------------------------------------------*/	
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 1772;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP				= 330;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_NM				= 333;		/* Mérések IEC kezdõcíme */
/* 21-82 OK2 --------------------------------------------------------------*/	
sT[0].sTI[102].nType = TYP_TMOK;

	sT[0].sMOT[102].nIEC_SP				= 1788;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP				= 331;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_NM				= 336;		/* Mérések IEC kezdõcíme */

/* Gyõr, METRO, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[103].nType = TYP_MOT;

	sT[0].sMOT[103].nIEC_SP				= 1804;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[103].nIEC_DP				= 332;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[103].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[103].nNMNum				= 0;		/* Analóg mérések száma*/
/* Gyõr, TESCO, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[104].nType = TYP_MOT;

	sT[0].sMOT[104].nIEC_SP				= 1820;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[104].nIEC_DP				= 340;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[104].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[104].nNMNum				= 0;		/* Analóg mérések száma*/
/* Gyõr, PLAZA, MOSCAD ACE --------------------------------------------------------------*/	
sT[0].sTI[105].nType = TYP_MOT;

	sT[0].sMOT[105].nIEC_SP				= 1836;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[105].nIEC_DP				= 348;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[105].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[105].nNMNum				= 0;		/* Analóg mérések száma*/

/* 51-66 OK2 --------------------------------------------------------------*/	
sT[0].sTI[106].nType = TYP_TMOK;

	sT[0].sMOT[106].nIEC_SP				= 1852;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_DP				= 356;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_NM				= 339;		/* Mérések IEC kezdõcíme */
/* 51-50 OK2 --------------------------------------------------------------*/	
sT[0].sTI[107].nType = TYP_TMOK;

	sT[0].sMOT[107].nIEC_SP				= 1868;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_DP				= 357;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_NM				= 342;		/* Mérések IEC kezdõcíme */
/* 51-37 OK2 --------------------------------------------------------------*/	
sT[0].sTI[108].nType = TYP_TMOK;

	sT[0].sMOT[108].nIEC_SP				= 1884;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP				= 358;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_NM				= 345;		/* Mérések IEC kezdõcíme */
/* 71-00 OK2 --------------------------------------------------------------*/	
sT[0].sTI[109].nType = TYP_TMOK;

	sT[0].sMOT[109].nIEC_SP				= 1900;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_DP				= 359;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_NM				= 348;		/* Mérések IEC kezdõcíme */
/* 71-09 OK2 --------------------------------------------------------------*/	
sT[0].sTI[110].nType = TYP_TMOK;

	sT[0].sMOT[110].nIEC_SP				= 1916;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_DP				= 360;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_NM				= 351;		/* Mérések IEC kezdõcíme */
/* 52-39 OK2 --------------------------------------------------------------*/	
sT[0].sTI[111].nType = TYP_TMOK;

	sT[0].sMOT[111].nIEC_SP				= 1932;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_DP				= 361;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_NM				= 354;		/* Mérések IEC kezdõcíme */
/* 72-42 OK2 --------------------------------------------------------------*/	
sT[0].sTI[112].nType = TYP_TMOK;

	sT[0].sMOT[112].nIEC_SP				= 1948;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_DP				= 362;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_NM				= 357;		/* Mérések IEC kezdõcíme */
/* 54-20 OK2 --------------------------------------------------------------*/	
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 1964;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP				= 363;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_NM				= 360;		/* Mérések IEC kezdõcíme */
/* 51-89 OK2 --------------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_TMOK;

	sT[0].sMOT[114].nIEC_SP				= 1980;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_DP				= 364;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_NM				= 363;		/* Mérések IEC kezdõcíme */
/* 51-90 OK2 --------------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 1996;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP				= 365;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_NM				= 366;		/* Mérések IEC kezdõcíme */
/* 72-08 OK2 --------------------------------------------------------------*/	
sT[0].sTI[116].nType = TYP_TMOK;

	sT[0].sMOT[116].nIEC_SP				= 2012;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_DP				= 366;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_NM				= 369;		/* Mérések IEC kezdõcíme */

/* Gyõr, Árkád: 3db SEPAM --------------------------------------------------------------*/	
sT[0].sTI[117].nType = TYP_ARKAD;


/* Gyõr, Árkád */

	sT[0].sSep[0].nTableNumPar		= 2;
	sT[0].sSep[0].nIEC_SP       		= 2369;
	sT[0].sSep[0].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[0].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[0].nIEC_MT_KommHiba		= 2482;
	sT[0].sSep[0].nIEC_DP       		= 367;
	sT[0].sSep[0].nIEC_DP_FSZ1  		= 368;
	sT[0].sSep[0].nIEC_NM				= 372;
	sT[0].sSep[0].nNMNum		  		= 3;


	sT[0].sSep[1].nTableNumPar		= 2;
	sT[0].sSep[1].nIEC_SP       		= 2409;
	sT[0].sSep[1].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[1].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[1].nIEC_MT_KommHiba		= 2483;
	sT[0].sSep[1].nIEC_DP       		= 369;
	sT[0].sSep[1].nIEC_DP_FSZ1  		= 370;
	sT[0].sSep[1].nIEC_NM				= 375;
	sT[0].sSep[1].nNMNum		  		= 3;

	sT[0].sSep[2].nTableNumPar		= 2;
	sT[0].sSep[2].nIEC_SP       		= 2449;
	sT[0].sSep[2].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[2].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[2].nIEC_MT_KommHiba		= 2484;
	sT[0].sSep[2].nIEC_DP       		= 371;
	sT[0].sSep[2].nIEC_DP_FSZ1  		= 372;
	sT[0].sSep[2].nIEC_NM				= 0;
	sT[0].sSep[2].nNMNum		  		= 0;

/* 37-12 OK2 --------------------------------------------------------------*/	
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2149;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP				= 373;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_NM				= 378;		/* Mérések IEC kezdõcíme */
	
/* 70-09 OK2 --------------------------------------------------------------*/	
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 2165;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_DP				= 374;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_NM				= 381;		/* Mérések IEC kezdõcíme */
	
/* 90-28 OK2 --------------------------------------------------------------*/	
sT[0].sTI[120].nType = TYP_TMOK;

	sT[0].sMOT[120].nIEC_SP				= 2181;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_DP				= 375;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_NM				= 384;		/* Mérések IEC kezdõcíme */

/* Gyõr, ETO -----------------------------------------------------------------------------------*/
sT[0].sTI[121].nType = TYP_TAL;	

		sT[0].sTAL[121].nIEC_SP       		= 2197;
		sT[0].sTAL[121].nIEC_OsszevontHiba	= 2229;
		sT[0].sTAL[121].nIEC_MT_KommHiba	= 2230;
		sT[0].sTAL[121].nIEC_DP       		= 376;
		sT[0].sTAL[121].nIEC_DP_FSZ1  		= 380;
		sT[0].sTAL[121].nIEC_NM				= 387;
		sT[0].sTAL[121].nNMNum		  		= 9;
   		sT[0].sTAL[121].nKommStatusNum		= 2;
   		
		sT[0].sTAL[121].nIEC_DP_12BIT1		= 659;		/* 1. kétbites képzett jel IEC címe*/
		sT[0].sTAL[121].nIEC_DP_12BIT2		= 660;		/* 2. egy bitbõl képzett kétbites képzett jel IEC címe*/
		sT[0].sTAL[121].nIEC_DP_12BIT3		= 661;		/* 3. egy bitbõl képzett kétbites képzett jel IEC címe*/
		sT[0].sTAL[121].nIEC_DP_2BIT_BK1	= 912;		/* 1. egy bitbõl képzett kétbites jel TALUS bemenet sorszáma */		
		sT[0].sTAL[121].nIEC_DP_2BIT_BK2	= 913;		/* 2. egy bitbõl képzett kétbites jel TALUS bemenet sorszáma */		
		sT[0].sTAL[121].nIEC_DP_2BIT_BK3	= 920;		/* 3. egy bitbõl képzett kétbites jel TALUS bemenet sorszáma */		


/* 72-99 OK2 --------------------------------------------------------------*/	
sT[0].sTI[122].nType = TYP_TMOK;

	sT[0].sMOT[122].nIEC_SP				= 2284;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_DP				= 408;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_NM				= 410;		/* Mérések IEC kezdõcíme */
/* Sopron, Fényi Gy. -----------------------------------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_MOT;

	sT[0].sMOT[123].nIEC_SP				= 2234;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[123].nIEC_DP				= 384;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[123].nIEC_NM				= 398;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[123].nNMNum				= 4;		/* Analóg mérések száma*/
/* Sopron, Tercia -----------------------------------------------------------------------------------*/
sT[0].sTI[124].nType = TYP_MOT;

	sT[0].sMOT[124].nIEC_SP				= 2250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[124].nIEC_DP				= 392;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[124].nIEC_NM				= 402;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[124].nNMNum				= 4;		/* Analóg mérések száma*/
/* Sopron, Damjanich -----------------------------------------------------------------------------------*/
sT[0].sTI[125].nType = TYP_MOT;

	sT[0].sMOT[125].nIEC_SP				= 2266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[125].nIEC_DP				= 400;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[125].nIEC_NM				= 406;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[125].nNMNum				= 4;		/* Analóg mérések száma*/
/* Pápakovácsi, szélerõmû -----------------------------------------------------------------------------------*/
sT[0].sTI[126].nType = TYP_TAL;	

		sT[0].sTAL[126].nIEC_SP       		= 2316;
		sT[0].sTAL[126].nIEC_OsszevontHiba	= 2348;
		sT[0].sTAL[126].nIEC_MT_KommHiba	= 2349;
		sT[0].sTAL[126].nIEC_DP       		= 410;
		sT[0].sTAL[126].nIEC_DP_FSZ1  		= 414;
		sT[0].sTAL[126].nIEC_NM				= 416;
		sT[0].sTAL[126].nNMNum		  		= 11;
   		sT[0].sTAL[126].nKommStatusNum		= 2;

/* 74-08 OK2 --------------------------------------------------------------*/	
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2353;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_DP				= 418;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_NM				= 427;		/* Mérések IEC kezdõcíme */
 
 /* Balatonfüred, Horvát ház -----------------------------------------------------------------------------------*/
sT[0].sTI[128].nType = TYP_MOT;

	sT[0].sMOT[128].nIEC_SP				= 2028;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[128].nIEC_DP				= 419;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[128].nIEC_NM				= 430;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[128].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Balatonfüred, Hotel Flamingo -----------------------------------------------------------------------------------*/
sT[0].sTI[129].nType = TYP_MOT;

	sT[0].sMOT[129].nIEC_SP				= 2044;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[129].nIEC_DP				= 427;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[129].nIEC_NM				= 434;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[129].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Balatonfüred, Cziegle -----------------------------------------------------------------------------------*/
sT[0].sTI[130].nType = TYP_MOT;

	sT[0].sMOT[130].nIEC_SP				= 2060;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[130].nIEC_DP				= 435;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[130].nIEC_NM				= 438;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[130].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Balatonfüred, Zakonyi -----------------------------------------------------------------------------------*/
sT[0].sTI[131].nType = TYP_MOT;

	sT[0].sMOT[131].nIEC_SP				= 2076;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[131].nIEC_DP				= 443;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[131].nIEC_NM				= 442;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[131].nNMNum				= 4;		/* Analóg mérések száma*/

 /* Balatonfüred, Csokonai -----------------------------------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_MOT;

	sT[0].sMOT[132].nIEC_SP				= 2092;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[132].nIEC_DP				= 451;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[132].nIEC_NM				= 446;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[132].nNMNum				= 4;		/* Analóg mérések száma*/
	
/* 41-55 OK2 --------------------------------------------------------------*/	
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2300;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_DP				= 409;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_NM				= 413;		/* Mérések IEC kezdõcíme */

 /* Vasvár, állomás -----------------------------------------------------------------------------------*/
sT[0].sTI[134].nType = TYP_MOT;

	sT[0].sMOT[134].nIEC_SP				= 2108;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[134].nIEC_DP				= 459;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[134].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[134].nNMNum				= 0;		/* Analóg mérések száma*/
	
/* 12-16 OK2 --------------------------------------------------------------*/	
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2502;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_DP				= 467;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_NM				= 450;		/* Mérések IEC kezdõcíme */
/* 12-16 OK2 --------------------------------------------------------------*/	
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2518;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_DP				= 468;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_NM				= 453;		/* Mérések IEC kezdõcíme */

/* Várpalota, Faller -----------------------------------------------------------------------------------*/
sT[0].sTI[137].nType = TYP_MOT;

	sT[0].sMOT[137].nIEC_SP				= 2534;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[137].nIEC_DP				= 469;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[137].nIEC_NM				= 456;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[137].nNMNum				= 4;		/* Analóg mérések száma*/
	
/* Sopron, Hársfa sor -----------------------------------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_MOT;

	sT[0].sMOT[138].nIEC_SP				= 2550;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[138].nIEC_DP				= 477;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[138].nIEC_NM				= 460;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[138].nNMNum				= 4;		/* Analóg mérések száma*/
	
 /* Tapolca, gyógyszálló -----------------------------------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_MOT;

	sT[0].sMOT[139].nIEC_SP				= 2566;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[139].nIEC_DP				= 485;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[139].nIEC_NM				= 464;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[139].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Veszprém, Cserhát -----------------------------------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_MOT;

	sT[0].sMOT[140].nIEC_SP				= 2584;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[140].nIEC_DP				= 500;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[140].nIEC_NM				= 468;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[140].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Veszprém, idõsek otthona -----------------------------------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_MOT;

	sT[0].sMOT[141].nIEC_SP				= 2602;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[141].nIEC_DP				= 508;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[141].nIEC_NM				= 472;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[141].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Körmend, Eybl -----------------------------------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_MOT;

	sT[0].sMOT[142].nIEC_SP				= 2618;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[142].nIEC_DP				= 516;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[142].nIEC_NM				= 476;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[142].nNMNum				= 4;		/* Analóg mérések száma*/
 
/* 65-31 OK2 --------------------------------------------------------------*/	
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 2634;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_DP				= 524;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_NM				= 480;		/* Mérések IEC kezdõcíme */
 
/* 60-21 OK2 --------------------------------------------------------------*/	
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 2650;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_DP				= 525;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_NM				= 483;		/* Mérések IEC kezdõcíme */
/* 61-34 OK2 --------------------------------------------------------------*/	
sT[0].sTI[145].nType = TYP_TMOK;

	sT[0].sMOT[145].nIEC_SP				= 2666;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_DP				= 526;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_NM				= 486;		/* Mérések IEC kezdõcíme */
/* 34-02 OK2 --------------------------------------------------------------*/	
sT[0].sTI[146].nType = TYP_TMOK;

	sT[0].sMOT[146].nIEC_SP				= 2682;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_DP				= 527;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_NM				= 489;		/* Mérések IEC kezdõcíme */
/* 42-19 OK2 --------------------------------------------------------------*/	
sT[0].sTI[147].nType = TYP_TMOK;

	sT[0].sMOT[147].nIEC_SP				= 2698;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_DP				= 528;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_NM				= 492;		/* Mérések IEC kezdõcíme */
/* 90-22 OK2 --------------------------------------------------------------*/	
sT[0].sTI[148].nType = TYP_TMOK;

	sT[0].sMOT[148].nIEC_SP				= 2714;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_DP				= 529;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_NM				= 495;		/* Mérések IEC kezdõcíme */
/* 21074 OK2 --------------------------------------------------------------*/	
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 2730;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_DP				= 530;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_NM				= 498;		/* Mérések IEC kezdõcíme */
/* 21100 OK2 --------------------------------------------------------------*/	
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 2746;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_DP				= 531;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_NM				= 501;		/* Mérések IEC kezdõcíme */
/* 87-12 OK2 --------------------------------------------------------------*/	
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 2762;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_DP				= 532;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_NM				= 504;		/* Mérések IEC kezdõcíme */
/* 87-13 OK2 --------------------------------------------------------------*/	
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 2778;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_DP				= 533;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_NM				= 507;		/* Mérések IEC kezdõcíme */
/* 50-58 OK2 --------------------------------------------------------------*/	
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 2794;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_DP				= 534;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_NM				= 510;		/* Mérések IEC kezdõcíme */
/* 51-80 OK2 --------------------------------------------------------------*/	
sT[0].sTI[154].nType = TYP_TMOK;

	sT[0].sMOT[154].nIEC_SP				= 2810;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_DP				= 535;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_NM				= 513;		/* Mérések IEC kezdõcíme */
/* 52-65 OK2 --------------------------------------------------------------*/	
sT[0].sTI[155].nType = TYP_TMOK;

	sT[0].sMOT[155].nIEC_SP				= 2826;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_DP				= 536;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_NM				= 516;		/* Mérések IEC kezdõcíme */
 /* 52-94 OK2 --------------------------------------------------------------*/	
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 2842;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_DP				= 537;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_NM				= 519;		/* Mérések IEC kezdõcíme */
  /* 54-29 OK2 --------------------------------------------------------------*/	
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 2858;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_DP				= 538;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_NM				= 522;		/* Mérések IEC kezdõcíme */
  /* 54-54 OK2 --------------------------------------------------------------*/	
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 2874;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_DP				= 539;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_NM				= 525;		/* Mérések IEC kezdõcíme */
  /* 71-92 OK2 --------------------------------------------------------------*/	
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 2890;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_DP				= 540;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_NM				= 528;		/* Mérések IEC kezdõcíme */
	
/* Gyõr, DAC --------------------------------------------------------------*/	
sT[0].sTI[160].nType = TYP_MOT;

	sT[0].sMOT[160].nIEC_SP				= 2126;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_DP				= 0;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[160].nIEC_SP_NUM			= 7;		/* Egybites értékek száma*/	
	sT[0].sMOT[160].nIEC_DP_NUM			= 0;
	sT[0].sMOT[160].nNMNum      		= 0;
  /* 21-63 OK2 --------------------------------------------------------------*/	
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 2906;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_DP				= 541;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_NM				= 531;		/* Mérések IEC kezdõcíme */
  /* 90-13 OK2 --------------------------------------------------------------*/	
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 2922;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_DP				= 542;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_NM				= 534;		/* Mérések IEC kezdõcíme */

  /* 60-19 OK2 --------------------------------------------------------------*/	
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 2938;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_DP				= 543;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_NM				= 537;		/* Mérések IEC kezdõcíme */

  /* 60-26 OK2 --------------------------------------------------------------*/	
sT[0].sTI[164].nType = TYP_TMOK;

	sT[0].sMOT[164].nIEC_SP				= 2954;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_DP				= 544;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_NM				= 540;		/* Mérések IEC kezdõcíme */
  /* 60-99 OK2 --------------------------------------------------------------*/	
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 2970;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_DP				= 545;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_NM				= 543;		/* Mérések IEC kezdõcíme */
  /* 42-30 OK2 --------------------------------------------------------------*/	
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 2986;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_DP				= 546;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_NM				= 546;		/* Mérések IEC kezdõcíme */
/* 42-42 OK2 --------------------------------------------------------------*/	
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 3002;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_DP				= 547;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_NM				= 549;		/* Mérések IEC kezdõcíme */
/* 21-71 OK2 --------------------------------------------------------------*/	
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 3018;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_DP				= 548;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_NM				= 552;		/* Mérések IEC kezdõcíme */
/* 87-20 OK2 --------------------------------------------------------------*/	
sT[0].sTI[169].nType = TYP_TMOK;

	sT[0].sMOT[169].nIEC_SP				= 3034;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_DP				= 549;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_NM				= 555;		/* Mérések IEC kezdõcíme */
/* 87-65 OK2 --------------------------------------------------------------*/	
sT[0].sTI[170].nType = TYP_TMOK;

	sT[0].sMOT[170].nIEC_SP				= 3050;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_DP				= 550;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_NM				= 558;		/* Mérések IEC kezdõcíme */
 /* Gyõr, aluljáró -----------------------------------------------------------------------------------*/
sT[0].sTI[171].nType = TYP_MOT;

	sT[0].sMOT[171].nIEC_SP				= 3066;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[171].nIEC_DP				= 551;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_DP_NUM			= 8;   	/* Két bites értékek száma*/
	sT[0].sMOT[171].nIEC_NM				= 561;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[171].nNMNum				= 4;		/* Analóg mérések száma*/
 /* Gyõr, dunapart -----------------------------------------------------------------------------------*/
sT[0].sTI[172].nType = TYP_MOT;

	sT[0].sMOT[172].nIEC_SP				= 3084;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[172].nIEC_DP				= 708;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_DP_NUM			= 16;   	/* Két bites értékek száma*/
	sT[0].sMOT[172].nIEC_NM				= 565;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[172].nNMNum				= 4;		/* Analóg mérések száma*/

/* 21-09 OK2 --------------------------------------------------------------*/	
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 3102;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_DP				= 567;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_NM				= 569;		/* Mérések IEC kezdõcíme */
/* 21-96 OK2 --------------------------------------------------------------*/	
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 3118;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_DP				= 568;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_NM				= 572;		/* Mérések IEC kezdõcíme */
/* 31-64 OK2 --------------------------------------------------------------*/	
sT[0].sTI[175].nType = TYP_TMOK;

	sT[0].sMOT[175].nIEC_SP				= 3134;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_DP				= 569;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_NM				= 575;		/* Mérések IEC kezdõcíme */
/* 87-16 OK2 --------------------------------------------------------------*/	
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 3150;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_DP				= 570;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_NM				= 578;		/* Mérések IEC kezdõcíme */
/* 87-42 OK2 --------------------------------------------------------------*/	
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 3166;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_DP				= 571;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_NM				= 581;		/* Mérések IEC kezdõcíme */
/* 87-68 OK2 --------------------------------------------------------------*/	
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 3182;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_DP				= 572;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_NM				= 584;		/* Mérések IEC kezdõcíme */
/* 43-37 OK2 --------------------------------------------------------------*/	
sT[0].sTI[179].nType = TYP_TMOK;

	sT[0].sMOT[179].nIEC_SP				= 3198;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_DP				= 573;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_NM				= 587;		/* Mérések IEC kezdõcíme */
/* 90-24 OK2 --------------------------------------------------------------*/	
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3214;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_DP				= 574;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_NM				= 590;		/* Mérések IEC kezdõcíme */
/* 31-66  --------------------------------------------------------------*/	
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 3230;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_DP				= 575;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_NM				= 593;		/* Mérések IEC kezdõcíme */
/* 35-14  --------------------------------------------------------------*/	
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 3246;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_DP				= 576;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_NM				= 596;		/* Mérések IEC kezdõcíme */
/* 11-07  --------------------------------------------------------------*/	
sT[0].sTI[183].nType = TYP_TMOK;

	sT[0].sMOT[183].nIEC_SP				= 3326;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_DP				= 581;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_NM				= 611;		/* Mérések IEC kezdõcíme */

/* 13-07  --------------------------------------------------------------*/	
sT[0].sTI[184].nType = TYP_TMOK;

	sT[0].sMOT[184].nIEC_SP				= 3422;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_DP				= 587;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_NM				= 629;		/* Mérések IEC kezdõcíme */
/* Kapuvár, Biogáz -----------------------------------------------------------------------------------*/
sT[0].sTI[185].nType = TYP_TAL;	

		sT[0].sTAL[185].nIEC_SP       		= 3646;
		sT[0].sTAL[185].nIEC_OsszevontHiba	= 3678;
		sT[0].sTAL[185].nIEC_MT_KommHiba	= 3679;
		sT[0].sTAL[185].nIEC_DP       		= 601;
		sT[0].sTAL[185].nIEC_DP_FSZ1  		= 605;
		sT[0].sTAL[185].nIEC_NM				= 671;
		sT[0].sTAL[185].nNMNum		  		= 11;
   		sT[0].sTAL[185].nKommStatusNum		= 2;
/* 10-17  --------------------------------------------------------------*/	
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3262;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_DP				= 577;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_NM				= 599;		/* Mérések IEC kezdõcíme */
/* 10-18  --------------------------------------------------------------*/	
sT[0].sTI[187].nType = TYP_TMOK;

	sT[0].sMOT[187].nIEC_SP				= 3278;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_DP				= 578;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_NM				= 602;		/* Mérések IEC kezdõcíme */
/* 10-50  --------------------------------------------------------------*/	
sT[0].sTI[188].nType = TYP_TMOK;

	sT[0].sMOT[188].nIEC_SP				= 3294;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_DP				= 579;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_NM				= 605;		/* Mérések IEC kezdõcíme */
/* 10-93  --------------------------------------------------------------*/	
sT[0].sTI[189].nType = TYP_TMOK;

	sT[0].sMOT[189].nIEC_SP				= 3310;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_DP				= 580;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_NM				= 608;		/* Mérések IEC kezdõcíme */
/* 11-33  --------------------------------------------------------------*/	
sT[0].sTI[190].nType = TYP_TMOK;

	sT[0].sMOT[190].nIEC_SP				= 3342;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_DP				= 582;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_NM				= 614;		/* Mérések IEC kezdõcíme */
/* 11-55  --------------------------------------------------------------*/	
sT[0].sTI[191].nType = TYP_TMOK;

	sT[0].sMOT[191].nIEC_SP				= 3358;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_DP				= 583;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_NM				= 617;		/* Mérések IEC kezdõcíme */
/* 11-89  --------------------------------------------------------------*/	
sT[0].sTI[192].nType = TYP_TMOK;

	sT[0].sMOT[192].nIEC_SP				= 3374;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_DP				= 584;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_NM				= 620;		/* Mérések IEC kezdõcíme */
/* 11-93  --------------------------------------------------------------*/	
sT[0].sTI[193].nType = TYP_TMOK;

	sT[0].sMOT[193].nIEC_SP				= 3390;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_DP				= 585;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_NM				= 623;		/* Mérések IEC kezdõcíme */
/* 13-04  --------------------------------------------------------------*/	
sT[0].sTI[194].nType = TYP_TMOK;

	sT[0].sMOT[194].nIEC_SP				= 3406;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_DP				= 586;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_NM				= 626;		/* Mérések IEC kezdõcíme */
/* 13-12  --------------------------------------------------------------*/	
sT[0].sTI[195].nType = TYP_TMOK;

	sT[0].sMOT[195].nIEC_SP				= 3438;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_DP				= 588;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_NM				= 632;		/* Mérések IEC kezdõcíme */
/* 13-30  --------------------------------------------------------------*/	
sT[0].sTI[196].nType = TYP_TMOK;

	sT[0].sMOT[196].nIEC_SP				= 3454;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_DP				= 589;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_NM				= 635;		/* Mérések IEC kezdõcíme */
/* 13-84  --------------------------------------------------------------*/	
sT[0].sTI[197].nType = TYP_TMOK;

	sT[0].sMOT[197].nIEC_SP				= 3470;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_DP				= 590;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_NM				= 638;		/* Mérések IEC kezdõcíme */
/* 13-87  --------------------------------------------------------------*/	
sT[0].sTI[198].nType = TYP_TMOK;

	sT[0].sMOT[198].nIEC_SP				= 3486;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_DP				= 591;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_NM				= 641;		/* Mérések IEC kezdõcíme */
/* 15-07  --------------------------------------------------------------*/	
sT[0].sTI[199].nType = TYP_TMOK;

	sT[0].sMOT[199].nIEC_SP				= 3502;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_DP				= 592;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_NM				= 644;		/* Mérések IEC kezdõcíme */
/* 61-35  --------------------------------------------------------------*/	
sT[0].sTI[200].nType = TYP_TMOK;

	sT[0].sMOT[200].nIEC_SP				= 3518;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_DP				= 593;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_NM				= 647;		/* Mérések IEC kezdõcíme */
/* 61-49  --------------------------------------------------------------*/	
sT[0].sTI[201].nType = TYP_TMOK;

	sT[0].sMOT[201].nIEC_SP				= 3534;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_DP				= 594;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_NM				= 650;		/* Mérések IEC kezdõcíme */
/* 62-02  --------------------------------------------------------------*/	
sT[0].sTI[202].nType = TYP_TMOK;

	sT[0].sMOT[202].nIEC_SP				= 3550;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_DP				= 595;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_NM				= 653;		/* Mérések IEC kezdõcíme */
/* 62-15  --------------------------------------------------------------*/	
sT[0].sTI[203].nType = TYP_TMOK;

	sT[0].sMOT[203].nIEC_SP				= 3566;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_DP				= 596;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_NM				= 656;		/* Mérések IEC kezdõcíme */
/* 62-16	  --------------------------------------------------------------*/	
sT[0].sTI[204].nType = TYP_TMOK;

	sT[0].sMOT[204].nIEC_SP				= 3582;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_DP				= 597;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_NM				= 659;		/* Mérések IEC kezdõcíme */
/* 62-79	  --------------------------------------------------------------*/	
sT[0].sTI[205].nType = TYP_TMOK;

	sT[0].sMOT[205].nIEC_SP				= 3598;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_DP				= 598;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_NM				= 662;		/* Mérések IEC kezdõcíme */
/* 69-433	  --------------------------------------------------------------*/	
sT[0].sTI[206].nType = TYP_TMOK;

	sT[0].sMOT[206].nIEC_SP				= 3614;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_DP				= 599;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_NM				= 665;		/* Mérések IEC kezdõcíme */
/* 69-434	  --------------------------------------------------------------*/	
sT[0].sTI[207].nType = TYP_TMOK;

	sT[0].sMOT[207].nIEC_SP				= 3630;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_DP				= 600;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_NM				= 668;		/* Mérések IEC kezdõcíme */
/* 37-99	  --------------------------------------------------------------*/	
sT[0].sTI[208].nType = TYP_TMOK;

	sT[0].sMOT[208].nIEC_SP				= 3683;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_DP				= 609;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_NM				= 682;		/* Mérések IEC kezdõcíme */
/* Kapuvár, Biogáz -----------------------------------------------------------------------------------*/
sT[0].sTI[209].nType = TYP_TAL;	

		sT[0].sTAL[209].nIEC_SP       		= 3699;
		sT[0].sTAL[209].nIEC_OsszevontHiba	= 3731;
		sT[0].sTAL[209].nIEC_MT_KommHiba	= 3732;
		sT[0].sTAL[209].nIEC_DP       		= 610;
		sT[0].sTAL[209].nIEC_DP_FSZ1  		= 614;
		sT[0].sTAL[209].nIEC_NM				= 685;
		sT[0].sTAL[209].nNMNum		  		= 11;
   		sT[0].sTAL[209].nKommStatusNum		= 2;
/* 11-23	  --------------------------------------------------------------*/	
sT[0].sTI[210].nType = TYP_TMOK;

	sT[0].sMOT[210].nIEC_SP				= 3736;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_DP				= 618;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_NM				= 696;		/* Mérések IEC kezdõcíme */
/* 11-27	  --------------------------------------------------------------*/	
sT[0].sTI[211].nType = TYP_TMOK;

	sT[0].sMOT[211].nIEC_SP				= 3752;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_DP				= 619;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_NM				= 843;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[211].nNMNum     			= 4;		/* Mérések száma */
	
	
/* 12-89	  --------------------------------------------------------------*/	
sT[0].sTI[212].nType = TYP_TMOK;

	sT[0].sMOT[212].nIEC_SP				= 3768;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_DP				= 620;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_NM				= 702;		/* Mérések IEC kezdõcíme */
/* 51-34	  --------------------------------------------------------------*/	
sT[0].sTI[213].nType = TYP_TMOK;

	sT[0].sMOT[213].nIEC_SP				= 3784;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_DP				= 621;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_NM				= 705;		/* Mérések IEC kezdõcíme */
/* 71-98	  --------------------------------------------------------------*/	
sT[0].sTI[214].nType = TYP_TMOK;

	sT[0].sMOT[214].nIEC_SP				= 3800;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_DP				= 622;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_NM				= 708;		/* Mérések IEC kezdõcíme */
 /* 20-03	  --------------------------------------------------------------*/	
sT[0].sTI[215].nType = TYP_TMOK;

	sT[0].sMOT[215].nIEC_SP				= 3816;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_DP				= 623;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_NM				= 711;		/* Mérések IEC kezdõcíme */

 /* 20-09	  --------------------------------------------------------------*/	
sT[0].sTI[216].nType = TYP_TMOK;

	sT[0].sMOT[216].nIEC_SP				= 3832;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_DP				= 624;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_NM				= 714;		/* Mérések IEC kezdõcíme */
 /* 20-04	  --------------------------------------------------------------*/	
sT[0].sTI[217].nType = TYP_TMOK;

	sT[0].sMOT[217].nIEC_SP				= 3848;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_DP				= 625;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_NM				= 717;		/* Mérések IEC kezdõcíme */
 /* 37-24	  --------------------------------------------------------------*/	
sT[0].sTI[218].nType = TYP_TMOK;

	sT[0].sMOT[218].nIEC_SP				= 3864;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_DP				= 626;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_NM				= 720;		/* Mérések IEC kezdõcíme */
 /* 51-99	  --------------------------------------------------------------*/	
sT[0].sTI[219].nType = TYP_TMOK;

	sT[0].sMOT[219].nIEC_SP				= 3880;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_DP				= 627;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_NM				= 723;		/* Mérések IEC kezdõcíme */
 /* 73-51	  --------------------------------------------------------------*/	
sT[0].sTI[220].nType = TYP_TMOK;

	sT[0].sMOT[220].nIEC_SP				= 3896;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_DP				= 628;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_NM				= 726;		/* Mérések IEC kezdõcíme */
 /* 87-29	  --------------------------------------------------------------*/	
sT[0].sTI[221].nType = TYP_TMOK;

	sT[0].sMOT[221].nIEC_SP				= 3912;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_DP				= 629;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_NM				= 729;		/* Mérések IEC kezdõcíme */

 /* Csorna, Kórház -----------------------------------------------------------------------------------*/
sT[0].sTI[222].nType = TYP_MOT;

	sT[0].sMOT[222].nIEC_SP				= 3928;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[222].nIEC_DP				= 630;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[222].nIEC_NM				= 732;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[222].nNMNum				= 4;		/* Analóg mérések száma*/
/* Veszprém, Landfill -----------------------------------------------------------------------------------*/
sT[0].sTI[223].nType = TYP_TAL;	

		sT[0].sTAL[223].nIEC_SP       		= 3944;
		sT[0].sTAL[223].nIEC_OsszevontHiba	= 3976;
		sT[0].sTAL[223].nIEC_MT_KommHiba	= 3977;
		sT[0].sTAL[223].nIEC_DP       		= 638;
		sT[0].sTAL[223].nIEC_DP_FSZ1  		= 642;
		sT[0].sTAL[223].nIEC_NM				= 736;
		sT[0].sTAL[223].nNMNum		  		= 11;
   		sT[0].sTAL[223].nKommStatusNum		= 2;
 /* 37-05	  --------------------------------------------------------------*/	
sT[0].sTI[224].nType = TYP_TMOK;

	sT[0].sMOT[224].nIEC_SP				= 3981;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[224].nIEC_DP				= 646;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[224].nIEC_NM				= 747;		/* Mérések IEC kezdõcíme */
 /* 42-43	  --------------------------------------------------------------*/	
sT[0].sTI[225].nType = TYP_TMOK;

	sT[0].sMOT[225].nIEC_SP				= 3997;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_DP				= 647;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_NM				= 750;		/* Mérések IEC kezdõcíme */
 /* 42-14	  --------------------------------------------------------------*/	
sT[0].sTI[226].nType = TYP_TMOK;

	sT[0].sMOT[226].nIEC_SP				= 4013;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_DP				= 648;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_NM				= 753;		/* Mérések IEC kezdõcíme */
 /* 71-04	  --------------------------------------------------------------*/	
sT[0].sTI[227].nType = TYP_TMOK;

	sT[0].sMOT[227].nIEC_SP				= 4029;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_DP				= 649;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_NM				= 756;		/* Mérések IEC kezdõcíme */

 /* 14-44	  --------------------------------------------------------------*/	
sT[0].sTI[228].nType = TYP_TMOK;

	sT[0].sMOT[228].nIEC_SP				= 4045;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_DP				= 650;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_NM				= 759;		/* Mérések IEC kezdõcíme */

/* Gyõr, ETO II. -----------------------------------------------------------------------------------*/
sT[0].sTI[229].nType = TYP_TAL;	

		sT[0].sTAL[229].nIEC_SP       		= 4061;
		sT[0].sTAL[229].nIEC_OsszevontHiba	= 4093;
		sT[0].sTAL[229].nIEC_MT_KommHiba	= 4094;
		sT[0].sTAL[229].nIEC_DP       		= 651;
		sT[0].sTAL[229].nIEC_DP_FSZ1  		= 655;
		sT[0].sTAL[229].nIEC_NM				= 762;
		sT[0].sTAL[229].nNMNum		  		= 4;
   		sT[0].sTAL[229].nKommStatusNum		= 2;

 /* 65-50	  --------------------------------------------------------------*/	
sT[0].sTI[230].nType = TYP_TMOK;

	sT[0].sMOT[230].nIEC_SP				= 4098;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[230].nIEC_DP				= 663;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[230].nIEC_NM				= 766;		/* Mérések IEC kezdõcíme */
 
 /* 42-44	  --------------------------------------------------------------*/	
sT[0].sTI[231].nType = TYP_TMOK;

	sT[0].sMOT[231].nIEC_SP				= 4114;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[231].nIEC_DP				= 664;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[231].nIEC_NM				= 769;		/* Mérések IEC kezdõcíme */

/* Lövõ szélerõmû,  -----------------------------------------------------------------------------------*/
sT[0].sTI[232].nType = TYP_TAL;	

		sT[0].sTAL[232].nIEC_SP       		= 4130;
		sT[0].sTAL[232].nIEC_OsszevontHiba	= 4162;
		sT[0].sTAL[232].nIEC_MT_KommHiba	= 4163;
		sT[0].sTAL[232].nIEC_DP       		= 665;
		sT[0].sTAL[232].nIEC_DP_FSZ1  		= 669;
		sT[0].sTAL[232].nIEC_NM				= 772;
		sT[0].sTAL[232].nNMNum		  		= 11;
   		sT[0].sTAL[232].nKommStatusNum		= 2;

/* Bicske szeméttelep   -----------------------------------------------------------------------------------*/
sT[0].sTI[233].nType = TYP_TAL;	

		sT[0].sTAL[233].nIEC_SP       		= 4167;
		sT[0].sTAL[233].nIEC_OsszevontHiba	= 4199;
		sT[0].sTAL[233].nIEC_MT_KommHiba	= 4200;
		sT[0].sTAL[233].nIEC_DP       		= 673;
		sT[0].sTAL[233].nIEC_DP_FSZ1  		= 677;
		sT[0].sTAL[233].nIEC_NM				= 783;
		sT[0].sTAL[233].nNMNum		  		= 11;
   		sT[0].sTAL[233].nKommStatusNum		= 2;

 /* 72-56	  --------------------------------------------------------------*/	
sT[0].sTI[234].nType = TYP_TMOK;

	sT[0].sMOT[234].nIEC_SP				= 4204;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[234].nIEC_DP				= 681;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[234].nIEC_NM				= 794;		/* Mérések IEC kezdõcíme */

 /* 74-36	  --------------------------------------------------------------*/	
sT[0].sTI[235].nType = TYP_TMOK;

	sT[0].sMOT[235].nIEC_SP				= 4220;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[235].nIEC_DP				= 682;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[235].nIEC_NM				= 797;		/* Mérések IEC kezdõcíme */
/* Veszprém, Hóvirág u.  -----------------------------------------------------------*/	
sT[0].sTI[236].nType = TYP_MOT;	
	
	sT[0].sMOT[236].nIEC_SP				= 4236;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[236].nIEC_DP				= 683;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[236].nIEC_NM				= 800;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[236].nNMNum				= 4;		/* Analóg mérések száma*/

 /* 87-67	  --------------------------------------------------------------*/	
sT[0].sTI[237].nType = TYP_TMOK;

	sT[0].sMOT[237].nIEC_SP				= 4252;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[237].nIEC_DP				= 691;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[237].nIEC_NM				= 804;		/* Mérések IEC kezdõcíme */

/* Gyõr, Egyetem  -----------------------------------------------------------*/	
sT[0].sTI[238].nType = TYP_MOT;	
	
	sT[0].sMOT[238].nIEC_SP				= 4268;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[238].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[238].nIEC_DP				= 692;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[238].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[238].nIEC_NM				= 807;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[238].nNMNum				= 4;		/* Analóg mérések száma*/

/* Sopron, Várisi út  -----------------------------------------------------------*/	
sT[0].sTI[239].nType = TYP_MOT;	
	
	sT[0].sMOT[239].nIEC_SP				= 4284;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[239].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[239].nIEC_DP				= 700;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[239].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[239].nIEC_NM				= 811;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[239].nNMNum				= 4;		/* Analóg mérések száma*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
} /* end fnSetDataPar()*/

