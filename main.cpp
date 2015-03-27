#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>


int main(void){
	ALLEGRO_DISPLAY *display = NULL;

	if(!al_init()){
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialize allegro!", NULL, 0);
		return -1;	
	}
	int width=640;
	int height=480;

	display = al_create_display(width, height);

	if(!display){
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialize display!", NULL, 0);
	}
	al_init_font_addon(); //font addon starten
	al_init_ttf_addon(); //ttf addon starten
	

	ALLEGRO_FONT *font18 = al_load_font("./OpenSans-Bold.ttf", 18, 0); //font variable 
	ALLEGRO_FONT *font24 = al_load_font("./OpenSans-Bold.ttf", 24, 0); //font variable 
	ALLEGRO_FONT *font36 = al_load_font("./OpenSans-Bold.ttf", 36, 0); //font variable 
	
	al_clear_to_color(al_map_rgb(255,255,255)); //backbuffer auf weiß

	al_draw_text(font24, al_map_rgb(0,0,0),50,50,0, "Hello World") ; //Hello world mit font24 in position 50|50
	al_draw_text(font36, al_map_rgb(80,80,80),(width/2),(height/2), ALLEGRO_ALIGN_CENTRE, "Hello World Centre");

	al_draw_textf(font18, al_map_rgb(0,0,0),(width/2),(height/2)+40, ALLEGRO_ALIGN_CENTRE, "Window width and height: %i | %i", width, height);
	
	al_flip_display();
	
	al_rest(5.0);
	
	al_destroy_display(display);

	return 0;
}
