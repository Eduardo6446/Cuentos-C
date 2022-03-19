#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>



void presentacion()
{
    int cabello[] = {384,95,384,105,393,105,393,162,326,162,326,172,297,172,297,201,288,201,288,230,280,230,280,210,270,210,270,145,280,144,280,134,290,134,290,125,299,125,299,114,347,114,347,105,357,105,357,95,384,95};
    int cabello1[] = {289,231,298,231,298,240,289,240,289,231};
    int camisa[] = {290,251,374,251,374,261,384,261,384,279,374,319,299,319,299,279,280,279,280,261,290,261,290,252}; 
    int pantalon[] = {280,320,374,320,374,367,347,367,347,338,307,338,307,367,280,367,280,320};
    int ojo1[] = {317,192,326,192,326,202,317,202,317,192};
    int ojo2[] = {365,192,374,192,374,202,365,202,365,192};
    int boca[] = {337,222,365,222,365,230,337,230,337,222};
    int zapato[] = {280,368,307,368,307,377,280,377,280,368};
    int zapato1[] = {347,369,374,368,374,377,347,377,347,369};
    int mano[] = {280,280,297,280,297,328,280,328,280,280};
    int mano1[] = {375,280,375,328,384,328,384,280,375,280};
    int mano2[] = {280,280,314,280,314,275,320,275,320,280,328,280,328,297,280,297,280,280};
    int cara[] = {384,164,384,164,384,230,374,230,374,240,355,240,355,250,309,250,309,240,299,240,299,230,289,230,289,202,298,202,298,173,327,173,327,163,384,164};
    int i = 0;

    setbkcolor(0);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(17,cara);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(30,cabello);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(5,cabello1);


    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,ojo1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,ojo2);

    setcolor(12);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,12);
    fillpoly(5,boca);

    setcolor(RED);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(13,camisa);

    setcolor(8);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,zapato1);

    setcolor(8);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,zapato);

    setcolor(1);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,1);
    fillpoly(9,pantalon);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(5,mano);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(5,mano1);

    setcolor(15);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(50,430,"UNIVERSIDAD NACIONAL DE INGENIERIA");

    setcolor(15);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(50,450,"Conceptos de lenguaje");

    setcolor(15);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(50,470,"Eduardo Antonio Orozco Corea 1m3-CO");

    getch();


    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,mano);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(9,mano2);

    setcolor(1);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,1);
    fillpoly(9,pantalon);

    for(i=0;i<5;i++)
	{
		sound(i*800);
		delay(63);
	    nosound();
	}

    cleardevice();
    
}


void home()
{   

    /*letras*/
    setcolor(WHITE);
    rectangle(109,385,511,420);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(300,400,WHITE);

    /*boton salida*/
    setcolor(RED);
    rectangle(600,1,639,35);
    setfillstyle(SOLID_FILL,RED);
    floodfill(620,20,RED);

    /**La X*/

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,3);
    outtextxy(610,10,"X");


    /*-------------------------------*/

    /*boton ayuda*/
    setcolor(YELLOW);
    rectangle(600,445,639,479);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(620,450,YELLOW);

    /*simbolo de ayuda*/
    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(605,453,"help");

    /*-------------------------------*/

    /*Circulo de inicio - pausa*/
    setcolor(GREEN);
    circle(318,444,19);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(318,444,GREEN);

    /*boton inicio*/
    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(303,440,"Enter");

    /*boton rectangulo derecha*/
    setcolor(CYAN);
    rectangle(375,430,435,455);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(405,444,CYAN);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,2);
    outtextxy(401,435,"|");
    outtextxy(401,437,"v");

    /*-------------------------------*/

    /*boton rectangulo izquierda*/
    setcolor(CYAN);
    rectangle(200,430,260,455);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(230,444,CYAN);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,2);
    outtextxy(225,435,"^");
    outtextxy(225,436,"|");

    /*-------------------------------*/

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,2);
    outtextxy(190,100,"Elija su cuento:");

    setcolor(RED + BLINK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(250,130,"Los tres cerditos");

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(250,150,"La luna");

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(250,170,"El cofre");
}


