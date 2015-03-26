#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>


int main(void){
	ALLEGRO_DISPLAY *display = NULL;

	if(!al_init()){
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialize allegro!", NULL, 0);
		return -1;	
	}

	display = al_create_display(640, 480);

	if(!display){
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialize display!", NULL, 0);
	}

	al_destroy_display(display);

	return 0;
}
