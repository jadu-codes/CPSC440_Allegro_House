#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main()
{
    al_init();
    al_init_primitives_addon();

    ALLEGRO_DISPLAY* display = al_create_display(800, 600);
    if (!display)
    {
        return -1;
    }

    ALLEGRO_COLOR sky = al_map_rgb(135, 206, 235);
    ALLEGRO_COLOR grass = al_map_rgb(60, 180, 75);
    ALLEGRO_COLOR house = al_map_rgb(210, 140, 90);
    ALLEGRO_COLOR roof = al_map_rgb(150, 50, 40);
    ALLEGRO_COLOR door = al_map_rgb(100, 60, 30);
    ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
    ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
    ALLEGRO_COLOR sun = al_map_rgb(255, 220, 0);

    al_clear_to_color(sky);

    // Grass
    al_draw_filled_rectangle(0, 450, 800, 600, grass);

    // Sun
    al_draw_filled_circle(700, 90, 50, sun);

    // House body
    al_draw_filled_rectangle(250, 280, 550, 450, house);
    al_draw_rectangle(250, 280, 550, 450, black, 3);

    // Roof
    al_draw_filled_triangle(220, 280, 400, 160, 580, 280, roof);
    al_draw_triangle(220, 280, 400, 160, 580, 280, black, 3);

    // Door
    al_draw_filled_rectangle(370, 360, 430, 450, door);
    al_draw_rectangle(370, 360, 430, 450, black, 2);

    // Door knob
    al_draw_filled_circle(418, 405, 5, white);

    // Left window
    al_draw_filled_rectangle(285, 320, 345, 375, white);
    al_draw_rectangle(285, 320, 345, 375, black, 2);
    al_draw_line(315, 320, 315, 375, black, 2);
    al_draw_line(285, 347, 345, 347, black, 2);

    // Right window
    al_draw_filled_rectangle(455, 320, 515, 375, white);
    al_draw_rectangle(455, 320, 515, 375, black, 2);
    al_draw_line(485, 320, 485, 375, black, 2);
    al_draw_line(455, 347, 515, 347, black, 2);

    // Cloud
    al_draw_filled_ellipse(130, 100, 55, 25, white);
    al_draw_filled_circle(90, 95, 25, white);
    al_draw_filled_circle(130, 75, 30, white);
    al_draw_filled_circle(170, 95, 25, white);

    al_flip_display();

    al_rest(8.0);

    al_destroy_display(display);

    return 0;
}