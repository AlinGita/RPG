#include<allegro5\allegro5.h> 
#include<allegro5\allegro_native_dialog.h> 
#include<allegro5\allegro_primitives.h>
#include<allegro5/allegro_ttf.h> 
#include<allegro5/allegro_font.h> 
#include<allegro5\allegro_image.h>

#include<time.h>
#include<iostream>
#include<fstream>
#include<math.h>
#include<sstream>
#include<windows.h>
/*
			//Our primitive header file

enum KEYS{ UP, DOWN, LEFT, RIGHT, A, S, D, W};
int contor;
int x,y;
int mtra=40;
int ax=1,ay=1,dimx=11,dimy=11;
struct Mat
{
		
		int ver;
		int grad;
}mt[51][51];
struct nod {

            int x;
            int y;
    
  nod*urm;
} *prim;
struct sjsd
{
int u;
sjsd*urm;
}*vec,*vec1;

void afisareharta(int x,int y);







void drum(int x,int y,int x1,int y1)
       {
        
        nod *nou,*ultim;
       
  prim=new nod;
  prim->x=x;
  prim->y=y;
  prim->urm=NULL;
  mt[x][y].grad=1;
  mt[x][y].ver=1;
  int grad=1,a=-1,b=-1;
  int contor=1;
  ultim=prim;
  int k=1;
  std::ofstream fis("rezultate.out");
  while((k!=0)||prim->x!=NULL||prim->y!=NULL)
   {        k++;
			grad=mt[prim->x][prim->y].grad;
			
			for(int u=0;u<4;u++)
			{
						
						if(mt[prim->x+vec->u][prim->y+vec1->u].ver==0&&mt[prim->x+vec->u][prim->y+vec1->u].grad>-1)
							{	
									mt[prim->x+vec->u][prim->y+vec1->u].ver=1;
								if((prim->x+vec->u==y1) && (prim->y+vec1->u==x1))
									{
										mt[prim->x+vec->u][prim->y+vec1->u].grad=grad+1;
										k=0;
									}
								   
								if(mt[prim->x+vec->u][prim->y+vec1->u].grad>-1)
								{
									mt[prim->x+vec->u][prim->y+vec1->u].grad=grad+1;
									nou=new nod;
									nou->urm=NULL;
									nou->y=prim->y+vec1->u;
									nou->x=prim->x+vec->u;
								ultim->urm=nou;
								
								ultim=nou;
							   }
						  }
						vec=vec->urm;
						vec1=vec1->urm;
			 }
         prim= prim->urm;
       }

		fis.close();
		std::ofstream f("m.out");
		for(int i=1;i<=mtra;i++)
  {
      for(int j=1;j<=mtra;j++)
      {
        
			
			 if(mt[j][i].grad<=9&&mt[j][i].grad>=0) f<<"  "<<mt[j][i].grad;
			 else if(mt[j][i].grad<=99&&mt[j][i].grad>=10) f<<" "<<mt[j][i].grad;
			 else if(mt[j][i].grad<0) f<<" "<<mt[j][i].grad;else f<<" ";
				 
				// f<<mt[j][i].grad<<" ";
		  
      }
     f<<std::endl;
  }

prim=new nod;	 
  prim->x=x1;
  prim->y=y1;
  prim->urm=NULL;
  ultim=prim;
grad=888800;														while(x1!=x || y1!=y)
														{
														nou=new nod;
														nou->urm=NULL;
														
																				
															for(int u=0;u<4;u++)
															{
																		
																		if(mt[x1+vec->u][y1+vec1->u].grad>0 && mt[x1+vec->u][y1+vec1->u].grad<grad)
																			{	
																				grad=mt[x1+vec->u][y1+vec1->u].grad;
																				a=y1+vec1->u;
																				b=x1+vec->u;
							
		   													                }  
																		vec=vec->urm;vec1=vec1->urm;
														     }
															
															std::cout<<a<<"><"<<b<<"   ";
															
															
															
															y1=a;
															x1=b;
															nou->x=b;
															nou->y=a;
															ultim->urm=nou;
															ultim=nou;
																				

													    }

nou=new nod;
nou->urm=NULL;
nou->x=x;
nou->y=y;
ultim->urm=nou;
ultim=nou;
}



void citire()
{
	std::ifstream g("matrice.out");
	contor=0;
for(int i=1;i<=mtra;i++)
  {
      for(int j=1;j<=mtra;j++)
      {
        
			 g>>mt[j][i].grad;
			if(mt[j][i].grad==0) contor++;
		  mt[j][i].ver=0;
      }
     
  }
contor -=2;
std::cout<<"  "<<contor<<"  ";

//g.close();
sjsd*urm;
sjsd*urm1;
sjsd*urm2;
vec=new sjsd;
urm2=new sjsd;
urm =new sjsd;
urm1=new sjsd;
 
 
 vec->urm=urm;
 urm->urm=urm1;
 urm1->urm=urm2;
 urm2->urm=vec;
  vec->u=0;
  urm1->u=0;
  urm->u=-1;
  urm2->u=1;

  vec1=new sjsd;
urm2=new sjsd;
urm =new sjsd;
urm1=new sjsd;

 vec1->urm=urm;
 urm->urm=urm1;
 urm1->urm=urm2;
 urm2->urm=vec1;
  vec1->u=1;
  urm1->u=-1;
  urm->u=0;
  urm2->u=0;


}


int main()
{
	int width = 1200;
	int height = 650;
	bool tt=false;
	bool done = false;
	bool asd = false;
	bool redraw = true;
	int d1=0,s1=0;
//	int ox,oy,ox1,oy1;
	int pos_x = width / 2;
	int pos_y = height / 2;

	

	int FPS = 30;

	bool keys[8] = {false, false, false, false, false, false, false, false};
	citire();
	std::cout<<mt[2][39].grad<<"-"<<mt[2][39].grad;
	drum(28,34,2,2);
			  
				asd=true;
	
	

	
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(width, height);			//create our display object

	if(!display)										//test display object
		return -1;

	//al_hide_mouse_cursor(display);
	al_install_keyboard();
	al_init_image_addon();
    al_init_primitives_addon();
	al_init_font_addon(); 
    al_init_ttf_addon();
    al_install_mouse();

	ALLEGRO_FONT *font2 = al_load_font("bin/usual.ttf", 16, NULL);

	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / FPS);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_mouse_event_source());

	al_start_timer(timer);

	nod * parc;
	parc=prim;

	while(!done)
	{ 
																
															
															ALLEGRO_EVENT ev;
																al_wait_for_event(event_queue, &ev);

																if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
																{
																	switch(ev.keyboard.keycode)
																	{
																		case ALLEGRO_KEY_UP:
																			keys[   UP] = true;
																			break;
																		case ALLEGRO_KEY_DOWN:
																			keys[ DOWN] = true;
																			break;
																		case ALLEGRO_KEY_RIGHT:
																			keys[RIGHT] = true;
																			break;
																		case ALLEGRO_KEY_LEFT:
																			keys [LEFT] = true;
																			break;
				
																		case ALLEGRO_KEY_A:
																			keys[LEFT] = true;
																			break;
																		case ALLEGRO_KEY_W:
																			keys[UP] = true;
																			break;
																		case ALLEGRO_KEY_S:
																			keys[DOWN] = true;
																			break;
																		case ALLEGRO_KEY_D:
																			keys[RIGHT] = true;
																			break;
				
					
																	}
																}



																else if(ev.type == ALLEGRO_EVENT_MOUSE_AXES)
        {
            x = ev.mouse.x;
            y = ev.mouse.y;	

			std::stringstream str,str1; 
													str <<"X:"<<x/dimx<<" ";
													str1<<"Y:"<<y/dimy<<" ";

													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 20, NULL,str.str().c_str() );
													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 75, NULL,str1.str().c_str() );
																
																	al_draw_filled_rectangle(ax+(x/dimx)*dimx, ay+(y/dimy)*dimy, ax+(x/dimx)*dimx+9, ay+(y/dimy)*dimy+9, al_map_rgb(250,0,45));

			
			

        }
        else if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
        {
			
															
																
																
																
																}else	
																	/*if(ev.type == ALLEGRO_EVENT_KEY_UP)
																{
																	switch(ev.keyboard.keycode)
																	{
																		case ALLEGRO_KEY_UP:
																			keys[UP] = false;
																			break;
																		case ALLEGRO_KEY_DOWN:
																			keys[DOWN] = false;
																			break;
																		case ALLEGRO_KEY_RIGHT:
																			keys[RIGHT] = false;
																			break;
																		case ALLEGRO_KEY_LEFT:
																			keys[LEFT] = false;
																			break;
																		case ALLEGRO_KEY_A:
																			keys[LEFT] = false;
																			break;
																		case ALLEGRO_KEY_W:
																			keys[UP] = false;
																			break;
																		case ALLEGRO_KEY_S:
																			keys[DOWN] = false;
																			break;
																		case ALLEGRO_KEY_D:
																			keys[RIGHT] = false;
																			break;
																		case ALLEGRO_KEY_ESCAPE:
																			done = true;
																			break;
																	}
																}
																else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
																{
																	done = true;
																}
																else if(ev.type == ALLEGRO_EVENT_TIMER)
																{
																	if(keys[UP]==true||keys[W]==true)
																		pos_y -=   5; 
																	if(keys[RIGHT]==true||keys[D]==true)
																		pos_x +=   5;
																	if(keys[LEFT]==true||keys[A]==true)
																		pos_x -=   5;
																	if(keys[DOWN]==true||keys[S]==true)
																		pos_y +=   5;
			
																	if (pos_y<   0)	pos_y =    0;
																	if (pos_y> 620)	pos_y =  620;
																	if (pos_x<   0)	pos_x =    0;  
																	if (pos_x>1170)	pos_x = 1170; 

																	redraw = true;
																	if(asd==true){
																	tt=true;
																	parc=parc->urm;
																
																std::stringstream str,str1; 
													str <<"X:"<<x/dimx<<" ";
													str1<<"Y:"<<y/dimy<<" ";

													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 20, NULL,str.str().c_str() );
													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 75, NULL,str1.str().c_str() );
																
																	al_draw_filled_rectangle(ax+(x/dimx)*dimx, ay+(y/dimy)*dimy, ax+(x/dimx)*dimx+9, ay+(y/dimy)*dimy+9, al_map_rgb(250,0,45));

																
																}
																	
																	
																

																}

																if(redraw && al_is_event_queue_empty(event_queue))
																{
																	redraw = false;
																	
																	//al_draw_filled_rectangle(pos_x, pos_y, pos_x + 30, pos_y + 30, al_map_rgba(255,0,255,125));
																	//al_draw_filled_rectangle(pos_x+10, pos_y+10, pos_x + 40, pos_y + 40, al_map_rgba(0,125,255,125));
																	//al_draw_filled_rectangle(pos_x+17, pos_y+17, pos_x + 40, pos_y + 40, al_map_rgba(0,0,0,125));
																	
																}
																
																if(tt==true){
																	
																	if (parc==NULL){
																		parc=prim;}
																
																
																
																
																
																}
																

																std::stringstream str,str1; 
													str <<"X:"<<x/dimx<<" ";
													str1<<"Y:"<<y/dimy<<" ";

													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 20, NULL,str.str().c_str() );
													al_draw_text(font2, al_map_rgb(41, 250, 94), 1050 , 75, NULL,str1.str().c_str() );
																
																	al_draw_filled_rectangle(ax+(x/dimx)*dimx, ay+(y/dimy)*dimy, ax+(x/dimx)*dimx+9, ay+(y/dimy)*dimy+9, al_map_rgb(250,0,45));

																afisareharta(x,y);
			al_draw_filled_rectangle(ax+parc->x*dimx, ay+parc->y*dimy, ax+parc->x*dimx + 9, ay+parc->y*dimy + 9, al_map_rgb(250,0,45));
																
																tt=false;

																    al_flip_display();
																	al_clear_to_color(al_map_rgb(0,0,0));

																	


	}

	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_display(display);						//destroy our display object

	return 0;
}
void afisareharta(int x,int y)
{
	for(int i = 1; i <=mtra;i++)
	{
	
		for(int j = 1;j <=mtra;j++)
		{
			if(mt[i][j].grad==-1)
				al_draw_filled_rectangle(ax+i*dimx, ay+j*dimy, ax+i*dimx + 9, ay+j*dimy + 9, al_map_rgb(10,255,45));
			if(mt[i][j].grad==-2)
				al_draw_filled_rectangle(ax+i*dimx, ay+j*dimy, ax+i*dimx + 9, ay+j*dimy + 9, al_map_rgb(10,155,245));
		}
	
	
	}


}
*/