void cerditos()
{
    /*LOS TRES CERDITOS*/

    int lobo[] = {147,104,150,104,150,101,156,101,156,104,160,104,160,110,161,110,161,113,165,113,165,115,171,115,171,118,165,118,165,122,170,122,170,124,173,124,173,130,176,130,176,132,183,132,183,134,187,134,187,138,205,138,205,141,210,141,210,144,216,144,216,148,220,147,220,149,222,149,222,151,225,151,225,153,228,153,228,157,231,157,231,159,243,159,243,164,239,164,239,167,234,167,234,169,227,169,227,164,221,164,221,160,216,160,216,157,212,158,212,161,215,161,215,166,216,166,216,171,221,171,221,178,220,178,220,184,213,184,213,178,216,178,216,175,213,175,213,171,210,171,210,170,206,170,206,166,203,166,203,171,204,171,204,172,206,172,206,178,204,178,204,184,199,184,199,178,202,178,202,175,199,175,199,171,194,171,194,170,190,170,190,164,188,164,188,158,168,158,168,164,165,164,165,172,162,172,162,177,161,177,161,184,156,184,156,178,157,178,157,159,156,159,156,153,153,153,153,147,150,147,150,141,147,141,147,132,145,132,145,122,147,122,147,104};
    int olobo[] = {155,107,157,107,157,110,155,110,155,107};

    int lobo1[] = {209,335,198,335,198,333,197,333,197,328,195,328,195,322,194,322,194,315,192,315,192,311,190,311,190,306,187,306,187,309,180,309,180,306,171,306,171,309,169,309,169,311,167,311,167,313,164,313,164,315,160,315,160,319,159,319,159,328,162,328,162,330,167,330,167,332,169,332,169,335,157,335,157,333,155,333,155,329,153,329,153,323,152,323,152,317,153,317,153,314,155,314,155,307,155,304,152,304,152,307,152,309,151,309,151,316,149,316,149,321,148,321,148,323,144,323,144,325,138,325,138,322,140,322,140,319,142,319,142,317,144,317,144,301,141,301,141,287,144,287,144,284,145,284,145,281,147,281,147,280,152,280,152,277,155,277,155,275,179,275,179,274,192,274,192,271,198,271,198,269,203,269,203,261,205,261,205,257,207,257,207,255,213,255,213,256,211,256,211,261,217,261,217,264,219,264,219,265,221,265,221,267,222,267,222,269,225,269,225,271,230,271,230,274,234,274,234,275,236,275,236,280,234,280,234,284,233,284,233,286,217,286,217,289,216,289,216,293,214,293,214,294,213,294,213,296,211,296,211,299,209,299,209,301,206,301,206,303,204,303,204,305,202,305,202,307,201,307,201,311,199,311,199,320,201,320,201,326,202,326,202,330,207,330,207,332,209,332,209,335};
    int olobo1[] = {214,268,218,268,218,270,220,270,220,274,216,274,216,271,214,271,214,268};

    int pig[] = {376,318,384,318,384,301,391,301,391,307,450,307,450,312,457,312,457,318,465,318,465,329,480,329,480,340,474,340,474,334,465,334,465,352,457,352,457,363,451,363,451,357,443,357,443,363,436,363,436,357,413,357,413,363,406,363,406,357,398,357,398,363,392,363,392,357,384,357,384,352,376,352,376,346,376,318};
    int npig[] = {369,330,406,330,406,346,369,346,369,330};
    int o1pig[] = {384,324,391,324,393,329,384,329,384,324};
    int o2pig[] = {406,324,413,324,413,329,406,329,406,324};

    int pig1[] = {390,241,397,241,397,226,403,226,403,231,458,231,458,236,465,236,465,241,472,241,472,251,486,251,486,261,480,261,480,257,472,257,472,272,465,272,465,282,459,282,459,277,451,277,451,282,444,282,444,277,424,277,424,282,417,282,417,277,410,277,410,282,404,282,404,277,397,277,397,272,390,272,390,241};
    int npig1[] = {383,251,417,251,417,267,383,267,383,251};
    int o1pig1[] = {397,246,403,246,403,250,397,250,397,246};
    int o2pig1[] = {417,246,424,246,424,250,417,250,417,246};

    int pig2[] = {278,305,283,305,283,310,330,310,330,315,335,315,335,319,341,319,341,328,353,328,354,337,348,337,348,332,341,332,341,346,335,345,335,356,330,355,330,350,324,350,324,355,318,355,318,350,301,350,301,355,295,355,295,350,289,350,289,355,284,355,284,350,278,350,278,345,272,345,272,319,278,319,278,305};
    int npig2[] = {266,329,294,329,294,341,266,341,266,329};
    int o1pig2[] = {278,323,283,323,283,328,278,328,278,323};
    int o2pig2[] = {295,323,300,323,300,328,295,328,295,323};

    int pig3[] = {329,302,329,315,334,315,334,341,329,341,329,345,324,345,324,351,320,351,320,345,315,345,315,351,310,351,310,345,294,345,294,351,290,351,290,345,284,345,284,351,280,351,280,341,275,341,275,328,269,328,269,332,266,332,266,324,275,324,275,315,280,315,280,311,285,311,285,307,325,307,325,302,329,302};
    int npig3[] = {316,324,316,337,339,337,339,324,316,324};
    int o1pig3[] = {310,320,315,320,315,323,310,323,310,320};
    int o2pig3[] = {325,320,329,320,329,323,325,323,325,320};

    int pig4[] = {199,159,201,159,202,161,230,161,230,164,234,164,234,168,238,168,238,174,244,174,244,180,242,180,242,177,238,177,238,187,234,187,234,193,231,193,231,190,227,190,227,193,224,193,224,190,213,190,213,193,210,193,210,190,206,190,206,193,203,193,203,190,199,190,199,187,196,187,196,169,199,169,199,159};
    int npig4[] = {193,175,209,175,209,183,193,183,193,175};
    int o1pig4[] = {199,172,202,172,202,174,199,174,199,172};
    int o2pig4[] = {210,172,213,172,213,174,210,174,210,172};

    int puerta[] = {154,220,154,166,182,166,182,220,154,220};
    int ventana[] = {197,166,225,166,225,198,197,198,197,166};



    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 2);
    outtextxy(190, 100, "Elija su cuento:");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 130, "Los tres cerditos");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 150, "La luna");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 170, "El cofre");

    /*parrafo 1*/
    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Habia una vez 3 cerditos que eran hermanos.");

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig);   


    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig1);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig1);

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig2);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig2);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig2);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig2);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Habia una vez 3 cerditos que eran hermanos.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "vivian en lo mas profundo del bosque.");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "vivian en lo mas profundo del bosque.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Siempre habian vivido felices y sin preocupaciones"); /*tamaño maximo de la linea*/

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Siempre habian vivido felices y sin preocupaciones");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero ahora se encontraban temerosos de un lobo");

    setcolor(8);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,8);
    fillpoly(117,lobo);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(5,olobo);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero ahora se encontraban temerosos de un lobo");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Fue asi como decidieron construir cada uno su casa");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig2);

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig3);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig3);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig3);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig3);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Fue asi como decidieron construir cada uno su casa");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "que les serviria de refugio si el lobo atacaba.");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "que les serviria de refugio si el lobo atacaba.");

    sleep(4);
    /*fin parrafo 1*/

    /*parrafo 2*/
    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El primer cerdito era el mas perezoso");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(117,lobo);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,olobo);

    setcolor(14);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,14);
    rectangle(133,151,247,220);
    floodfill(173,171,14);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(5,puerta);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,ventana);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El primer cerdito era el mas perezoso");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "por lo que decidio hacer una casita de paja");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "por lo que decidio hacer una casita de paja");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El segundo cerdito su casa, iba a ser de madera");

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig1);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig1);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    rectangle(260,151,361,220);
    floodfill(273,171,6);

    setcolor(7);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,7);
    rectangle(280,166,308,219);
    floodfill(300,180,7);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(330,166,354,190);
    floodfill(340,170,9);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El segundo cerdito su casa, iba a ser de madera");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "era mas fuerte que la de su hermano");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "era mas fuerte que la de su hermano");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El tercer cerdito que era mas trabajador");

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig2);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig2);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig2);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig2);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El tercer cerdito que era mas trabajador");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "decidio construir una casa de ladrillos");

    setcolor(4);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,4);
    rectangle(380,151,490,220);
    floodfill(403,171,4);

    setcolor(7);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,7);
    rectangle(400,166,434,219);
    floodfill(410,180,7);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(450,166,484,190);
    floodfill(460,170,9);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "decidio construir una casa de ladrillos");

    /*fin parrafo 2*/

    /*parrafo 3*/
    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo pasaba cerca");


    setcolor(8);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,8);
    fillpoly(145,lobo1);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(9,olobo1);


    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo pasaba cerca");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "se sintio insultado ante tanta insolencia");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "se sintio insultado ante tanta insolencia");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "y decidio acabar con los cerditos de una vez.");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "y decidio acabar con los cerditos de una vez.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los tomo por sorpresa y rugiendo grito:");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los tomo por sorpresa y rugiendo grito:");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Cerditos, me los voy a comer uno por uno");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Cerditos, me los voy a comer uno por uno");

    sleep(2);
    /*fin parrafo 3*/

    /*parrafo 4*/
    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los 3 cerditos corrieron hacia sus casas");

    sleep(1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig);   

    sleep(1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig1);

    sleep(1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig2);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los 3 cerditos corrieron hacia sus casas");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo fue a la casa del primer cerdito.");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo fue a la casa del primer cerdito.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Abreme la puerta o soplare y la casa derribare");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Abreme la puerta o soplare y la casa derribare");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, " - dijo el lobo");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, " - dijo el lobo");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Como el cerdito no abrio");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Como el cerdito no abrio");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo soplo y derrumbo la casa de paja");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(133,151,247,220);
    floodfill(173,171,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,puerta);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,ventana);    

    sleep(1);

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig4);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig4);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig4);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig4);


    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo soplo y derrumbo la casa de paja");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "corrio hasta la casa del segundo hermano");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig4);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig4);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig4);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig4);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "corrio hasta la casa del segundo hermano");

    /***/

    /**/ /*
        parrafo 4
        */

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo mas enfurecido y hambriento les advirtio");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "el lobo mas enfurecido y hambriento les advirtio");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Soplare y soplare y esta casa también derribare");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Soplare y soplare y esta casa también derribare");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo soplo con mas fuerza que la vez anterior");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo soplo con mas fuerza que la vez anterior");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "hasta que las paredes de la casita no resistieron");


    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(260,151,361,220);
    floodfill(273,171,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(280,166,308,219);
    floodfill(300,180,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(330,166,354,190);
    floodfill(340,170,9);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "hasta que las paredes de la casita no resistieron");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los dos cerditos a duras penas escaparon");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los dos cerditos a duras penas escaparon");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "y llegar a la casa del tercer hermano.");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "y llegar a la casa del tercer hermano.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo estaba realmente enfadado");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "El lobo estaba realmente enfadado");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "asi, comenzo a soplar tan fuerte como pudo");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "asi, comenzo a soplar tan fuerte como pudo");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Soplo y soplo hasta quedarse sin fuerzas");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Soplo y soplo hasta quedarse sin fuerzas");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero la casita era muy resistente");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero la casita era muy resistente");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "sus esfuerzos eran en vano");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "sus esfuerzos eran en vano");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(145,lobo1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(9,olobo1);
    
    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los cerditos agradecieron a su hermano");

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig);   


    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig1);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig1);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig1);

    setcolor(13);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,13);
    fillpoly(37,pig3);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o1pig3);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,o2pig3);

    setcolor(5);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,5);
    fillpoly(5,npig3);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Los cerditos agradecieron a su hermano");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Este los regano por haber sido tan perezosos");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Este los regano por haber sido tan perezosos");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero ya habian aprendido la leccion");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "pero ya habian aprendido la leccion");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Y asi fue como vivieron felices");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "Y asi fue como vivieron felices");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "cada uno en su propia casita de ladrillos.");


    setcolor(4);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,4);
    rectangle(133,151,247,220);
    floodfill(173,171,4);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(5,puerta);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,ventana);

    sleep(1);

    setcolor(4);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,4);
    rectangle(380,151,490,220);
    floodfill(403,171,4);

    setcolor(7);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,7);
    rectangle(400,166,434,219);
    floodfill(410,180,7);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(450,166,484,190);
    floodfill(460,170,9);

    sleep(1);

    setcolor(4);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,4);
    rectangle(260,151,361,220);
    floodfill(273,171,4);

    setcolor(7);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,7);
    rectangle(280,166,308,219);
    floodfill(300,180,7);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(330,166,354,190);
    floodfill(340,170,9);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(112, 400, "cada uno en su propia casita de ladrillos.");

    sleep(1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig);   

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig3);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(37,pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o1pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,o2pig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,npig2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(133,151,247,220);
    floodfill(173,171,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,puerta);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,ventana); 

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(260,151,361,220);
    floodfill(273,171,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(280,166,308,219);
    floodfill(300,180,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(330,166,354,190);
    floodfill(340,170,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(380,151,490,220);
    floodfill(403,171,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(400,166,434,219);
    floodfill(410,180,9);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    rectangle(450,166,484,190);
    floodfill(460,170,9);

    /*-------------------------------*/
}


void luna()
{

    int cabeza[] = {237,275,260,275,260,299,252,299,252,307,245,307,245,299,237,299,237,275};
    int pelo[] = {238,287,229,287,229,281,236,281,236,274,261,274,261,281,268,281,268,287,252,287,252,281,238,281,238,287};
    int camisa[] = {229,308,268,308,268,313,259,313,259,325,238,325,238,313,229,313,229,308};
    int pant[] = {238,326,259,326,259,351,252,351,252,333,245,333,245,351,238,351,238,326};
    int zap[] = {229,352,229,357,245,357,245,352,229,352};
    int zap2[] = {252,352,251,357,268,357,268,352,252,352};
    int man1[] = {261,314,268,314,268,333,261,333,261,314};
    int man2[] = {229,314,236,314,236,333,229,333,229,314};

    int luna[] = {161,207,161,210,155,210,155,213,153,213,153,214,151,214,151,218,149,218,149,232,151,232,151,237,153,237,153,238,157,238,157,240,158,240,158,241,160,241,160,244,152,244,152,242,150,242,150,241,147,241,147,239,145,239,145,238,143,238,143,236,141,236,141,233,140,233,140,232,138,232,138,219,140,219,140,216,141,216,141,213,143,213,143,211,146,211,146,207,161,207};
    

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 2);
    outtextxy(190, 100, "Elija su cuento:");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 130, "Los tres cerditos");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 150, "La luna");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 170, "El cofre");

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Habia una vez un joven astronomo llamado Anton.");


    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(9,cabeza);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,zap2);

    setcolor(0);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,0);
    fillpoly(5,zap);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(12,pelo);

    setcolor(2);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,2);
    fillpoly(9,pant); 

    setcolor(4);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,4);
    fillpoly(9,camisa);  

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(5,man1);

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(5,man2);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Habia una vez un joven astronomo llamado Anton.");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Que estaba enamorado de la luna");

    putpixel(115,200,15);
    putpixel(125,210,15);
    putpixel(155,230,15);
    putpixel(265,250,15);
    putpixel(275,270,15);
    putpixel(385,203,15);
    putpixel(495,210,15);
    putpixel(335,197,15);
    putpixel(235,186,15);
    putpixel(225,203,15);
    putpixel(145,204,15);
    putpixel(265,205,15);
    putpixel(335,210,15);
    putpixel(325,240,15);
    putpixel(255,210,15);
    putpixel(315,250,15);
    putpixel(115,200,15);
    putpixel(125,110,15);
    putpixel(155,130,15);
    putpixel(265,150,15);
    putpixel(275,170,15);
    putpixel(385,103,15);
    putpixel(495,110,15);
    putpixel(335,97,15);
    putpixel(235,186,15);
    putpixel(225,103,15);
    putpixel(145,104,15);
    putpixel(265,105,15);
    putpixel(335,110,15);
    putpixel(325,140,15);
    putpixel(255,110,15);
    putpixel(315,150,15);


    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    fillpoly(43,luna);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Que estaba enamorado de la luna");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"y pasaba noches enteras observandola");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"y pasaba noches enteras observandola");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Conocia perfectamente sus crateres,");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Conocia perfectamente sus crateres,");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"los fenomenos visibles desde la tierra");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"los fenomenos visibles desde la tierra");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"pero cada 28 dias Anton entristecia");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"pero cada 28 dias Anton entristecia");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"porque dejaba de ver a su amada");

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(43,luna);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"porque dejaba de ver a su amada");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"porque mientras duraba la luna nueva");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"porque mientras duraba la luna nueva");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"ella desaparecia y no hacia ni siquiera un guino");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"ella desaparecia y no hacia ni siquiera un guino");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Durante esas noches,para el eternas,se desesperaba");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Durante esas noches,para el eternas,se desesperaba");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Y por el mismo motivo");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Y por el mismo motivo");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"sentia que solo era feiz cada 28 dias");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"sentia que solo era feiz cada 28 dias");

    sleep(2);

    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"esperaba impaciente la gran cita con la luna llena");

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"esperaba impaciente la gran cita con la luna llena");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"cuando su amada estallaba con todo su esplendor");

    setcolor(15);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,15);
    circle(311,167,40);
    floodfill(311,167,15);

    sleep(2);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"cuando su amada estallaba con todo su esplendor");

    sleep(2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(9,cabeza);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,zap2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,zap);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(12,pelo);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(9,pant); 

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(9,camisa);  

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,man1);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(5,man2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    circle(311,167,40);
    floodfill(311,167,9);

    putpixel(115,200,9);
    putpixel(125,210,9);
    putpixel(155,230,9);
    putpixel(265,250,9);
    putpixel(275,270,9);
    putpixel(385,203,9);
    putpixel(495,210,9);
    putpixel(335,197,9);
    putpixel(235,186,9);
    putpixel(225,203,9);
    putpixel(145,204,9);
    putpixel(265,205,9);
    putpixel(335,210,9);
    putpixel(325,240,9);
    putpixel(255,210,9);
    putpixel(315,250,9);
    putpixel(115,200,9);
    putpixel(125,110,9);
    putpixel(155,130,9);
    putpixel(265,150,9);
    putpixel(275,170,9);
    putpixel(385,103,9);
    putpixel(495,110,9);
    putpixel(335,97,9);
    putpixel(235,186,9);
    putpixel(225,103,9);
    putpixel(145,104,9);
    putpixel(265,105,9);
    putpixel(335,110,9);
    putpixel(325,140,9);
    putpixel(255,110,9);
    putpixel(315,150,9);
}


