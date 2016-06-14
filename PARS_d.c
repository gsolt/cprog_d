/**************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		21-13 NPS						*
* V2.1.2	2007.05.07	Gergely Zsolt		21-39 NPS						*
* V2.1.3	2007.05.11	Gergely Zsolt		Cseteny, kapcsoloallomas		*
* V2.1.4	2007.06.12	Gergely Zsolt		Csorna, szélerõmûpark			*
* V2.1.5	2007.06.12	Gergely Zsolt		Gyõr, Csókás u.					*
* V2.1.6	2007.06.14	Gergely Zsolt		Csorna, szélerõmûpark,MOSCAD-L	*
* V2.1.7	2007.06.19	Gergely Zsolt		50-70 NPS						*
* V2.1.8	2007.06.19	Gergely Zsolt		50-79 NPS						*
* V2.1.9	2007.07.09	Matus Zsolt			51-97 NPS						*
			2007.07.09	Matus Zsolt			58-738 NPS						*
			2007.07.09	Matus Zsolt			51-44 NPS						*
* V2.1.10	2007.07.12	Gergely Zsolt		Gyõr, Ipari Park, AHM 			*	
* V2.1.11	2007.07.27	Gergely Zsolt		51-76 			*	
* V2.1.12	2007.09.07	Gergely Zsolt		50-24 NPS						*
			2007.09.07	Gergely Zsolt		51-02 NPS						*
			2007.09.07	Gergely Zsolt		51-26 NPS						*
			2007.09.07	Gergely Zsolt		51-81 NPS						*			
* V2.1.13	2007.09.17. Gergely Zsolt		Veszprém, Szeglethy				*							
* V2.1.14	2007.09.20. Gergely Zsolt		Veszprém, OBI					*	
* V2.1.15	2007.09.26. Gergely Zsolt		Veszprém, Patak tér				*
											11-34 TMOK2 ZE						
* V2.1.16	2007.11.16. Gergely Zsolt		Veszprém, Kádár utca			*
* V2.1.17	2007.11.19. Gergely Zsolt		20-37 NPS						*
* V2.1.17	2007.11.21. Gergely Zsolt		Szentgotthárd átjátszó			*
* V2.1.18	2007.11.22. Gergely Zsolt		Pápa, TESCO						*
* V2.1.19	2007.11.28. Gergely Zsolt		Pápa: Fenyvesi, Malomkert		*
* V2.1.20	2007.11.29. Gergely Zsolt		Pápa: Huszár út, Kórház			*
* V2.1.21	2008.02.26. Gergely Zsolt		Nick, vízierõmû			*
* V2.1.22	2008.05.20. Gergely Zsolt		Gyõr, Polgármesteri hivatal		*
* V2.1.26	2008.05.26. Gergely Zsolt		Esztergom, Béke tér				*
											Esztergom, Borászat
											Liszt F. tér
											Erzsébet tér
* V2.1.22	2008.06.02. Gergely Zsolt		Gyõr, Batthyanyi tér		*	
* V2.1.22	2008.06.12. Gergely Zsolt		Gyõr, Petõfi tér		*	
* V2.1.23	2008.06.27. Gergely Zsolt		PM6: 10-27, 10-39, 10-49, 10-66		*	
* V2.1.24	2008.08.01. Gergely Zsolt		Gyõr, Petõfi tér		*	
* V2.1.25	2008.08.18. Gergely Zsolt		OK2: 		*	
* V2.1.26	2008.08.27. Gergely Zsolt		87-96, 87-25 NPS-NPS 		*	
* V2.1.27	2008.08.28. Gergely Zsolt		11-67, 20-27, 81-95 OK2 		*	
* V2.1.28	2008.09.09. Gergely Zsolt		42-26, 79-047, 52-61, 52-92, 37-30 OK2 		*	
* V2.1.29	2008.09.10. Gergely Zsolt		Gyõr IGM, Büchl			 		*	
* V2.1.30	2008.09.17. Gergely Zsolt		Gyõr 3 db kábelköri		 		*	
* V2.1.31	2008.09.18. Gergely Zsolt		11 db. TMOK		 		*	
* V2.1.32	2008.10.12. Gergely Zsolt		Gyõr, Árkád		 		*	
* V2.1.33	2008.10.14. Gergely Zsolt		37-12		 		*	
* V2.1.34	2008.10.16. Gergely Zsolt		70-09,  90-28		 		*	
* V2.1.35	2008.10.20. Gergely Zsolt		Gyõr, ETO		 		*	
* V2.1.36	2008.10.16. Gergely Zsolt		72-99		 		*	
* V2.1.37	2008.11.16. Gergely Zsolt		Sopron: Fényi, Tercia, Damjanich		 		*	
* V2.1.38	2008.11.18. Gergely Zsolt		Pápakovácsi, szélerõmû	 		*	
* V2.1.39	2008.11.18. Gergely Zsolt		74-08		 		*	
* V2.1.40	2008.11.24. Gergely Zsolt		Balatonfüred, 5 db. kábelköri		 		*	
* V2.1.40	2008.11.24. Gergely Zsolt		41-55		 		*	
* V2.1.41	2009.01.18. Gergely Zsolt		Vasvár, állomás		 		*	
* V2.1.42	2009.02.11. Gergely Zsolt		12-46, 14-48		 		*	
* V2.1.43	2009.02.23. Gergely Zsolt		6. db kábelköri		 		*	
* V2.1.44	2009.02.25. Gergely Zsolt		17. db TMOK		 		*	
* V2.1.45	2009.11.02. Gergely Zsolt		37-05		 		*	
* V2.1.46	2009.11.18. Gergely Zsolt		42-43, 42-14		 		*	
* V2.1.47	2009.11.23. Gergely Zsolt		71-04		 		*	
* V2.1.48	2010.02.08. Gergely Zsolt		42-44		 		*	
* V2.1.49	2010.03.30. Gergely Zsolt		21-68 8/4 -> 8/2		 		*	
* V2.1.50	2010.05.07. Gergely Zsolt		Gyõr, Petõfi tér 1/4 -> 1/5		 		*	
* V2.1.51	2010.11.23	Gergely Zsolt		Sopron, Várisi út							
* V2.1.52	2011.02.23	Gergely Zsolt		11-23, 1/9->1/5							
* V2.1.53	2011.09.09. Gergely Zsolt		42-44	5/8->5/9	 		*	
* V2.1.54	2012.03.22. Gergely Zsolt		60-16	3/4->3/8	 		*	
* V2.1.55	2012.05.15. Gergely Zsolt		11-12	1/4->1/5	 		*	
* V2.1.56	2012.07.04. Gergely Zsolt		Gyõr Aluljáró, IGM 	1/5->1/4	 		*	
* V2.1.57	2012.08.31. Gergely Zsolt		Gyõr Duna híd, 	1/4->1/1	 		*	
* V2.1.58	2012.10.12. Gergely Zsolt		13-81	1/5->1/1	 		*	
* V2.1.59	2012.10.16. Gergely Zsolt		10-46	1/5->1/2	 		*	
* V2.1.60	2012.12.13. Gergely Zsolt		9 db -> 1/1	 10-17,10-18,10-66,10-93,11-07,11-33,11-34,11-93,11-20		*	
* V2.1.61	2013.04.08. Gergely Zsolt		60-70	1/8->1/6	 		*	
* V2.1.62	2013.06.20. Gergely Zsolt		21-96	8/2->8/4	 		*	
* V2.1.63	2013.07.02. Gergely Zsolt		73-51	4/6->4/4   MEGSE	 		*	
* V2.1.64	2013.07.10. Gergely Zsolt		87-20	7/5->7/7   	 		*	
* V2.1.65	2013.09.27. Gergely Zsolt		60-68	1/5->1/6   	 		*	
* V2.1.65	2013.12.06. Gergely Zsolt		Sopron, Damjanich	3/4->3/8   	 		*	
* V2.1.66	2014.01.07. Gergely Zsolt		21-68 8/2 -> 8/4		 		*	
* V2.1.67	2014.06.03. Gergely Zsolt		Gyõr: Petõfi tér, Büchl, Metro, Pláza, Tesco 1/5 -> 1/1		 		*	
* V2.1.68	2014.06.06. Gergely Zsolt		Gyõr: Borsodi mûhely 1/5 -> 1/4	 		*	
* V2.1.69	2014.06.11. Gergely Zsolt		Nick, vízierõmû 4/5 -> 1/6
											Csorna, szélerõmû 1/5 -> 1/6	 		*	
* V2.1.70	2014.06.19. Gergely Zsolt		21-68 8/4 -> 8/3		 		*	
* V2.1.71	2014.06.24. Gergely Zsolt		12-16, 51-89, 51-90, 51-37 		 		*	
* V2.1.72	2014.07.`8. Gergely Zsolt		Csokonai, Horváth ház, Zákonyi  6/1		 		*	
* V2.1.73	2014.07.21. Gergely Zsolt		21-68 8/3 -> 8/4,  20-27  8/2 -> 8/4		 		*	
* V2.1.74	2014.09.24. Gergely Zsolt		11-55, 15-52  4/6		 		*	
* V2.1.75	2014.10.01. Gergely Zsolt		11-14 1/4, 14-48 1/4,  15-54 1/1		 		*	
* V2.1.76	2015.04.09. Gergely Zsolt		10-71, 11-55, 71-92, 73-31, 73-51		 		*	
* V2.1.77	2015.08.18. Gergely Zsolt		42-43 5/5 -> 5/4		 		*	


			
****************************************************************************
* NAME           :  PARS_D.c                                                *
* DESCRIPTION    :                                						    *
* PROCESS        :  
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block */                         