/*#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>*/
#include "objects.h"

//GLOBALS==============================
const int WIDTH = 800;
const int HEIGHT = 400;
const int NUM_BULLETS = 9     ;
const int NUM_COMETS = 10;
enum KEYS{UP, DOWN, LEFT, RIGHT, SPACE};
bool keys[5] = {false, false, false, false, false};

//prototypes
void InitShip(SpaceShip &ship);
void DrawShip(SpaceShip &ship);
void MoveShipUp(SpaceShip &ship);
void MoveShipDown(SpaceShip &ship);
void MoveShipLeft(SpaceShip &ship);
void MoveShipRight(SpaceShip &ship);

void InitBullet(Bullet bullet[], int size);
void DrawBullet(Bullet bullet[], int size);
void FireBullet(Bullet bullet[], int size, SpaceShip &ship);
void UpdateBullet(Bullet bullet[], int size);
void CollideBullet(Bullet bullet[], int bSize, Comet comets[], int cSize, SpaceShip &ship);

void InitComet(Comet comets[], int size);
void DrawComet(Comet comets[], int size);
void StartComet(Comet comets[], int size);
void UpdateComet(Comet comets[], int size);
void CollideComet(Comet comets[], int cSize, SpaceShip &ship);

int dimx,dimy,pctinceputx,pctinceputy,rad=0;
int num;
int HHH();
int hhh();