void cofre()
{
    int tapa[] = {240,173,252,173,252,162,375,162,375,173,386,173,386,206,342,206,342,195,285,195,285,206,240,206,240,173};
    int amarillo[] = {229,184,239,184,239,207,286,207,286,196,341,196,341,207,387,207,387,185,397,185,397,273,229,273,229,184};
    int abajo[] = {241,219,285,219,285,230,342,230,342,219,386,219,386,262,241,262,241,219};

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 2);
    outtextxy(190, 100, "Elija su cuento:");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 130, "Los tres cerditos");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 150, "La luna");

    setcolor(9);
    settextstyle(DEFAULT_FONT, 0, 1);
    outtextxy(250, 170, "El cofre");


    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Hace muchos anos, vivia en la India un sabio");

    sleep(2);

    setcolor(WHITE);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Hace muchos anos, vivia en la India un sabio");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"quien se decia que guardaba en un cofre encantado");

    setcolor(14);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,14);
    fillpoly(13,amarillo);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(13,tapa);

    setcolor(6);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,6);
    fillpoly(9,abajo);

    sleep(2);

    setcolor(WHITE);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"quien se decia que guardaba en un cofre encantado");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"un gran secreto que lo hacia ser un triunfador");

    sleep(2);

    setcolor(WHITE);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"un gran secreto que lo hacia ser un triunfador");

    sleep(2);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Reyes le ofrecian poder y dinero,pero era en vano");

    sleep(2);

    setcolor(WHITE);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Reyes le ofrecian poder y dinero,pero era en vano");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Un dia llego ante el un nino y le dijo:");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Un dia llego ante el un nino y le dijo:");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"senor, también quiero ser inmensamente feliz. ");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"senor, también quiero ser inmensamente feliz. ");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Al ver la sencillez y la pureza del niño le dijo:");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Al ver la sencillez y la pureza del niño le dijo:");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"A ti te enseñare el secreto para ser feliz");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"A ti te enseñare el secreto para ser feliz");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"el gran secreto es una serie de pasos");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"el gran secreto es una serie de pasos");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"debes quererte a ti mismo");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"debes quererte a ti mismo");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes envidiar a nadie");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes envidiar a nadie");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes albergar en tu corazon rencor");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes albergar en tu corazon rencor");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes maltratar a nadie");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"no debes maltratar a nadie");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Y por ultimo, levantate siempre con una sonrisa");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"Y por ultimo, levantate siempre con una sonrisa");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"descubre en todo el lado bueno");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"descubre en todo el lado bueno");

    sleep(2);

    setcolor(0);
    settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"piensa en lo afortunado que eres");

    sleep(2);

    setcolor(15);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(112,400,"piensa en lo afortunado que eres");

    sleep(2);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(13,amarillo);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(13,tapa);

    setcolor(9);
	setlinestyle(SOLID_LINE,1,NORM_WIDTH);
    setfillstyle(SOLID_FILL,9);
    fillpoly(9,abajo);

}