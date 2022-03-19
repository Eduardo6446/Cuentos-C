/* UNIVERSIDAD NACIONAL DE INGENIERIA
    Eduardo Antonio Orozco Corea
    Conceptos de lenguaje
    1m3CO
*/

#include <cuentos.h>

#define Subir 72
#define Bajar 80
#define ENTER 13
#define right 77
#define left 75

void main()
{
    int driver = DETECT;
	int modo,tecla = 0;
    int dez = 1;

    initgraph(&driver, &modo,"c:\\TC20\\BIN");

    cleardevice();
    
    presentacion();

    setbkcolor(0);

    /*pantalla de video*/
    setcolor(9);
	rectangle(110,80,510,380);
    setfillstyle(SOLID_FILL,9);
    floodfill(255,190,9);

    /*barra de progreso*/
    setcolor(7);
    rectangle(535,80,570,380);
    setfillstyle(SOLID_FILL,7);
    floodfill(545,190,7);

    /*barrita dentro*/

    setcolor(15);
    rectangle(540,85,564,100);
    setfillstyle(SOLID_FILL,15);
    floodfill(550,90,15);

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
    circle(318,444,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(318,444,GREEN);

    /*boton inicio*/
    setcolor(BLACK);
	settextstyle(DEFAULT_FONT,0,1);
    outtextxy(301,440,"Enter");

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

    

    do 
    {
        tecla = getch();

        if (tecla == 'h' || tecla == 'H')
        {
            setcolor(YELLOW);
	        settextstyle(DEFAULT_FONT,0,1);
            outtextxy(605,453,"help");

            delay(300);

            setcolor(BLACK);
	        settextstyle(DEFAULT_FONT,0,1);
            outtextxy(605,453,"help");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,2);
            outtextxy(190,100,"Elija su cuento:");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,130,"Los tres cerditos");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,150,"La luna");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,170,"El cofre");



            setcolor(0);
            settextstyle(DEFAULT_FONT,0,2);
            outtextxy(112,100,"Ayuda:");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,120,"Al elegir un cuento se usaran La direccionales:");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,140,"Arriba y Abajo");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,170,"Para elegir su opcion presionar:");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,190,"ENTER");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,210,"Para salir usar la letra:");

            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,230,"X");


            sleep(4);


            setcolor(9);
            settextstyle(DEFAULT_FONT,0,2);
            outtextxy(112,100,"Ayuda:");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,120,"Al elegir un cuento se usaran La direccionales:");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,140,"Arriba y Abajo");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,170,"Para elegir su opcion presionar:");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,190,"ENTER");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,210,"Para salir usar la letra:");

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(250,230,"X");


            setcolor(0);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,210,"Presione cualquier tecla para continuar");

            getch();

            setcolor(9);
            settextstyle(DEFAULT_FONT,0,1);
            outtextxy(120,210,"Presione cualquier tecla para continuar");

            home();

        }
        

        if (tecla == 'x' || tecla == 'X')
        {
            setcolor(RED);
	        settextstyle(DEFAULT_FONT,0,3);
            outtextxy(610,10,"X");

            delay(300);

            setcolor(BLACK);
	        settextstyle(DEFAULT_FONT,0,3);
            outtextxy(610,10,"X");

            
            exit(1);
        }

        if (tecla == ENTER)
        {
            switch (dez)
            {
            case 1:
                do
                {
                    setcolor(GREEN);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");
                    
                    delay(300);

                    setcolor(BLACK);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");


                    cerditos();

                    sleep(1);

                    setcolor(0);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    tecla = getch();

                    setcolor(9);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    if (tecla == 'x' || tecla == 'X')
                    {
                        setcolor(RED);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        delay(300);

                        setcolor(BLACK);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        exit(1);
                    }

                    while (tecla != 'S' && tecla != 's' && tecla != 'N' && tecla != 'n')
                    {
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");

                        tecla = getch();

                        setcolor(9);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");
                    }
                    
                } while (tecla == 'S' || tecla == 's');
                
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

                break;
            
            case 2:
                do
                {
                    setcolor(GREEN);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");
                    
                    delay(300);

                    setcolor(BLACK);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");

                    luna();

                    sleep(1);

                    setcolor(0);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    tecla = getch();

                    setcolor(9);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    if (tecla == 'x' || tecla == 'X')
                    {
                        setcolor(RED);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        delay(300);

                        setcolor(BLACK);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        exit(1);
                    }

                    while (tecla != 'S' && tecla != 's' && tecla != 'N' && tecla != 'n')
                    {
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");

                        tecla = getch();

                        setcolor(9);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");
                    }
                    
                } while (tecla == 'S' || tecla == 's');

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

                setcolor(15);
                rectangle(540,85,564,100);
                setfillstyle(SOLID_FILL,15);
                floodfill(550,90,15);

                setcolor(7);
                rectangle(540,205,564,220);
                setfillstyle(SOLID_FILL,7);
                floodfill(550,210,7);

                break;

            case 3:
                do
                {
                    setcolor(GREEN);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");
                    
                    delay(300);

                    setcolor(BLACK);
	                settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(301,440,"Enter");

                    cofre();

                    sleep(1);

                    setcolor(0);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    tecla = getch();

                    setcolor(9);
                    settextstyle(DEFAULT_FONT,0,1);
                    outtextxy(120,120,"Desea repetir el cuento?: s/n");

                    if (tecla == 'x' || tecla == 'X')
                    {
                        setcolor(RED);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        delay(300);

                        setcolor(BLACK);
	                    settextstyle(DEFAULT_FONT,0,3);
                        outtextxy(610,10,"X");

                        exit(1);
                    }

                    while (tecla != 'S' && tecla != 's' && tecla != 'N' && tecla != 'n')
                    {
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");

                        tecla = getch();

                        setcolor(9);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(120,120,"Desea repetir el cuento?: s/n");
                    }
                    
                } while (tecla == 'S' || tecla == 's');

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

                setcolor(7);
                rectangle(540,205,564,220);
                setfillstyle(SOLID_FILL,7);
                floodfill(550,210,7);

                setcolor(15);
                rectangle(540,85,564,100);
                setfillstyle(SOLID_FILL,15);
                floodfill(550,90,15);

                break;
            }
        }
        
        if (tecla == 0)
        {
            tecla = getch();

            switch (tecla)
            {
            case Bajar:
                if (dez < 3)
                {
                    dez++;

                    switch (dez)
                    {
                    case 2:
                        
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(190,100,"Elija su cuento:");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,130,"Los tres cerditos");

                        setcolor(RED);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,150,"La luna");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,170,"El cofre");

                        setcolor(CYAN);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(401,435,"|");
                        outtextxy(401,437,"v");

                        delay(270);

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(401,435,"|");
                        outtextxy(401,437,"v");

                        setcolor(7);
                        rectangle(540,85,564,100);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(550,90,7);

                        setcolor(15);
                        rectangle(540,205,564,220);
                        setfillstyle(SOLID_FILL,15);
                        floodfill(550,210,15);

                        break;
                    
                    case 3:

                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(190,100,"Elija su cuento:");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,130,"Los tres cerditos");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,150,"La luna");

                        setcolor(RED);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,170,"El cofre");

                        setcolor(CYAN);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(401,435,"|");
                        outtextxy(401,437,"v");

                        delay(270);

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(401,435,"|");
                        outtextxy(401,437,"v");

                        setcolor(7);
                        rectangle(540,205,564,220);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(550,210,7);

                        setcolor(15);
                        rectangle(540,364,564,379);
                        setfillstyle(SOLID_FILL,15);
                        floodfill(550,370,15);

                        break;
                    }
                }
                break;
            
            case Subir:
                if (dez > 1)
                {
                    dez--;

                    switch (dez)
                    {
                    case 1:
                        
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(190,100,"Elija su cuento:");

                        setcolor(RED);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,130,"Los tres cerditos");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,150,"La luna");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,170,"El cofre");

                        setcolor(CYAN);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");

                        delay(270);

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");

                        setcolor(7);
                        rectangle(540,205,564,220);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(550,210,7);

                        setcolor(15);
                        rectangle(540,85,564,100);
                        setfillstyle(SOLID_FILL,15);
                        floodfill(550,90,15);

                        break;
                    
                    case 2:
                        
                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(190,100,"Elija su cuento:");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,130,"Los tres cerditos");

                        setcolor(RED);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,150,"La luna");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,170,"El cofre");

                        setcolor(CYAN);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");

                        delay(270);

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");

                        setcolor(15);
                        rectangle(540,205,564,220);
                        setfillstyle(SOLID_FILL,15);
                        floodfill(550,210,15);

                        setcolor(7);
                        rectangle(540,364,564,379);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(550,370,7);

                        break;

                    case 3:

                        setcolor(0);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(190,100,"Elija su cuento:");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,130,"Los tres cerditos");

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,150,"La luna");

                        setcolor(RED);
                        settextstyle(DEFAULT_FONT,0,1);
                        outtextxy(250,170,"El cofre");

                        setcolor(CYAN);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");
						
                        delay(270);

                        setcolor(BLACK);
                        settextstyle(DEFAULT_FONT,0,2);
                        outtextxy(225,435,"^");
                        outtextxy(225,436,"|");

                        setcolor(7);
                        rectangle(540,205,564,220);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(550,210,7);

                        setcolor(15);
                        rectangle(540,364,564,379);
                        setfillstyle(SOLID_FILL,15);
                        floodfill(550,370,15);
                        
                        break;
                    }
                }
                break;
            }
        }
	}while(tecla != 27);

    getch();
}