int main()
{
	int j=1;
	while(j!=0)
j=hhh();
return j;
}


int hhh()
{

	 ALLEGRO_DISPLAY *displays;
	int verificare=0, ay=50, pctrr=0;
  std::cout<<"1";

   
 


		if(!al_init())										//initialize Allegro
		return -1;

	displays = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!displays)										//test display object
		return -1;



   
 
  std::cout<<"1";
     
    ALLEGRO_COLOR playerColor = al_map_rgb(255, 13, 13);;
  std::cout<<"1";
	
   
	bool done = false,k = false;
    int x = 10, y = 10;
   int i=0,l=0;
	
	
  std::cout<<"1";
	
	al_init_image_addon();
    al_init_primitives_addon();
	al_init_font_addon(); 
    al_init_ttf_addon();
    al_install_mouse();

	ALLEGRO_BITMAP *background = al_load_bitmap("image1.jpg");
	ALLEGRO_FONT *font1 = al_load_font("GOODTIME.ttf", 24, 0);
    ALLEGRO_FONT *font3 = al_load_font("hulk3d2.ttf", 72, 0);
    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
  std::cout<<"1";
  
    al_register_event_source(event_queue, al_get_display_event_source(displays));
    al_register_event_source(event_queue, al_get_mouse_event_source());
 
    //al_hide_mouse_cursor(displays);
  std::cout<<"1";
 
 int ii=1;
    while(!done)
    {
			
		
		al_draw_bitmap(background, 0, 0, NULL);
		std::cout<<"5";
			al_draw_filled_rectangle(320, 150,485, 174, al_map_rgb(44, 117, 255));

			al_draw_text(font3, al_map_rgb(255, 0, 0), 90 , 45, 0, "SPACE SHOOTER!");
			
		std::cout<<"6";

			al_draw_text(font1, al_map_rgb(255, 0, 0), 320 , 150, NULL, "New game");

			al_draw_filled_rectangle(300, 250,500, 274, al_map_rgb(44, 117, 255));
													   
			al_draw_text(font1, al_map_rgb(255, 0, 0), 300 , 250, NULL, "Instructiuni");

			al_draw_filled_rectangle(370, 350,432, 374, al_map_rgb(44, 117, 255));

			al_draw_text(font1, al_map_rgb(255, 0, 0), 370, 350, NULL, "Exit");
		
	 std::cout<<"2";
  

      ALLEGRO_EVENT events; 
        al_wait_for_event(event_queue, &events);
 
        if(events.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            done = true;l=1;
        }
        else if(events.type == ALLEGRO_EVENT_MOUSE_AXES)
        {
            x = events.mouse.x;
            y = events.mouse.y;	
        }
        else if(events.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
        {
            if(events.mouse.button & 1)
			{
			k = true;	
			
			} 
        
        }
     
	
		if(k== true)
		{
				verificare=0;
			if((320<x)&&(150<y)&&(485>x)&&(174>y))
				{
					verificare=1;
					done = true;
				}
			if((300<x)&&(250<y)&&(500>x)&&(274>y))
				{
					

			   system("reguli.txt");
				}
			if((370<x)&&(350<y)&&(432>x)&&(374>y))
				{
					
					al_show_mouse_cursor(displays);
					l=al_show_native_message_box(displays, NULL, " Doriti sa iesiti?", " ", NULL,ALLEGRO_MESSAGEBOX_OK_CANCEL | ALLEGRO_MESSAGEBOX_WARN);
					if(l==1) done=true;
					al_hide_mouse_cursor(displays);
					
				}
			 k=false;	
			}
				 


				
					
				
				

		al_flip_display();
		
        al_clear_to_color(al_map_rgb(0, 0, 0));
		
    }
    al_destroy_display(displays);

	al_destroy_font(font1);
    al_destroy_event_queue(event_queue);
	if(verificare==1)
					{
				 pctrr=HHH();
	 std::cout<<"3";
	 verificare = 0;
	 l=0;
					}
	std::cout<<"4";
	
	if (l==1) return 0;
	else return 1;
}