/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
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
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{

	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				
ST[0].nSiteList[0]	=3225; 	ST[0].nLinkList[0]	=RADIO1_6;	/* RADIO1_6 61-22 NPS 				GYOR*/
ST[0].nSiteList[1]	=3226; 	ST[0].nLinkList[1]	=RADIO1_6;	/* RADIO1_6 60-68 NPS 				GYOR*/
ST[0].nSiteList[2]	=3227; 	ST[0].nLinkList[2]	=RADIO5_1;	/* RADIO1_6 60-70 NPS 				GYOR*/
ST[0].nSiteList[3]	=3228; 	ST[0].nLinkList[3]	=RADIO1_6;	/* RADIO1_6 61-42 NPS 				GYOR*/
ST[0].nSiteList[4]	=3229; 	ST[0].nLinkList[4]	=RADIO1_6;	/* RADIO1_6 61-43 NPS 				GYOR*/
ST[0].nSiteList[5]	=3230; 	ST[0].nLinkList[5]	=RADIO1_6;	/* RADIO1_6 61-70 NPS 				GYOR*/
ST[0].nSiteList[6]	=3231; 	ST[0].nLinkList[6]	=RADIO1_6;	/* RADIO1_6 62-78 NPS 				GYOR*/
ST[0].nSiteList[7]	=3232; 	ST[0].nLinkList[7]	=RADIO4_1;	/* RADIO4_6 73-31 NPS 				PAP*/
ST[0].nSiteList[8]	=3133; 	ST[0].nLinkList[8]	=RADIO8_4;	/* RADIO8_2 21-88 NPS 				ESZT*/
ST[0].nSiteList[9]	=6001; 	ST[0].nLinkList[9]	=RADIO3_3;	/* RADIO3_1 Sopron, szennyviztelep  SOP*/
ST[0].nSiteList[10]	=6002; 	ST[0].nLinkList[10]	=RADIO5_7;	/* RADIO5_7 Vasvár, Járdányi ut		KOR*/
ST[0].nSiteList[11]	=6003; 	ST[0].nLinkList[11]	=RADIO8_2;	/* RADIO8_2 21-08, 21-78 NPS 		ESZT*/
ST[0].nSiteList[12]	=6004; 	ST[0].nLinkList[12]	=RADIO8_4;	/* RADIO8_4 21-29 NPS 				ESZT*/
ST[0].nSiteList[13]	=6005; 	ST[0].nLinkList[13]	=RADIO3_5;	/* RADIO3_5 Várpalota, Inota 		VESZ*/
ST[0].nSiteList[14]	=6006; 	ST[0].nLinkList[14]	=RADIO8_4;	/* RADIO8_2 21-13 NPS 				ESZT*/
ST[0].nSiteList[15]	=5049; 	ST[0].nLinkList[15]	=RADIO8_2;	/* RADIO8_2 21-39 OK2 				ESZT*/
ST[0].nSiteList[16]	=6007; 	ST[0].nLinkList[16]	=RADIO4_6;	/* RADIO4_6 Cseteny 				PAP*/
ST[0].nSiteList[17]	=6009; 	ST[0].nLinkList[17]	=RADIO1_6;	/* RADIO1_6 Csorna	 				GYOR*/
ST[0].nSiteList[18]	=6008; 	ST[0].nLinkList[18]	=RADIO1_4;	/* RADIO1_4 Gyor, Csokás u.			GYOR*/
ST[0].nSiteList[19]	=6010; 	ST[0].nLinkList[19]	=RADIO5_1;	/* RADIO1_6 Csorna,MOSCAD-L			GYOR*/
ST[0].nSiteList[20]	=6011; 	ST[0].nLinkList[20]	=RADIO2_2;	/* RADIO2_2 50-70 NPS				VESZ*/
ST[0].nSiteList[21]	=6012; 	ST[0].nLinkList[21]	=RADIO2_2;	/* RADIO2_2 50-79 NPS				VESZ*/
ST[0].nSiteList[22]	=6013; 	ST[0].nLinkList[22]	=RADIO2_1;	/* RADIO2_1 51-97 NPS				VESZ*/
ST[0].nSiteList[23]	=6014; 	ST[0].nLinkList[23]	=RADIO2_2;	/* RADIO2_2 58-738 NPS				VESZ*/
ST[0].nSiteList[24]	=6015; 	ST[0].nLinkList[24]	=RADIO2_2; 	/* RADIO2_2 51-44 NPS				VESZ*/				
ST[0].nSiteList[25]	=6016; 	ST[0].nLinkList[25]	=RADIO1_4;	/* RADIO1_4 Gyor, Ipari Park, AHM	GYOR*/
ST[0].nSiteList[26]	=6017; 	ST[0].nLinkList[26]	=RADIO3_5;	/* RADIO2_1 51-76 NPS				VESZ*/
ST[0].nSiteList[27]	=6018; 	ST[0].nLinkList[27]	=RADIO2_1;	/* RADIO2_1 50-24 NPS				VESZ*/
ST[0].nSiteList[28]	=6019; 	ST[0].nLinkList[28]	=RADIO2_1;	/* RADIO2_1 51-02 NPS				VESZ*/
ST[0].nSiteList[29]	=6020; 	ST[0].nLinkList[29]	=RADIO3_5;	/* RADIO2_1 51-26 NPS				VESZ*/
ST[0].nSiteList[30]	=6021; 	ST[0].nLinkList[30]	=RADIO3_5;	/* RADIO2_1 51-81 NPS				VESZ*/
ST[0].nSiteList[31]	=6022; 	ST[0].nLinkList[31]	=RADIO2_1;	/* RADIO2_1 Veszprém, Szeglethy		VESZ*/
ST[0].nSiteList[32]	=6023; 	ST[0].nLinkList[32]	=RADIO2_1;	/* RADIO2_1 Veszprém, OBI			VESZ*/
ST[0].nSiteList[33]	=6024; 	ST[0].nLinkList[33]	=RADIO2_1;	/* RADIO2_1 Veszprém, Patak tér		VESZ*/
ST[0].nSiteList[34]	=6025; 	ST[0].nLinkList[34]	=RADIO1_1;	/* RADIO1_1	11-34 Nyuldomb				GYOR*/
ST[0].nSiteList[35]	=6026; 	ST[0].nLinkList[35]	=RADIO2_1;	/* RADIO2_1 Veszprém, Kádár utca	VESZ*/
ST[0].nSiteList[36]	=6027; 	ST[0].nLinkList[36]	=RADIO8_2;	/* RADIO8_2 20-37 NPS				ESZT*/
ST[0].nSiteList[37]	=6028; 	ST[0].nLinkList[37]	=RADIO5_5;	/* RADIO5_5 Szentgotthárd átj		KOR*/
ST[0].nSiteList[38]	=6029; 	ST[0].nLinkList[38]	=RADIO4_5;	/* RADIO4_5 Pápa, Tesco				PAP*/
ST[0].nSiteList[39]	=6030; 	ST[0].nLinkList[39]	=RADIO4_5;	/* RADIO4_5 Pápa, Malomkert II		PAP*/
ST[0].nSiteList[40]	=6031; 	ST[0].nLinkList[40]	=RADIO4_5;	/* RADIO4_5 Pápa, Fenyvesi			PAP*/
ST[0].nSiteList[41]	=6032; 	ST[0].nLinkList[41]	=RADIO4_5;	/* RADIO4_5 Pápa, Huszár út			PAP*/
ST[0].nSiteList[42]	=6033; 	ST[0].nLinkList[42]	=RADIO4_5;	/* RADIO4_5 Pápa, Kórház			PAP*/
ST[0].nSiteList[43]	=6034; 	ST[0].nLinkList[43]	=RADIO1_6;	/* RADIO1_6 Nick, vízierõmû			PAP*/
ST[0].nSiteList[44]	=6035; 	ST[0].nLinkList[44]	=RADIO1_4;	/* RADIO1_4 Gyõr, Polgármesteri h	GYOR*/
ST[0].nSiteList[45]	=6036; 	ST[0].nLinkList[45]	=RADIO7_1;	/* RADIO8_1 Esztergom, Béke tér		ESZT*/
ST[0].nSiteList[46]	=6037; 	ST[0].nLinkList[46]	=RADIO7_1;	/* RADIO8_1 Esztergom, Borászat		ESZT*/
ST[0].nSiteList[47]	=6038; 	ST[0].nLinkList[47]	=RADIO7_1;	/* RADIO8_1 Esztergom, Liszt F. tér	ESZT*/
ST[0].nSiteList[48]	=6039; 	ST[0].nLinkList[48]	=RADIO7_1;	/* RADIO8_1 Esztergom, Erzsébet tér	ESZT*/
ST[0].nSiteList[49]	=6040; 	ST[0].nLinkList[49]	=RADIO1_4;	/* RADIO1_4 Gyõr, Battyhányi tér	GYOR*/
ST[0].nSiteList[50]	=6041; 	ST[0].nLinkList[50]	=RADIO1_4;	/* RADIO1_4 Gyõr, Petõfi tér		GYOR*/
ST[0].nSiteList[51]	=6042; 	ST[0].nLinkList[51]	=RADIO1_5;	/* RADIO1_5 10-27 PM6				GYOR*/
ST[0].nSiteList[52]	=6043; 	ST[0].nLinkList[52]	=RADIO1_4;	/* RADIO1_4 10-39 PM6				GYOR*/
ST[0].nSiteList[53]	=6044; 	ST[0].nLinkList[53]	=RADIO1_4;	/* RADIO1_4 10-49 PM6				GYOR*/
ST[0].nSiteList[54]	=6045; 	ST[0].nLinkList[54]	=RADIO1_1;	/* RADIO1_1 10-66 PM6				GYOR*/
ST[0].nSiteList[55]	=6046; 	ST[0].nLinkList[55]	=RADIO1_4;	/* RADIO1_4 Gyõr, Borsodi mûhely	GYOR*/

ST[0].nSiteList[56]	=6047; 	ST[0].nLinkList[56]	=RADIO1_2;	/* RADIO1_2 10-46					GYOR*/
ST[0].nSiteList[57]	=6048; 	ST[0].nLinkList[57]	=RADIO1_5;	/* RADIO1_5 10-76					GYOR*/
ST[0].nSiteList[58]	=6049; 	ST[0].nLinkList[58]	=RADIO1_5;	/* RADIO1_5 10-98					GYOR*/
ST[0].nSiteList[59]	=6050; 	ST[0].nLinkList[59]	=RADIO1_5;	/* RADIO1_5 10-99					GYOR*/
ST[0].nSiteList[60]	=6051; 	ST[0].nLinkList[60]	=RADIO1_4;	/* RADIO1_5 11-14					GYOR*/
ST[0].nSiteList[61]	=6052; 	ST[0].nLinkList[61]	=RADIO1_1;	/* RADIO1_1 11-20					GYOR*/
ST[0].nSiteList[62]	=6053; 	ST[0].nLinkList[62]	=RADIO4_6;	/* RADIO1_5 11-57					GYOR*/
ST[0].nSiteList[63]	=6054; 	ST[0].nLinkList[63]	=RADIO5_1;	/* RADIO1_5 11-72					GYOR*/
ST[0].nSiteList[64]	=6055; 	ST[0].nLinkList[64]	=RADIO1_5;	/* RADIO1_5 11-76					GYOR*/
ST[0].nSiteList[65]	=6056; 	ST[0].nLinkList[65]	=RADIO1_5;	/* RADIO1_5 11-97					GYOR*/
ST[0].nSiteList[66]	=6057; 	ST[0].nLinkList[66]	=RADIO5_1;	/* RADIO1_5 60-79					GYOR*/
ST[0].nSiteList[67]	=6058; 	ST[0].nLinkList[67]	=RADIO5_1;	/* RADIO1_5 60-84					GYOR*/
				
ST[0].nSiteList[68]	=6059; 	ST[0].nLinkList[68]	=RADIO7_5;	/* RADIO7_5 21-08, 21-78 NPS 		BICS*/
				
ST[0].nSiteList[69]	=6060; 	ST[0].nLinkList[69]	=RADIO5_1;	/* RADIO1_5 11-67					GYOR*/
ST[0].nSiteList[70]	=6061; 	ST[0].nLinkList[70]	=RADIO8_4;	/* RADIO8_4 20-27					ESZT*/
ST[0].nSiteList[71]	=6062; 	ST[0].nLinkList[71]	=RADIO7_5;	/* RADIO8_2 81-95					BICS*/

ST[0].nSiteList[72]	=6085; 	ST[0].nLinkList[72]	=RADIO5_5;	/* RADIO5_5 42-26					KOR*/
ST[0].nSiteList[73]	=6086; 	ST[0].nLinkList[73]	=RADIO4_6;	/* RADIO4_6 79-047					PAP*/
ST[0].nSiteList[74]	=6087; 	ST[0].nLinkList[74]	=RADIO9_9;	/* RADIO9_4 52-61					TAP*/
ST[0].nSiteList[75]	=6088; 	ST[0].nLinkList[75]	=RADIO9_1;	/* RADIO9_1 52-92					TAP*/
ST[0].nSiteList[76]	=6089; 	ST[0].nLinkList[76]	=RADIO3_5;	/* RADIO2_1 37-30					VESZ*/

ST[0].nSiteList[77]	=6090; 	ST[0].nLinkList[77]	=RADIO1_4;	/* RADIO1_4 Gyõr, IGM				GYOR*/
ST[0].nSiteList[78]	=6091; 	ST[0].nLinkList[78]	=RADIO1_1;	/* RADIO1_1 Gyõr, Büchl				GYOR*/

ST[0].nSiteList[79]	=6063; 	ST[0].nLinkList[79]	=RADIO1_5;	/* RADIO1_5 10-41					GYOR*/
ST[0].nSiteList[80]	=6064; 	ST[0].nLinkList[80]	=RADIO1_4;	/* RADIO1_4 10-44					GYOR*/
ST[0].nSiteList[81]	=6065; 	ST[0].nLinkList[81]	=RADIO1_4;	/* RADIO1_4 10-53					GYOR*/
ST[0].nSiteList[82]	=6066; 	ST[0].nLinkList[82]	=RADIO1_4;	/* RADIO1_4 10-64					GYOR*/
ST[0].nSiteList[83]	=6067; 	ST[0].nLinkList[83]	=RADIO1_5;	/* RADIO1_5 10-67					GYOR*/
ST[0].nSiteList[84]	=6068; 	ST[0].nLinkList[84]	=RADIO4_1;	/* RADIO1_5 10-71					GYOR*/
ST[0].nSiteList[85]	=6069; 	ST[0].nLinkList[85]	=RADIO1_4;	/* RADIO1_4 10-84					GYOR*/
ST[0].nSiteList[86]	=6070; 	ST[0].nLinkList[86]	=RADIO1_4;	/* RADIO1_4 10-85					GYOR*/
ST[0].nSiteList[87]	=6071; 	ST[0].nLinkList[87]	=RADIO1_4;	/* RADIO1_4 10-92					GYOR*/
ST[0].nSiteList[88]	=6072; 	ST[0].nLinkList[88]	=RADIO1_5;	/* RADIO1_5 11-12					GYOR*/
ST[0].nSiteList[89]	=6073; 	ST[0].nLinkList[89]	=RADIO1_4;	/* RADIO1_4 11-56					GYOR*/
ST[0].nSiteList[90]	=6074; 	ST[0].nLinkList[90]	=RADIO4_6;	/* RADIO1_5 15-52					GYOR*/
ST[0].nSiteList[91]	=6075; 	ST[0].nLinkList[91]	=RADIO1_1;	/* RADIO1_5 15-54					GYOR*/

ST[0].nSiteList[92]	=6076; 	ST[0].nLinkList[92]	=RADIO3_3;	/* RADIO3_8 60-16					SOP*/

ST[0].nSiteList[93]	=6082; 	ST[0].nLinkList[93]	=RADIO5_1;	/* RADIO1_5 61-10					GYOR*/
ST[0].nSiteList[94]	=6077; 	ST[0].nLinkList[94]	=RADIO1_6;	/* RADIO1_6 61-56					GYOR*/
ST[0].nSiteList[95]	=6078; 	ST[0].nLinkList[95]	=RADIO5_1;	/* RADIO1_5 65-09					GYOR*/

ST[0].nSiteList[96]	=6079; 	ST[0].nLinkList[96]	=RADIO3_1;	/* RADIO3_1 65-17					SOP*/
ST[0].nSiteList[97]	=6080; 	ST[0].nLinkList[97]	=RADIO3_1;	/* RADIO3_1 60-23					SOP*/

ST[0].nSiteList[98]	=6081; 	ST[0].nLinkList[98]	=RADIO5_1;	/* RADIO1_5 68-945					GYOR*/

ST[0].nSiteList[99]	=6092; 	ST[0].nLinkList[99]	=RADIO8_4;	/* RADIO8_4 21-68					ESZT*/
ST[0].nSiteList[100]=6093; 	ST[0].nLinkList[100]=RADIO7_1;	/* RADIO8_1 21-03					ESZT*/
ST[0].nSiteList[101]=6094; 	ST[0].nLinkList[101]=RADIO8_3;	/* RADIO8_3 21-69					ESZT*/
ST[0].nSiteList[102]=6095; 	ST[0].nLinkList[102]=RADIO8_7;	/* RADIO8_7 21-82					ESZT*/

ST[0].nSiteList[103]=6107; 	ST[0].nLinkList[103]=RADIO1_1;	/* RADIO1_1 METRO					GYOR*/
ST[0].nSiteList[104]=6108; 	ST[0].nLinkList[104]=RADIO1_1;	/* RADIO1_1 TESCO					GYOR*/
ST[0].nSiteList[105]=6109; 	ST[0].nLinkList[105]=RADIO1_1;	/* RADIO1_1 Plaza					GYOR*/

ST[0].nSiteList[106]=6096; 	ST[0].nLinkList[106]=RADIO3_5;	/* RADIO2_8 51-66					VESZ*/
ST[0].nSiteList[107]=6097; 	ST[0].nLinkList[107]=RADIO6_1;	/* RADIO6_1 51-50					VESZ*/
ST[0].nSiteList[108]=6098; 	ST[0].nLinkList[108]=RADIO6_1;	/* RADIO6_1 51-37					VESZ*/
ST[0].nSiteList[109]=6099; 	ST[0].nLinkList[109]=RADIO2_3;	/* RADIO2_2 71-00					VESZ*/
ST[0].nSiteList[110]=6100; 	ST[0].nLinkList[110]=RADIO2_3;	/* RADIO2_2 71-09					VESZ*/
ST[0].nSiteList[111]=6101; 	ST[0].nLinkList[111]=RADIO2_2;	/* RADIO2_2 52-39					VESZ*/
ST[0].nSiteList[112]=6102; 	ST[0].nLinkList[112]=RADIO4_9;	/* RADIO4_9 72-42					PAP*/
ST[0].nSiteList[113]=6103; 	ST[0].nLinkList[113]=RADIO2_1;	/* RADIO2_1 54-20					VESZ*/
ST[0].nSiteList[114]=6104; 	ST[0].nLinkList[114]=RADIO6_1;	/* RADIO6_1 51-89					VESZ*/
ST[0].nSiteList[115]=6105; 	ST[0].nLinkList[115]=RADIO6_1;	/* RADIO6_1 51-90					VESZ*/
ST[0].nSiteList[116]=6106; 	ST[0].nLinkList[116]=RADIO4_6;	/* RADIO4_6 72-08					PAP*/

ST[0].nSiteList[117]=6112; 	ST[0].nLinkList[117]=RADIO1_4;	/* RADIO1_4 Gyõr, Árkád				GYOR*/

ST[0].nSiteList[118]=6083; 	ST[0].nLinkList[118]=RADIO3_5;	/* RADIO2_1 37-12					VEZS*/
ST[0].nSiteList[119]=6110; 	ST[0].nLinkList[119]=RADIO4_5;	/* RADIO4_5 70-09					PAP*/
ST[0].nSiteList[120]=6111; 	ST[0].nLinkList[120]=RADIO9_5;	/* RADIO9_5 90-28					TAP*/

ST[0].nSiteList[121]=6113; 	ST[0].nLinkList[121]=RADIO1_4;	/* RADIO1_4 Gyõr, ETO				GYOR*/
ST[0].nSiteList[122]=6118; 	ST[0].nLinkList[122]=RADIO4_5;	/* RADIO4_5 72-99					PAP*/
ST[0].nSiteList[123]=6116; 	ST[0].nLinkList[123]=RADIO3_3;	/* RADIO3_4 Sopron, Fényi Gy		SOP*/
ST[0].nSiteList[124]=6117; 	ST[0].nLinkList[124]=RADIO3_3;	/* RADIO3_4 Sopron, Tercia			SOP*/
ST[0].nSiteList[125]=6115; 	ST[0].nLinkList[125]=RADIO3_3;	/* RADIO3_8 Sopron, Damjanich		SOP*/
ST[0].nSiteList[126]=6119; 	ST[0].nLinkList[126]=RADIO4_5;	/* RADIO4_5 Pápakovácsi, szélerõmû	PAP*/
ST[0].nSiteList[127]=6114; 	ST[0].nLinkList[127]=RADIO4_5;	/* RADIO4_5 74-08					PAP*/

ST[0].nSiteList[128]=6120; 	ST[0].nLinkList[128]=RADIO6_1;	/* RADIO6_1 Balatonfüred, Horvát ház VESZ*/
ST[0].nSiteList[129]=6121; 	ST[0].nLinkList[129]=RADIO6_1;	/* RADIO6_1 Balatonfüred, Flamingo 	VESZ*/
ST[0].nSiteList[130]=6122; 	ST[0].nLinkList[130]=RADIO6_1;	/* RADIO6_1 Balatonfüred, Cziegle	VESZ*/
ST[0].nSiteList[131]=6123; 	ST[0].nLinkList[131]=RADIO6_1;	/* RADIO6_1 Balatonfüred, Zakonyi	VESZ*/
ST[0].nSiteList[132]=6124; 	ST[0].nLinkList[132]=RADIO6_1;	/* RADIO6_1 Balatonfüred, Csokonai	VESZ*/

ST[0].nSiteList[133]=5167; 	ST[0].nLinkList[133]=RADIO1_6;	/* LINE11 41-55						GPRS*/

ST[0].nSiteList[134]=6125; 	ST[0].nLinkList[134]=RADIO5_7;	/* RADIO5_7 Vasvár, állomás			KOR*/
ST[0].nSiteList[135]=6129; 	ST[0].nLinkList[135]=RADIO1_4;	/* RADIO1_4 12-16					GYOR*/
ST[0].nSiteList[136]=6130; 	ST[0].nLinkList[136]=RADIO1_4;	/* RADIO1_5 14-48					GYOR*/

ST[0].nSiteList[137]=6126; 	ST[0].nLinkList[137]=RADIO3_5;	/* RADIO2_6 Várpalota, Faller		VESZ*/
ST[0].nSiteList[138]=6127; 	ST[0].nLinkList[138]=RADIO3_3;	/* RADIO3_4 Sopron, Hársfa sor		SOP*/
ST[0].nSiteList[139]=6128; 	ST[0].nLinkList[139]=RADIO9_1;	/* RADIO9_1 Tapolca, gyógyszálló	TAP*/
ST[0].nSiteList[140]=6131; 	ST[0].nLinkList[140]=RADIO2_1;	/* RADIO2_1 Veszprém, Cserhát		VESZ*/
ST[0].nSiteList[141]=6132; 	ST[0].nLinkList[141]=RADIO2_1;	/* RADIO2_1 Veszprém, idõsek otth.	VESZ*/
ST[0].nSiteList[142]=6133; 	ST[0].nLinkList[142]=RADIO5_5;	/* RADIO5_5 Körmend, Eybl			KOR*/

ST[0].nSiteList[143]=6134; 	ST[0].nLinkList[143]=RADIO3_3;	/* RADIO3_4 65-31					SOP*/
ST[0].nSiteList[144]=6135; 	ST[0].nLinkList[144]=RADIO3_3;	/* RADIO3_1 60-21					SOP*/
ST[0].nSiteList[145]=6136; 	ST[0].nLinkList[145]=RADIO1_6;	/* RADIO1_6 61-34					GYOR*/
ST[0].nSiteList[146]=6137; 	ST[0].nLinkList[146]=RADIO7_5;	/* RADIO7_5 34-02					BICS*/
ST[0].nSiteList[147]=6138; 	ST[0].nLinkList[147]=RADIO5_5;	/* RADIO5_5 42-47					KOR*/
ST[0].nSiteList[148]=6139; 	ST[0].nLinkList[148]=RADIO9_5;	/* RADIO9_5 90-22					SUM*/
ST[0].nSiteList[149]=6140; 	ST[0].nLinkList[149]=RADIO8_2;	/* RADIO8_2 21074					ESZT*/
ST[0].nSiteList[150]=6141; 	ST[0].nLinkList[150]=RADIO8_2;	/* RADIO8_2 21100					ESZT*/
ST[0].nSiteList[151]=6142; 	ST[0].nLinkList[151]=RADIO7_5;	/* RADIO7_5 87-12					BICS*/
ST[0].nSiteList[152]=6143; 	ST[0].nLinkList[152]=RADIO7_5;	/* RADIO7_5 87-13					BICS*/
ST[0].nSiteList[153]=6144; 	ST[0].nLinkList[153]=RADIO2_4;	/* RADIO2_4 50-58					VESZ*/
ST[0].nSiteList[154]=6145; 	ST[0].nLinkList[154]=RADIO3_5;	/* RADIO2_6 51-80					VESZ*/
ST[0].nSiteList[155]=6146; 	ST[0].nLinkList[155]=RADIO9_9;	/* RADIO9_4 52-65					TAP*/
ST[0].nSiteList[156]=6147; 	ST[0].nLinkList[156]=RADIO9_1;	/* RADIO9_1 52-94					TAP*/
ST[0].nSiteList[157]=6148; 	ST[0].nLinkList[157]=RADIO3_5;	/* RADIO2_5 54-29					VESZ*/
ST[0].nSiteList[158]=6149; 	ST[0].nLinkList[158]=RADIO2_3;	/* RADIO2_2 54-54					VESZ*/
ST[0].nSiteList[159]=6150; 	ST[0].nLinkList[159]=RADIO4_1;	/* RADIO4_6 71-92					PAP*/
ST[0].nSiteList[160]=2004; 	ST[0].nLinkList[160]=RSLINK11;	/* RSLINK11 Gyõr, DAC				GYOR*/
ST[0].nSiteList[161]=5228; 	ST[0].nLinkList[161]=RADIO8_2;	/* RADIO8_2	21-63					ESZT*/
ST[0].nSiteList[162]=6151; 	ST[0].nLinkList[162]=RADIO9_5;	/* RADIO9_5	90-13					SUM*/

ST[0].nSiteList[163]=6152; 	ST[0].nLinkList[163]=RADIO3_4;	/* RADIO3_4	60-19					SOP*/
ST[0].nSiteList[164]=6153; 	ST[0].nLinkList[164]=RADIO3_1;	/* RADIO3_1	60-26					SOP*/
ST[0].nSiteList[165]=6154; 	ST[0].nLinkList[165]=RADIO5_1;	/* RADIO1_5	60-99					GYOR*/
ST[0].nSiteList[166]=6156; 	ST[0].nLinkList[166]=RADIO5_5;	/* RADIO5_5	42-30					KOR*/
ST[0].nSiteList[167]=6157; 	ST[0].nLinkList[167]=RADIO5_5;	/* RADIO5_5	42-42					KOR*/
ST[0].nSiteList[168]=6158; 	ST[0].nLinkList[168]=RADIO8_4;	/* RADIO8_2	21-71					ESZT*/
ST[0].nSiteList[169]=6159; 	ST[0].nLinkList[169]=RADIO7_7;	/* RADIO7_7	87-20					BICS*/
ST[0].nSiteList[170]=6155; 	ST[0].nLinkList[170]=RADIO7_5;	/* RADIO7_5	87-65					BICS*/

ST[0].nSiteList[171]=6160; 	ST[0].nLinkList[171]=RADIO1_4;	/* RADIO1_4	Gyõr, aluljáró			GYOR*/
ST[0].nSiteList[172]=6161; 	ST[0].nLinkList[172]=RADIO1_1;	/* RADIO1_1	Gyõr, dunapart			GYOR*/

ST[0].nSiteList[173]=6164; 	ST[0].nLinkList[173]=RADIO8_4;	/* RADIO8_2	21-09					ESZT*/
ST[0].nSiteList[174]=6165; 	ST[0].nLinkList[174]=RADIO8_4;	/* RADIO8_4	21-96					ESZT*/
ST[0].nSiteList[175]=6169; 	ST[0].nLinkList[175]=RADIO7_5;	/* RADIO7_5	31-64					BICS*/
ST[0].nSiteList[176]=6166; 	ST[0].nLinkList[176]=RADIO7_5;	/* RADIO7_5	87-16					BICS*/
ST[0].nSiteList[177]=6167; 	ST[0].nLinkList[177]=RADIO7_5;	/* RADIO7_5	87-42					BICS*/
ST[0].nSiteList[178]=6168; 	ST[0].nLinkList[178]=RADIO7_5;	/* RADIO7_5	87-68					BICS*/
ST[0].nSiteList[179]=6162; 	ST[0].nLinkList[179]=RADIO5_5;	/* RADIO5_5	43-37					KOR*/
ST[0].nSiteList[180]=6163; 	ST[0].nLinkList[180]=RADIO9_5;	/* RADIO9_5	90-24					SUM*/
ST[0].nSiteList[181]=6171; 	ST[0].nLinkList[181]=RADIO7_5;	/* RADIO7_5	31-66					BICS*/
ST[0].nSiteList[182]=6170; 	ST[0].nLinkList[182]=RADIO3_5;	/* RADIO2_5	35-14					VESZ*/

ST[0].nSiteList[183]=6176; 	ST[0].nLinkList[183]=RADIO1_1;	/* RADIO1_1	11-07					GYOR*/
ST[0].nSiteList[184]=6182; 	ST[0].nLinkList[184]=RADIO1_5;	/* RADIO1_5	13-07					GYOR*/
ST[0].nSiteList[185]=6196; 	ST[0].nLinkList[185]=RADIO1_6;	/* RADIO1_6	Kapuvár, Biogáz			GYOR*/

ST[0].nSiteList[186]=6172; 	ST[0].nLinkList[186]=RADIO1_1;	/* RADIO1_1	10-17					GYOR*/
ST[0].nSiteList[187]=6173; 	ST[0].nLinkList[187]=RADIO1_1;	/* RADIO1_1	10-18					GYOR*/
ST[0].nSiteList[188]=6174; 	ST[0].nLinkList[188]=RADIO1_5;	/* RADIO1_5	10-50					GYOR*/
ST[0].nSiteList[189]=6175; 	ST[0].nLinkList[189]=RADIO1_1;	/* RADIO1_1	10-93					GYOR*/
ST[0].nSiteList[190]=6177; 	ST[0].nLinkList[190]=RADIO1_1;	/* RADIO1_1	11-33					GYOR*/
ST[0].nSiteList[191]=6178; 	ST[0].nLinkList[191]=RADIO4_1;	/* RADIO1_5	11-55					GYOR*/
ST[0].nSiteList[192]=6179; 	ST[0].nLinkList[192]=RADIO1_5;	/* RADIO1_5	11-89					GYOR*/
ST[0].nSiteList[193]=6180; 	ST[0].nLinkList[193]=RADIO1_1;	/* RADIO1_1	11-93					GYOR*/
ST[0].nSiteList[194]=6181; 	ST[0].nLinkList[194]=RADIO1_5;	/* RADIO1_5	13-04					GYOR*/
ST[0].nSiteList[195]=6183; 	ST[0].nLinkList[195]=RADIO1_5;	/* RADIO1_5	13-12					GYOR*/
ST[0].nSiteList[196]=6184; 	ST[0].nLinkList[196]=RADIO1_5;	/* RADIO1_5	13-30					GYOR*/
ST[0].nSiteList[197]=6185; 	ST[0].nLinkList[197]=RADIO1_1;	/* RADIO1_1	13-84					GYOR*/
ST[0].nSiteList[198]=6186; 	ST[0].nLinkList[198]=RADIO4_1;	/* RADIO1_5	13-87					GYOR*/
ST[0].nSiteList[199]=6187; 	ST[0].nLinkList[199]=RADIO1_5;	/* RADIO1_5	15-07					GYOR*/
ST[0].nSiteList[200]=6188; 	ST[0].nLinkList[200]=RADIO1_6;	/* RADIO1_6	61-35					GYOR*/
ST[0].nSiteList[201]=6189; 	ST[0].nLinkList[201]=RADIO1_6;	/* RADIO1_6	61-49					GYOR*/
ST[0].nSiteList[202]=6190; 	ST[0].nLinkList[202]=RADIO1_6;	/* RADIO1_6	62-02					GYOR*/
ST[0].nSiteList[203]=6191; 	ST[0].nLinkList[203]=RADIO3_3;	/* RADIO3_4	62-15					SOP*/
ST[0].nSiteList[204]=6192; 	ST[0].nLinkList[204]=RADIO3_4;	/* RADIO3_4	62-16					SOP*/
ST[0].nSiteList[205]=6193; 	ST[0].nLinkList[205]=RADIO1_6;	/* RADIO1_6	62-79					GYOR*/
ST[0].nSiteList[206]=6194; 	ST[0].nLinkList[206]=RADIO3_1;	/* RADIO3_1	69-433					SOP*/
ST[0].nSiteList[207]=6195; 	ST[0].nLinkList[207]=RADIO3_1;	/* RADIO3_1	69-434					SOP*/
ST[0].nSiteList[208]=6197; 	ST[0].nLinkList[208]=RADIO3_5;	/* RADIO2_1	37-99					VESZ*/

ST[0].nSiteList[209]=5104; 	ST[0].nLinkList[209]=RADIO1_5;	/* RADIO1_5	Mecsér, szélerõmû		GYOR*/
ST[0].nSiteList[210]=5105; 	ST[0].nLinkList[210]=RADIO1_5;	/* RADIO1_5	11-23					GYOR*/
ST[0].nSiteList[211]=5106; 	ST[0].nLinkList[211]=RADIO1_9;	/* RADIO1_9	11-27					GYOR*/
ST[0].nSiteList[212]=43; 	ST[0].nLinkList[212]=RADIO1_9;	/* RADIO1_9	12-89					GYOR*/
ST[0].nSiteList[213]=6203; 	ST[0].nLinkList[213]=RADIO6_2;	/* RADIO2_3	51-34					VESZ*/
ST[0].nSiteList[214]=6198; 	ST[0].nLinkList[214]=RADIO4_5;	/* RADIO4_5	71-98					PAP*/
ST[0].nSiteList[215]=6200; 	ST[0].nLinkList[215]=RADIO8_4;	/* RADIO8_2	20-03					ESZT*/
ST[0].nSiteList[216]=6201; 	ST[0].nLinkList[216]=RADIO8_4;	/* RADIO8_2	20-09					ESZT*/
ST[0].nSiteList[217]=5280; 	ST[0].nLinkList[217]=RADIO7_2;	/* RADIO8_5	20-04					ESZT*/
ST[0].nSiteList[218]=6202; 	ST[0].nLinkList[218]=RADIO3_5;	/* RADIO2_5	37-24					VESZ*/
ST[0].nSiteList[219]=6204; 	ST[0].nLinkList[219]=RADIO6_3;	/* RADIO2_5	51-99					VESZ*/
ST[0].nSiteList[220]=6205; 	ST[0].nLinkList[220]=RADIO4_4;	/* RADIO4_6	73-51					PAP*/
ST[0].nSiteList[221]=6199; 	ST[0].nLinkList[221]=RADIO7_5;	/* RADIO7_5	87-28					BICS*/
ST[0].nSiteList[222]=6206; 	ST[0].nLinkList[222]=RADIO5_1;	/* RADIO1_6	Csorna, kórház			GYOR*/
ST[0].nSiteList[223]=6207; 	ST[0].nLinkList[223]=RADIO2_1;	/* RADIO2_1	Veszprém, Landfill		VESZ*/
ST[0].nSiteList[224]=6208; 	ST[0].nLinkList[224]=RADIO2_1;	/* RADIO2_1	37-05					VESZ*/
ST[0].nSiteList[225]=6209; 	ST[0].nLinkList[225]=RADIO5_4;	/* RADIO5_5	42-43					KOR*/
ST[0].nSiteList[226]=6210; 	ST[0].nLinkList[226]=RADIO5_8;	/* RADIO5_8	42-14					KOR*/
ST[0].nSiteList[227]=6211; 	ST[0].nLinkList[227]=RADIO4_6;	/* RADIO4_6	71-04					PAP*/
ST[0].nSiteList[228]=6213; 	ST[0].nLinkList[228]=RADIO1_5;	/* RADIO1_5	14-44					GYOR*/
ST[0].nSiteList[229]=6113; 	ST[0].nLinkList[229]=RADIO1_4;	/* RADIO1_4 Gyõr, ETO II.			GYOR*/
ST[0].nSiteList[230]=6212; 	ST[0].nLinkList[230]=RADIO3_1;	/* RADIO3_1 65-50					SOP*/
ST[0].nSiteList[231]=3067; 	ST[0].nLinkList[231]=RADIO5_9;	/* RADIO5_9 42-44					KOR*/
ST[0].nSiteList[232]=8013; 	ST[0].nLinkList[232]=RADIO3_1;	/* RADIO3_1 Lövõ szélerõmû			SOP*/
ST[0].nSiteList[233]=8014; 	ST[0].nLinkList[233]=RADIO7_5;	/* RADIO7_5 Bicske szeméttelep		BICS*/
ST[0].nSiteList[234]=8015; 	ST[0].nLinkList[234]=RADIO4_8;	/* RADIO4_8 72-56					PAP*/
ST[0].nSiteList[235]=8016; 	ST[0].nLinkList[235]=RADIO4_8;	/* RADIO4_8 74-36					PAP*/
ST[0].nSiteList[236]=6213; 	ST[0].nLinkList[236]=RADIO2_1;	/* RADIO2_1 Veszprém, Hóvirág u.	VESZ*/
ST[0].nSiteList[237]=6214; 	ST[0].nLinkList[237]=RADIO7_5;	/* RADIO7_5 87-67					BICS*/
ST[0].nSiteList[238]=8069; 	ST[0].nLinkList[238]=RADIO1_4;	/* RADIO1_4 Gyõr, egyetem			GYOR*/
ST[0].nSiteList[239]=6215; 	ST[0].nLinkList[239]=RADIO3_3;	/* RADIO3_4 Sopron, Várisi út		SOP*/




ST[0].nSiteList[249]=0;		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/
MOSCAD_init_sitetable(); 
/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint			IG			*/ MOSCAD_add_new_site(301,RADIO5_8);		
/* 251 85-00,85-83					IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14						MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23						SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10						MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);
/* 255 */ MOSCAD_add_new_site(315,RADIO6_1);
/* 256 */ MOSCAD_add_new_site(316,RADIO6_1);
/* 257 */ MOSCAD_add_new_site(317,RADIO6_1);
/* 258 */ MOSCAD_add_new_site(318,RADIO6_1);
/* 259 */ MOSCAD_add_new_site(319,RADIO6_1);
/* 260--------------------------------------269*/
/* 260 */ MOSCAD_add_new_site(320,RADIO6_1);
/* 261 */ MOSCAD_add_new_site(321,RADIO6_1);
/* 262 */ MOSCAD_add_new_site(322,RADIO6_1);
/* 263 */ MOSCAD_add_new_site(323,RADIO6_1);
/* 264 */ MOSCAD_add_new_site(324,RADIO6_1);
/* 265 */ MOSCAD_add_new_site(325,RADIO6_1);
/* 266 */ MOSCAD_add_new_site(326,RADIO6_1);
/* 267 */ MOSCAD_add_new_site(327,RADIO6_1);
/* 268 */ MOSCAD_add_new_site(328,RADIO6_1);
/* 269 */ MOSCAD_add_new_site(329,RADIO6_1);
/* 270--------------------------------------279*/
/* 270 */ MOSCAD_add_new_site(330,RADIO6_1);
/* 271 */ MOSCAD_add_new_site(331,RADIO6_1);
/* 272 */ MOSCAD_add_new_site(332,RADIO6_1);
/* 273 */ MOSCAD_add_new_site(333,RADIO6_1);
/* 274 */ MOSCAD_add_new_site(334,RADIO6_1);
/* 275 */ MOSCAD_add_new_site(335,RADIO6_1);
/* 276 */ MOSCAD_add_new_site(336,RADIO6_1);
/* 277 */ MOSCAD_add_new_site(337,RADIO6_1);
/* 278 */ MOSCAD_add_new_site(338,RADIO6_1);
/* 279 */ MOSCAD_add_new_site(339,RADIO6_1);
/* 280--------------------------------------289*/
/* 280 */ MOSCAD_add_new_site(340,RADIO6_1);
/* 281 */ MOSCAD_add_new_site(341,RADIO6_1);
/* 282 */ MOSCAD_add_new_site(342,RADIO6_1);
/* 283 */ MOSCAD_add_new_site(343,RADIO6_1);
/* 284 */ MOSCAD_add_new_site(344,RADIO6_1);
/* 285 */ MOSCAD_add_new_site(345,RADIO6_1);
/* 286 */ MOSCAD_add_new_site(346,RADIO6_1);
/* 287 */ MOSCAD_add_new_site(347,RADIO6_1);
/* 288 */ MOSCAD_add_new_site(348,RADIO6_1);
/* 289 */ MOSCAD_add_new_site(349,RADIO6_1);
/* 290--------------------------------------299*/
/* 290 */ MOSCAD_add_new_site(350,RADIO6_1);
/* 291 */ MOSCAD_add_new_site(351,RADIO6_1);
/* 292 */ MOSCAD_add_new_site(352,RADIO6_1);
/* 293 */ MOSCAD_add_new_site(353,RADIO6_1);
/* 294 */ MOSCAD_add_new_site(354,RADIO6_1);
/* 295 */ MOSCAD_add_new_site(355,RADIO6_1);
/* 296 */ MOSCAD_add_new_site(356,RADIO6_1);
/* 297 */ MOSCAD_add_new_site(357,RADIO6_1);
/* 298 */ MOSCAD_add_new_site(358,RADIO6_1);
/* 299 */ MOSCAD_add_new_site(359,RADIO6_1);
/* 300--------------------------------------309*/
/* 300 */ MOSCAD_add_new_site(360,RADIO6_1);
/* 301 */ MOSCAD_add_new_site(361,RADIO6_1);
/* 302 */ MOSCAD_add_new_site(362,RADIO6_1);
/* 303 */ MOSCAD_add_new_site(363,RADIO6_1);
/* 304 */ MOSCAD_add_new_site(364,RADIO6_1);
/* 305 */ MOSCAD_add_new_site(365,RADIO6_1);
/* 306 */ MOSCAD_add_new_site(406,RADIO6_1);
/* 307 */ MOSCAD_add_new_site(407,RADIO6_1);
/* 308 */ MOSCAD_add_new_site(408,RADIO6_1);
/* 309 */ MOSCAD_add_new_site(409,RADIO6_1);
/* 310--------------------------------------319*/
/* 310 */ MOSCAD_add_new_site(410,RADIO6_1);
/* 311 */ MOSCAD_add_new_site(411,RADIO6_1);
/* 312 */ MOSCAD_add_new_site(412,RADIO6_1);
/* 313 */ MOSCAD_add_new_site(413,RADIO6_1);
/* 314 */ MOSCAD_add_new_site(414,RADIO6_1);
/* 315 */ MOSCAD_add_new_site(415,RADIO6_1);
/* 316 */ MOSCAD_add_new_site(416,RADIO6_1);
/* 317 */ MOSCAD_add_new_site(417,RADIO6_1);
/* 318 */ MOSCAD_add_new_site(418,RADIO6_1);
/* 319 */ MOSCAD_add_new_site(419,RADIO6_1);
	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/
/*
for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
} */



/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : GYOR*/
ST[0].sRAD_K1[0].nRtuNumRad = 92; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=0; 
ST[0].sRAD_K1[0].nIndx[1]=1; 
ST[0].sRAD_K1[0].nIndx[2]=2; 
ST[0].sRAD_K1[0].nIndx[3]=3; 
ST[0].sRAD_K1[0].nIndx[4]=4; 
ST[0].sRAD_K1[0].nIndx[5]=5; 
ST[0].sRAD_K1[0].nIndx[6]=6; 
ST[0].sRAD_K1[0].nIndx[7]=17; 
ST[0].sRAD_K1[0].nIndx[8]=18; 
ST[0].sRAD_K1[0].nIndx[9]=19; 
ST[0].sRAD_K1[0].nIndx[10]=25; 
ST[0].sRAD_K1[0].nIndx[11]=34; 
ST[0].sRAD_K1[0].nIndx[12]=44; 
ST[0].sRAD_K1[0].nIndx[13]=49; 
ST[0].sRAD_K1[0].nIndx[14]=50; 
ST[0].sRAD_K1[0].nIndx[15]=51; 
ST[0].sRAD_K1[0].nIndx[16]=52; 
ST[0].sRAD_K1[0].nIndx[17]=53; 
ST[0].sRAD_K1[0].nIndx[18]=54; 
ST[0].sRAD_K1[0].nIndx[19]=55; 
ST[0].sRAD_K1[0].nIndx[20]=56; 
ST[0].sRAD_K1[0].nIndx[21]=57; 
ST[0].sRAD_K1[0].nIndx[22]=58; 
ST[0].sRAD_K1[0].nIndx[23]=59; 
ST[0].sRAD_K1[0].nIndx[24]=60; 
ST[0].sRAD_K1[0].nIndx[25]=61; 
ST[0].sRAD_K1[0].nIndx[26]=62; 
ST[0].sRAD_K1[0].nIndx[27]=63; 
ST[0].sRAD_K1[0].nIndx[28]=64; 
ST[0].sRAD_K1[0].nIndx[29]=65; 
ST[0].sRAD_K1[0].nIndx[30]=66; 
ST[0].sRAD_K1[0].nIndx[31]=67; 
ST[0].sRAD_K1[0].nIndx[32]=69; 
ST[0].sRAD_K1[0].nIndx[33]=77; 
ST[0].sRAD_K1[0].nIndx[34]=78; 
ST[0].sRAD_K1[0].nIndx[35]=79; 
ST[0].sRAD_K1[0].nIndx[36]=80; 
ST[0].sRAD_K1[0].nIndx[37]=81; 
ST[0].sRAD_K1[0].nIndx[38]=82; 
ST[0].sRAD_K1[0].nIndx[39]=83; 
ST[0].sRAD_K1[0].nIndx[40]=84; 
ST[0].sRAD_K1[0].nIndx[41]=85; 
ST[0].sRAD_K1[0].nIndx[42]=86; 
ST[0].sRAD_K1[0].nIndx[43]=87; 
ST[0].sRAD_K1[0].nIndx[44]=88; 
ST[0].sRAD_K1[0].nIndx[45]=89; 
ST[0].sRAD_K1[0].nIndx[46]=90; 
ST[0].sRAD_K1[0].nIndx[47]=91; 
ST[0].sRAD_K1[0].nIndx[48]=93; 
ST[0].sRAD_K1[0].nIndx[49]=94; 
ST[0].sRAD_K1[0].nIndx[50]=95; 
ST[0].sRAD_K1[0].nIndx[51]=98; 
ST[0].sRAD_K1[0].nIndx[52]=103; 
ST[0].sRAD_K1[0].nIndx[53]=104; 
ST[0].sRAD_K1[0].nIndx[54]=105; 
ST[0].sRAD_K1[0].nIndx[55]=117; 
ST[0].sRAD_K1[0].nIndx[56]=121; 
ST[0].sRAD_K1[0].nIndx[57]=135; 
ST[0].sRAD_K1[0].nIndx[58]=136; 
ST[0].sRAD_K1[0].nIndx[59]=145; 
ST[0].sRAD_K1[0].nIndx[60]=160; 
ST[0].sRAD_K1[0].nIndx[61]=165; 
ST[0].sRAD_K1[0].nIndx[62]=171;
ST[0].sRAD_K1[0].nIndx[63]=172; 
ST[0].sRAD_K1[0].nIndx[64]=183; 
ST[0].sRAD_K1[0].nIndx[65]=184; 
ST[0].sRAD_K1[0].nIndx[66]=185; 
ST[0].sRAD_K1[0].nIndx[67]=186; 
ST[0].sRAD_K1[0].nIndx[68]=187; 
ST[0].sRAD_K1[0].nIndx[69]=188; 
ST[0].sRAD_K1[0].nIndx[70]=189; 
ST[0].sRAD_K1[0].nIndx[71]=190;
ST[0].sRAD_K1[0].nIndx[72]=191;
ST[0].sRAD_K1[0].nIndx[73]=192;
ST[0].sRAD_K1[0].nIndx[74]=193;
ST[0].sRAD_K1[0].nIndx[75]=194;
ST[0].sRAD_K1[0].nIndx[76]=195;
ST[0].sRAD_K1[0].nIndx[77]=196;
ST[0].sRAD_K1[0].nIndx[78]=197;
ST[0].sRAD_K1[0].nIndx[79]=198;
ST[0].sRAD_K1[0].nIndx[80]=199;
ST[0].sRAD_K1[0].nIndx[81]=200;
ST[0].sRAD_K1[0].nIndx[82]=201;
ST[0].sRAD_K1[0].nIndx[83]=202;
ST[0].sRAD_K1[0].nIndx[84]=205;
ST[0].sRAD_K1[0].nIndx[85]=209;
ST[0].sRAD_K1[0].nIndx[86]=210;
ST[0].sRAD_K1[0].nIndx[87]=211;
ST[0].sRAD_K1[0].nIndx[88]=212;
ST[0].sRAD_K1[0].nIndx[89]=222;
ST[0].sRAD_K1[0].nIndx[90]=228;
ST[0].sRAD_K1[0].nIndx[91]=238;


 

 





/* K2 : VESZ, TAP, PAP, SUM */
ST[0].sRAD_K2[0].nRtuNumRad = 76; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=7;
ST[0].sRAD_K2[0].nIndx[1]=13;
ST[0].sRAD_K2[0].nIndx[2]=16;
ST[0].sRAD_K2[0].nIndx[3]=20;
ST[0].sRAD_K2[0].nIndx[4]=21;
ST[0].sRAD_K2[0].nIndx[5]=22;
ST[0].sRAD_K2[0].nIndx[6]=23;
ST[0].sRAD_K2[0].nIndx[7]=24;
ST[0].sRAD_K2[0].nIndx[8]=26;
ST[0].sRAD_K2[0].nIndx[9]= 27;
ST[0].sRAD_K2[0].nIndx[10]=28;
ST[0].sRAD_K2[0].nIndx[11]=29;
ST[0].sRAD_K2[0].nIndx[12]=30;
ST[0].sRAD_K2[0].nIndx[13]=31;
ST[0].sRAD_K2[0].nIndx[14]=32;
ST[0].sRAD_K2[0].nIndx[15]=33;
ST[0].sRAD_K2[0].nIndx[16]=35;
ST[0].sRAD_K2[0].nIndx[17]=38;
ST[0].sRAD_K2[0].nIndx[18]=39;
ST[0].sRAD_K2[0].nIndx[19]=40;
ST[0].sRAD_K2[0].nIndx[20]=41;
ST[0].sRAD_K2[0].nIndx[21]=42;
ST[0].sRAD_K2[0].nIndx[22]=43;
ST[0].sRAD_K2[0].nIndx[23]=73;
ST[0].sRAD_K2[0].nIndx[24]=74;
ST[0].sRAD_K2[0].nIndx[25]=75;
ST[0].sRAD_K2[0].nIndx[26]=76;
ST[0].sRAD_K2[0].nIndx[27]=106;
ST[0].sRAD_K2[0].nIndx[28]=107;
ST[0].sRAD_K2[0].nIndx[29]=108;
ST[0].sRAD_K2[0].nIndx[30]=109;
ST[0].sRAD_K2[0].nIndx[31]=110;
ST[0].sRAD_K2[0].nIndx[32]=111;
ST[0].sRAD_K2[0].nIndx[33]=112;
ST[0].sRAD_K2[0].nIndx[34]=113;
ST[0].sRAD_K2[0].nIndx[35]=114;
ST[0].sRAD_K2[0].nIndx[36]=115;
ST[0].sRAD_K2[0].nIndx[37]=116;
ST[0].sRAD_K2[0].nIndx[38]=118;
ST[0].sRAD_K2[0].nIndx[39]=119;
ST[0].sRAD_K2[0].nIndx[40]=120;
ST[0].sRAD_K2[0].nIndx[41]=122;
ST[0].sRAD_K2[0].nIndx[42]=126;
ST[0].sRAD_K2[0].nIndx[43]=127;
ST[0].sRAD_K2[0].nIndx[44]=128;
ST[0].sRAD_K2[0].nIndx[45]=129;
ST[0].sRAD_K2[0].nIndx[46]=130;
ST[0].sRAD_K2[0].nIndx[47]=131;
ST[0].sRAD_K2[0].nIndx[48]=132;
ST[0].sRAD_K2[0].nIndx[49]=137;
ST[0].sRAD_K2[0].nIndx[50]=139;
ST[0].sRAD_K2[0].nIndx[51]=140;
ST[0].sRAD_K2[0].nIndx[52]=141;
ST[0].sRAD_K2[0].nIndx[53]=148;
ST[0].sRAD_K2[0].nIndx[54]=153;
ST[0].sRAD_K2[0].nIndx[55]=154;
ST[0].sRAD_K2[0].nIndx[56]=155;
ST[0].sRAD_K2[0].nIndx[57]=156;
ST[0].sRAD_K2[0].nIndx[58]=157;
ST[0].sRAD_K2[0].nIndx[59]=158;
ST[0].sRAD_K2[0].nIndx[60]=159;
ST[0].sRAD_K2[0].nIndx[61]=162;
ST[0].sRAD_K2[0].nIndx[62]=180;
ST[0].sRAD_K2[0].nIndx[63]=182;
ST[0].sRAD_K2[0].nIndx[64]=208;
ST[0].sRAD_K2[0].nIndx[65]=213;
ST[0].sRAD_K2[0].nIndx[66]=214;
ST[0].sRAD_K2[0].nIndx[67]=218;
ST[0].sRAD_K2[0].nIndx[68]=219;
ST[0].sRAD_K2[0].nIndx[69]=223;
ST[0].sRAD_K2[0].nIndx[70]=224;
ST[0].sRAD_K2[0].nIndx[71]=227;
ST[0].sRAD_K2[0].nIndx[72]=233;
ST[0].sRAD_K2[0].nIndx[73]=234;
ST[0].sRAD_K2[0].nIndx[74]=235;
ST[0].sRAD_K2[0].nIndx[75]=236;





/* K3 : ESZT, SOP, KOR, BI, GPRS */
ST[0].sRAD_K3[0].nRtuNumRad = 72; /*55*/
ST[0].sRAD_K3[0].nIndx[0]=7; /*8*/
ST[0].sRAD_K3[0].nIndx[1]=9; 
ST[0].sRAD_K3[0].nIndx[2]=10; 
ST[0].sRAD_K3[0].nIndx[3]=11; 
ST[0].sRAD_K3[0].nIndx[4]=12; 
ST[0].sRAD_K3[0].nIndx[5]=14; 
ST[0].sRAD_K3[0].nIndx[6]=15; 
ST[0].sRAD_K3[0].nIndx[7]=36; 
ST[0].sRAD_K3[0].nIndx[8]=37; 
ST[0].sRAD_K3[0].nIndx[9]=45; 
ST[0].sRAD_K3[0].nIndx[10]=46; 
ST[0].sRAD_K3[0].nIndx[11]=47; 
ST[0].sRAD_K3[0].nIndx[12]=48; 
ST[0].sRAD_K3[0].nIndx[13]=68; 
ST[0].sRAD_K3[0].nIndx[14]=70; 
ST[0].sRAD_K3[0].nIndx[15]=71; 
ST[0].sRAD_K3[0].nIndx[16]=72; 
ST[0].sRAD_K3[0].nIndx[17]=92; 
ST[0].sRAD_K3[0].nIndx[18]=96; 
ST[0].sRAD_K3[0].nIndx[19]=97; 
ST[0].sRAD_K3[0].nIndx[20]=99; 
ST[0].sRAD_K3[0].nIndx[21]=100; 
ST[0].sRAD_K3[0].nIndx[22]=101; 
ST[0].sRAD_K3[0].nIndx[23]=102; 
ST[0].sRAD_K3[0].nIndx[24]=123; 
ST[0].sRAD_K3[0].nIndx[25]=124; 
ST[0].sRAD_K3[0].nIndx[26]=125; 
ST[0].sRAD_K3[0].nIndx[27]=133; 
ST[0].sRAD_K3[0].nIndx[28]=134; 
ST[0].sRAD_K3[0].nIndx[29]=138; 
ST[0].sRAD_K3[0].nIndx[30]=142; 
ST[0].sRAD_K3[0].nIndx[31]=143; 
ST[0].sRAD_K3[0].nIndx[32]=144; 
ST[0].sRAD_K3[0].nIndx[33]=146; 
ST[0].sRAD_K3[0].nIndx[34]=147; 
ST[0].sRAD_K3[0].nIndx[35]=149; 
ST[0].sRAD_K3[0].nIndx[36]=150; 
ST[0].sRAD_K3[0].nIndx[37]=151; 
ST[0].sRAD_K3[0].nIndx[38]=152; 
ST[0].sRAD_K3[0].nIndx[39]=161; 
ST[0].sRAD_K3[0].nIndx[40]=163; 
ST[0].sRAD_K3[0].nIndx[41]=164; 
ST[0].sRAD_K3[0].nIndx[42]=166; 
ST[0].sRAD_K3[0].nIndx[43]=167; 
ST[0].sRAD_K3[0].nIndx[44]=168; 
ST[0].sRAD_K3[0].nIndx[45]=169; 
ST[0].sRAD_K3[0].nIndx[46]=170; 
ST[0].sRAD_K3[0].nIndx[47]=173; 
ST[0].sRAD_K3[0].nIndx[48]=174; 
ST[0].sRAD_K3[0].nIndx[49]=175; 
ST[0].sRAD_K3[0].nIndx[50]=176; 
ST[0].sRAD_K3[0].nIndx[51]=177; 
ST[0].sRAD_K3[0].nIndx[52]=178; 
ST[0].sRAD_K3[0].nIndx[53]=179; 
ST[0].sRAD_K3[0].nIndx[54]=182; 
ST[0].sRAD_K3[0].nIndx[55]=203; 
ST[0].sRAD_K3[0].nIndx[56]=204; 
ST[0].sRAD_K3[0].nIndx[57]=206; 
ST[0].sRAD_K3[0].nIndx[58]=207; 
ST[0].sRAD_K3[0].nIndx[59]=215; 
ST[0].sRAD_K3[0].nIndx[60]=216; 
ST[0].sRAD_K3[0].nIndx[61]=217; 
ST[0].sRAD_K3[0].nIndx[62]=220; 
ST[0].sRAD_K3[0].nIndx[63]=221; 
ST[0].sRAD_K3[0].nIndx[64]=225; 
ST[0].sRAD_K3[0].nIndx[65]=226; 
ST[0].sRAD_K3[0].nIndx[66]=230; 
ST[0].sRAD_K3[0].nIndx[67]=231; 
ST[0].sRAD_K3[0].nIndx[68]=232; 
ST[0].sRAD_K3[0].nIndx[69]=233; 
ST[0].sRAD_K3[0].nIndx[70]=237; 
ST[0].sRAD_K3[0].nIndx[71]=239; 








/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 0;



} /* end fnSetComPar()*/