int HHH()
{
	//primitive variable
	bool done = false;
	bool redraw = true;
	const int FPS = 60;
	bool isGameOver = false;

	//object variables
	SpaceShip ship;
	Bullet bullets[NUM_BULLETS];
	Comet comets[NUM_COMETS];

	//Allegro variables
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_FONT *font18 = NULL;
	ALLEGRO_BITMAP *background1 = al_load_bitmap("image2.jpg");
	//Initialization Functions
	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();
	al_init_font_addon();
	al_init_ttf_addon();

	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / FPS);

	srand(time(NULL));
	InitShip(ship);
	InitBullet(bullets, NUM_BULLETS);
	InitComet(comets, NUM_COMETS);
	
	font18 = al_load_font("usual.ttf", 18, 0);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_start_timer(timer);
	while(!done)
	{
		
		
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_TIMER)
		{
			redraw = true;
			if(keys[UP])
				MoveShipUp(ship);
			if(keys[DOWN])
				MoveShipDown(ship);
			if(keys[LEFT])
				MoveShipLeft(ship);
			if(keys[RIGHT])
				MoveShipRight(ship);

			if(!isGameOver)
			{
				UpdateBullet(bullets, NUM_BULLETS);
				StartComet(comets, NUM_COMETS);
				UpdateComet(comets, NUM_COMETS);
				CollideBullet(bullets, NUM_BULLETS, comets, NUM_COMETS, ship);
				CollideComet(comets, NUM_COMETS, ship);

				if(ship.lives <= 0)
					isGameOver = true;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = true;
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			case ALLEGRO_KEY_UP:
				keys[UP] = true;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = true;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = true;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = true;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = true;
				FireBullet(bullets, NUM_BULLETS, ship);
				break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			case ALLEGRO_KEY_UP:
				keys[UP] = false;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = false;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = false;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = false;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = false;
				break;
			}
		}

		if(redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false; 

			if(!isGameOver)
			{
				//al_draw_bitmap(background1, 0, 0, NULL);
				
				DrawShip(ship);
				DrawBullet(bullets, NUM_BULLETS);
				DrawComet(comets, NUM_COMETS);

				al_draw_textf(font18, al_map_rgb(255, 0, 255), 5, 5, 0, "Player has %i lives left. Player has destroyed %i objects", ship.lives, ship.score);
			}
			else
			{
				al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
				al_draw_textf(font18, al_map_rgb(0, 255, 255), WIDTH / 2, HEIGHT / 2, ALLEGRO_ALIGN_CENTRE, "Game Over. Final Score: %i", ship.score);
				al_flip_display();
				done = true;
				al_rest(3.0);
			}
		
			al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
		}
	}
	 std::cout<<"2";
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_font(font18);
	al_destroy_display(display);						//destroy our display object
	 std::cout<<"2";
	return 1;
}

void InitShip(SpaceShip &ship)
{
	ship.x = 20;
	ship.y = HEIGHT / 2;
	ship.ID = PLAYER;
	ship.lives = 3;
	ship.speed = 5;
	ship.boundx = 6;
	ship.boundy = 7;
	ship.score = 0;
}
void DrawShip(SpaceShip &ship)
{
	al_draw_filled_rectangle(ship.x, ship.y - 9, ship.x + 10, ship.y - 7, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(ship.x, ship.y + 9, ship.x + 10, ship.y + 7, al_map_rgb(255, 0, 0));

	al_draw_filled_triangle(ship.x - 12, ship.y - 17, ship.x +12, ship.y, ship.x - 12, ship.y + 17, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(ship.x - 12, ship.y - 2, ship.x +15, ship.y + 2, al_map_rgb(0, 0, 255));
}
void MoveShipUp(SpaceShip &ship)
{
	ship.y -= ship.speed;
	if(ship.y < 0)
		ship.y = 0;
}
void MoveShipDown(SpaceShip &ship)
{
	ship.y += ship.speed;
	if(ship.y > HEIGHT)
		ship.y = HEIGHT;
}
void MoveShipLeft(SpaceShip &ship)
{
	ship.x -= ship.speed;
	if(ship.x < 0)
		ship.x = 0;
}
void MoveShipRight(SpaceShip &ship)
{
	ship.x += ship.speed;
	if(ship.x > 300)
		ship.x = 300;
}

void InitBullet(Bullet bullet[], int size)
{
	for(int i = 0; i < size; i++)
	{
		bullet[i].ID = BULLET;
		bullet[i].speed = 10;
		bullet[i].live = false;
	}
}
void DrawBullet(Bullet bullet[], int size)
{
	for( int i = 0; i < size; i++)
	{
		if(bullet[i].live)
			al_draw_filled_circle(bullet[i].x, bullet[i].y, 2, al_map_rgb(255, 255, 255));
	}
}
void FireBullet(Bullet bullet[], int size, SpaceShip &ship)
{
	for( int i = 0; i < size; i++)
	{
		if(!bullet[i].live)
		{
			bullet[i].x = ship.x + 17;
			bullet[i].y = ship.y;
			bullet[i].live = true;
			break;
		}
	}
}
void UpdateBullet(Bullet bullet[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(bullet[i].live)
		{
			bullet[i].x += bullet[i].speed;
			if(bullet[i].x > WIDTH)
				bullet[i].live = false;
		}
	}
}
void CollideBullet(Bullet bullet[], int bSize, Comet comets[], int cSize, SpaceShip &ship)
{
	for(int i = 0; i < bSize; i++)
	{
		if(bullet[i].live)
		{
			for(int j =0; j < cSize; j++)
			{
				if(comets[j].live)
				{
					if(bullet[i].x > (comets[j].x - comets[j].boundx) &&
						bullet[i].x < (comets[j].x + comets[j].boundx) &&
						bullet[i].y > (comets[j].y - comets[j].boundy) &&
						bullet[i].y < (comets[j].y + comets[j].boundy))
					{
						bullet[i].live = false;
						comets[j].live = false;

						ship.score++;
					}
				}
			}
		}
	}
}

void InitComet(Comet comets[], int size)
{
	for(int i = 0; i < size; i++)
	{
		comets[i].ID = ENEMY;
		comets[i].live = false;
		comets[i].speed = 99;
		comets[i].boundx = 18;
		comets[i].boundy = 18;
	}
}
void DrawComet(Comet comets[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(comets[i].live)
		{
			al_draw_filled_circle(comets[i].x, comets[i].y, 20, al_map_rgb(255, 0, 0));
		}
	}
}
void StartComet(Comet comets[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(!comets[i].live)
		{
			if(rand() % 500 == 0)
			{
				comets[i].live = true;
				comets[i].x = WIDTH;
				comets[i].y = 30 + rand() % (HEIGHT - 60);

				break;
			}
		}
	}
}
void UpdateComet(Comet comets[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(comets[i].live)
		{
			comets[i].x -= comets[i].speed;
		}
	}
}
void CollideComet(Comet comets[], int cSize, SpaceShip &ship)
{
	for(int i = 0; i < cSize; i++)
	{
		if(comets[i].live)
		{
			if(comets[i].x - comets[i].boundx < ship.x + ship.boundx &&
				comets[i].x + comets[i].boundx > ship.x - ship.boundx &&
				comets[i].y - comets[i].boundy < ship.y + ship.boundy &&
				comets[i].y + comets[i].boundy > ship.y - ship.boundy)
			{
				ship.lives--;
				comets[i].live = false;
			}
			else if(comets[i].x < 0)
			{
				comets[i].live = false;
				ship.lives--;
			}
		}
	}
}